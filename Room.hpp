#pragma once
#ifndef Room_hpp
#define Room_hpp

#include <iostream>
using namespace std;


class Room {

	const float BASE_VALUE = 120.0f;			// Valor base inicial do quarto
	const float FLOOR_ADD_VALUE = 0.05f;		// Percentual de aumento do valor base dependendo do andar
	const float SINGLE_BED_VALUE = 20.0f;	// Valor adicional por cama de solteiro
	const float DOUBLE_BED_VALUE = 35.0f;	// Valor adicional por cama de casal
	const float JACUZZI_VALUE = 60.0f;		// Valor adicional caso tenha Jacuzzi
	const float KITCHEN_VALUE = 80.0f;		// Valor adicional caso tenha cozinha
	const float BALCONY_VALUE = 40.0f;		// Valor adicional caso tenha sacada

public:
	Room(
		int floor,
		int number,
		int single_beds,
		int double_beds,
		bool jacuzzi,
		bool kitchen,
		bool balcony
	);
	float GetDailyRate();
	int GetFloor();
	int GetNumber();
	int GetSingleBeds();
	int GetDoubleBeds();
	bool GetJacuzzi();
	bool GetKitchen();
	bool GetBalcony();

private:
	int floor;
	int number;
	int single_beds;
	int double_beds;
	bool jacuzzi;
	bool kitchen;
	bool balcony;
};

#endif // !Room_hpp

