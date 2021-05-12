/*******************************************************************************************

* Programmer: Guangbei Yi                                                                        *

* Class: CptS 121, Spring 2021; Programming Assignment 2                                            *

* Programming Assignment: A Modular Approach to the Equation Evaluator                    *

* Date: February 5, 2021                                                                           *

* Description: This program solved Write a C program that evaluates the equations provided.

* File Description: This profile include all function definitions for the above functions.

* https://eecs.wsu.edu/~aofallon/cpts121/progassignments/PA2.htm

*******************************************************************************************/

#include "equations.h"


double calculate_newtons_2nd_law(double mass, double acceleration)
{
	//This function calcuate Newton¡¯s Second Law of Motion 
	double force = 0;
	force = mass * acceleration;
	return force;
}

double calculate_volume_cylinder(double radius, double height)
{
	//This function calcuate Volume of a cylinder
	double volume_cylinder = 0;
	volume_cylinder = PI * pow(radius, 2) * height;
	return volume_cylinder;
}

char character_encoding(char plaintext_character, int shift)
{
	//This function encoding a input character
	char encoded_character = 0;
	if (plaintext_character + shift > 94 || plaintext_character + shift < -32)
	{
		printf("Encode Limited Reached, abording...\n");
		return 0;
	}
	//The character will become lowercase if if plaintext_character is uppercase and shift is zero.
	//If the shift is various encode will be moved as ascii ordered.
	encoded_character = plaintext_character - 65 + 97 - shift;
	return encoded_character;
}

double calculate_distance_between_two_points(double _x1, double _x2, double _y1, double _y2)
{
	//This function calcuate Distance between two points
	double distance = 0;
	distance = sqrt(pow(_x1 - _x2, 2) + pow(_y1 - _y2, 2));
	return distance;
}

double calculating_the_tangent(double theta)
{
	//This function calcuate Tangent
	double tan_theta = 0;
	tan_theta = sin(theta) / cos(theta);
	return tan_theta;
}

double calculating_total_parallel_resistance(int R1, int R2, int R3)
{
	//This function calcuate Total resistance of resistors in parallel
	double total_resistance = 0;
	total_resistance = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);
	return total_resistance;
}

double calculating_the_general_equation(int a, double x, double y, double z)
{
	//This function calcuate General equation: y = (2 / 3) - y + z * x / (a % 2) + PI
	double y_res = 0;
	if (a % 2 == 0)
	{
		printf("a can not be even!: ");
		return y_res;
	}
	y_res = (float)2 / 3 - y + z * x / (a % 2) + PI;
	return y_res;
}