cmake_minimum_required(VERSION 3.0.0)
project(Race)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library (RaceDynamicLib AirRAce.h AirRace.cpp
							AirVehicle.h AirVehicle.cpp
							AllTerrainBoots.h AllTerrainBoots.cpp
							Broom.h Broom.cpp
							Camel.h Camel.cpp
							Centaur.h Centaur.cpp
							Eagle.h Eagle.cpp
							GroundRace.h GroundRace.cpp
							GroundVehicle.h GroundVehicle.cpp
							MagicCarpet.h MagicCarpet.cpp
							Race.h Race.cpp
							SpeedCamel.h SpeedCamel.cpp
							Vehicle.h Vehicle.cpp
)
							
add_executable (Race main.cpp)
target_link_libraries (Race RaceDynamicLib)