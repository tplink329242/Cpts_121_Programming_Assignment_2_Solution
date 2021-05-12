/*******************************************************************************************

* Programmer: Guangbei Yi                                                                        *

* Class: CptS 121, Spring 2021; Programming Assignment 2                                            *

* Programming Assignment: A Modular Approach to the Equation Evaluator                    *

* Date: February 5, 2021                                                                           *

* Description: This program solved Write a C program that evaluates the equations provided.

* File Description: This profile defined which will store all #includes, #defines, and function prototypes.

* https://eecs.wsu.edu/~aofallon/cpts121/progassignments/PA2.htm

*******************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS 
#define PI 3.1415926
#include<stdio.h>
#include<math.h>

double calculate_newtons_2nd_law(double mass, double acceleration);
double calculate_volume_cylinder(double radius, double height);
char character_encoding(char plaintext_character, int shift);
double calculate_distance_between_two_points(double _x1, double _x2, double _y1, double _y2);
double calculating_the_tangent(double theta);
double calculating_total_parallel_resistance(int R1, int R2, int R3);
double calculating_the_general_equation(int a, double x, double y, double z);