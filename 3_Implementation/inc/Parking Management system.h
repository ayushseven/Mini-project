/**
 * @file PMS.h
 * @author ayush (you@domain.com)
 * @brief The header file with declarations of the parking management system
 * @version 0.1
 * @date 2021-07-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __PMS__
#define __PMS__

#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#include"string.h"

/**
 * @brief structure template
 * 
 */
typedef struct cars{
    char number_plate[11];
    char name_of_driver[21];
    char driver_mobile[11];
}vehicle;

/**
 * @brief Finds the distance between the spot in the parking lot 
 * and the place where car is standing.
 * @param index_1 
 * @param index_2 
 * @return int 
 */
float distance(int index_1, int index_2);

/**
 * @brief Gives the data entry in the form structure.
 * 
 */
void data_entry(int row,int column,vehicle *plptr);

/**
 * @brief the data will be deleted and set to 0
 * 
 */
void data_erase(int row, int column, vehicle *plptr);

/**
 * @brief this function gives out the distance from nearest point
 * 
 * @param ptr
 * @return int 
 */
int *location(vehicle *plptr,int *locptr);

/**
 * @brief gives out the array with 3 elements of the shortest distance
 * row, column, distance by comparing the value of the distances
 * of all parkinf lots.
 * @param tptr 
 * @return int* 
 */
int *shortest_distance(int *tptr);

/**
 * @brief counts the spaces empty in the  parking lot
 * @param plptr 
 * @return int 
 */
int count(vehicle *plptr);

#endif
