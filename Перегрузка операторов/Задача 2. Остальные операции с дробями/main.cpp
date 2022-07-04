#include <iostream>
#include <string>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:

	friend std::ostream& operator<<(std::ostream& out, const Fraction& rhs) {
		out << rhs.numerator_ << "/" << rhs.denominator_;
		return out;
	}

	Fraction(int numerator, int denominator)
	{
		if (denominator == 0) {
			throw std::invalid_argument("Сan't divide by zero");
		}
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator ==(const Fraction& rhs)const {
		return numerator_ == rhs.numerator_ && denominator_ == rhs.denominator_;
	}

	bool operator !=(const Fraction& rhs)const {
		return  !(*this == rhs);
	}

	bool operator < (const Fraction& rhs)const {
		if (denominator_ != rhs.denominator_) {
			return numerator_ * rhs.denominator_ < rhs.numerator_* denominator_;
		}
		return numerator_ < rhs.numerator_;
	}

	bool operator > (const Fraction& rhs)const {
		return (!(*this < rhs) && !(*this == rhs));
	}

	bool operator <= (const Fraction& rhs)const {
		return !(*this > rhs);
	}

	bool operator >= (const Fraction& rhs)const {
		return !(*this < rhs);
	}


	void reduction() {
		int NOD = std::gcd(numerator_, denominator_);
		numerator_ /= NOD;
		denominator_ /= NOD;
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
		temp = temp + (-rhs);
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
		Fraction temp2(rhs.denominator_, rhs.numerator_);
		temp = temp * temp2;
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
		Fraction temp(1, 1);
		*this = *this + temp;
		reduction();
		return *this;
	}

	//постфиксный
	Fraction operator ++(int) {
		Fraction temp(*this);
		++(*this);
		reduction();
		temp.reduction();
		return temp;
	}

	//префиксный
	Fraction& operator --() {
		Fraction temp(1, 1);
		*this = *this - temp;
		reduction();
		return *this;
	}

	//постфиксный
	Fraction operator --(int) {
		Fraction temp(*this);
		--(*this);
		reduction();
		temp.reduction();
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

	std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << "\n";
	std::cout << f1 << " - " << f2 << " = " << (f1 - f2) << "\n";
	std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << "\n";
	std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << "\n";
	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << (++f1 * f2) << "\n";
	std::cout << "Значение дроби 1 = " << f1 << "\n";
	std::cout << f1 << "-- * " << f2 << " = ";
	std::cout << (f1-- * f2) << "\n";
	std::cout << "Значение дроби 1 = " << f1 << "\n";
}
