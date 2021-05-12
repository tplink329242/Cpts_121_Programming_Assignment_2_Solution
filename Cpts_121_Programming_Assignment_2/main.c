/*******************************************************************************************

* Programmer: Guangbei Yi                                                                        *

* Class: CptS 121, Spring 2021; Programming Assignment 2                                            *

* Programming Assignment: A Modular Approach to the Equation Evaluator                    *

* Date: February 5, 2021                                                                           *

* Description: This program solved Write a C program that evaluates the equations provided.

* File Description: This is the main entrance for this program, in charge of user input and output.

* https://eecs.wsu.edu/~aofallon/cpts121/progassignments/PA2.htm

*******************************************************************************************/

#include"equations.h"

int main(int argc, char* argv[])
{
	//task 1
	double mass = 0, acceleration = 0, force = 0;
	printf("******************************************************************************************\n");
	printf("Enter two floating-point values for task 1: ");
	scanf(" %lf%lf", &mass, &acceleration);
	force = calculate_newtons_2nd_law(mass,acceleration);
	printf("\nNewton_s_Second_Law: force = mass * acceleration = %f * %f = %f", mass, acceleration, force);
	printf("\n******************************************************************************************\n");

	//task 2
	double radius = 0, height = 0, volume_cylinder = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter two floating-point type values for task 2: ");
	scanf(" %lf%lf", &radius, &height);
	volume_cylinder = calculate_volume_cylinder(radius, height);
	printf("\nVolume of a cylinder: volume_cylinder = radius^2 * height = PI * %f^2 * %f = %f", radius, height, volume_cylinder);
	printf("\n******************************************************************************************\n");

	//task 3
	char plaintext_character = 0;
	char encoded_character = 0;
	int shift = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter a char you want to encode in task 3: ");
	scanf(" %c", &plaintext_character);
	printf("Enter an intger you want to use in encoding: ");
	scanf(" %d", &shift);
	encoded_character = character_encoding(plaintext_character, shift);
	printf("\nCharacter encoding: encoded_character = (plaintext_character - 'A') + 'a' - shift = (%d - 'A') + 'a' - %d = %c", plaintext_character, shift, encoded_character);
	printf("\n******************************************************************************************\n");

	//task 4
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, distance = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter 4 float type values(x1,x2,y1,y2) for task 4: ");
	scanf(" %lf%lf%lf%lf", &x1, &x2, &y1, &y2);
	distance = calculate_distance_between_two_points(x1, x2, y1, y2);
	printf("\nDistance between two points: distance = square root of ((x1 - x2)^2 + (y1 - y2)^2) = sqrt( (%lf - %lf) ^ 2 + (%lf - %lf) ^ 2 ) = %lf", x1, x2, y1, y2, distance);
	printf("\n******************************************************************************************\n");

	//task 5
	double theta = 0, tan_theta = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter a float type values for task 5: ");
	scanf(" %lf", &theta);
	tan_theta = calculating_the_tangent(theta);
	printf("\nTangent: tan_theta = sin (theta) / cos (theta) = sin (%lf) / cos (%lf) = %lf", theta, theta, tan_theta);
	printf("\n******************************************************************************************\n");

	//task 6
	int R1 = 0, R2 = 0, R3 = 0;
	double total_resistance = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter 3 integer type values for task 6: ");
	scanf(" %d%d%d", &R1, &R2, &R3);
	total_resistance = calculating_total_parallel_resistance(R1, R2, R3);
	printf("\nTotal resistance of resistors in parallel: total_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3) = 1 / (1 / %d + 1 / %d + 1 / %d) = %lf", R1, R2, R3, total_resistance);
	printf("\n******************************************************************************************\n");

	//task 7
	int a = 0;
	double x = 0, y = 0, z = 0, y_res = 0;
	printf("\n******************************************************************************************\n");
	printf("Enter a integer type values for task 7: ");
	scanf(" %d", &a);
	printf("Enter 3 float type values for task 7: ");
	scanf(" %lf%lf%lf", &x, &y, &z);
	y_res = calculating_the_general_equation(a, x, y, z);
	printf("\nGeneral equation: y = (2 / 3) - y + z * x / (a %% 2) + PI = (2 / 3) - %lf + %lf * %lf / (%d %% 2) + PI = %lf", y, z, x, a, y_res);
	printf("\n******************************************************************************************\n");

	return 0;
}