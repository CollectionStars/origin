#include <iostream>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction(const Fraction& oth) :numerator_(oth.numerator_), denominator_(oth.denominator_) {}

	std::string to_string() {
		return std::string(std::to_string(numerator_) + "/" + std::to_string(denominator_));
	}

	bool operator ==(const Fraction& rhs)const {
		if (numerator_ == rhs.numerator_ && denominator_ == rhs.denominator_) {
			return true;
		}
		return false;
	}

	bool operator !=(const Fraction& rhs)const {
		return  !(*this == rhs);
	}

	bool operator < (const Fraction& rhs)const {
		return  static_cast<double>(numerator_) / denominator_ < static_cast<double>(rhs.numerator_) / rhs.denominator_;
	}

	bool operator > (const Fraction& rhs)const {
		return  static_cast<double>(numerator_) / denominator_ > static_cast<double>(rhs.numerator_) / rhs.denominator_;
	}

	bool operator <= (const Fraction& rhs)const {
		return !(*this > rhs);
	}

	bool operator >= (const Fraction& rhs)const {
		return !(*this < rhs);
	}

	void reduction() {
		int temp = numerator_;
		if (numerator_ > denominator_) {
			temp = denominator_;
		}
		//по модулю, чтобы сокращать еще и отрицательные дроби
		for (int i = abs(temp); i > 0; i--)
		{
			if (numerator_ % i == 0 && denominator_ % i == 0) {
				numerator_ /= i;
				denominator_ /= i;
			}
		}
	}

	Fraction operator +(const Fraction& rhs)const {
		Fraction temp(*this);

		if (temp.denominator_ == rhs.denominator_) {
			temp.numerator_ += rhs.numerator_;
		}
		else {
			temp.denominator_ *= rhs.denominator_;
			temp.numerator_ *= rhs.denominator_;
			temp.numerator_ += rhs.numerator_ * denominator_;
		}
		temp.reduction();
		return temp;
	}

	Fraction operator -(const Fraction& rhs)const {
		Fraction temp(*this);

		if (temp.denominator_ == rhs.denominator_) {
			temp.numerator_ -= rhs.numerator_;
		}
		else {
			temp.denominator_ *= rhs.denominator_;
			temp.numerator_ *= rhs.denominator_;
			temp.numerator_ -= rhs.numerator_ * denominator_;
		}
		temp.reduction();
		return temp;
	}

	Fraction operator *(const Fraction& rhs)const {
		Fraction temp(*this);

		temp.numerator_ *= rhs.numerator_;
		temp.denominator_ *= rhs.denominator_;
		temp.reduction();
		return temp;
	}

	Fraction operator /(const Fraction& rhs)const {
		Fraction temp(*this);

		temp.numerator_ *= rhs.denominator_;
		temp.denominator_ *= rhs.numerator_;
		temp.reduction();
		return temp;
	}

	Fraction operator -()const {
		Fraction temp(*this);

		temp.numerator_ *= (-1);
		temp.reduction();
		return temp;
	}

	//префиксный
	Fraction& operator ++() {
		numerator_ += denominator_;
		return *this;
	}

	//постфикснфый
	Fraction operator ++(int) {
		Fraction temp(*this);
		++(*this);
		return temp;
	}

	//префиксный
	Fraction& operator --() {
		numerator_ -= denominator_;
		return *this;
	}

	//постфикснфый
	Fraction operator --(int) {
		Fraction temp(*this);
		--(*this);
		return temp;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> a;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> b;
	Fraction f1(a, b);

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> a;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> b;

	Fraction f2(a, b);

	std::cout << f1.to_string() << " + " << f2.to_string() << " = " << (f1 + f2).to_string() << "\n";
	std::cout << f1.to_string() << " - " << f2.to_string() << " = " << (f1 - f2).to_string() << "\n";
	std::cout << f1.to_string() << " * " << f2.to_string() << " = " << (f1 * f2).to_string() << "\n";
	std::cout << f1.to_string() << " / " << f2.to_string() << " = " << (f1 / f2).to_string() << "\n";
	std::cout << "++" << f1.to_string() << " * " << f2.to_string() << " = ";
	std::cout << (++f1 * f2).to_string() << "\n";
	std::cout << "Значение дроби 1 = " << f1.to_string() << "\n";
	std::cout << f1.to_string() << "-- * " << f2.to_string() << " = ";
	std::cout << (f1-- * f2).to_string() << "\n";
	std::cout << "Значение дроби 1 = " << f1.to_string() << "\n";
}
