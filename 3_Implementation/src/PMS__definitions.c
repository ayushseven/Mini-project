#include"PMS.h"

/**
 * @brief Distance
 * 
 * @param index_1 
 * @param index_2 
 * @return float 
 */
float distance(int index_1, int index_2){
    int temp;
    temp = (index_1*index_1) + (index_2*index_2);
    return sqrt(temp);
}

/**
 * @brief This function takes 2 pointer
 * plptr is pointer to the parking lot start
 * locptr is pointer to the new dynamic array to store the location of 
 * empty space and the distance from spot.
 * eg if row,column 1,2 are free then locptr will store 1,2,root(5) in
 * the locptr 1D-array
 * if the plot is full then only it will come out of both the for 
 * loops and so we return 11 as error value.
 * @param plptr 
 * @param locptr 
 * @return int* 
 */
int *location(vehicle *plptr,int *locptr){
    int row,column;
    for(row=0;row<10;row++){
        for(column=0;column<10;column++){
            int a = strcmp(plptr->number_plate,"");
            if(a==0){
                *locptr = row;
                locptr++;
                *locptr = column;
                locptr++;
                *locptr = distance(row,column);
                locptr++;
                locptr++;
                return locptr;
            }
            plptr++;
        }
    }
    *locptr = 11;
    locptr++;
    *locptr = 11;
    locptr++;
    *locptr = distance(11,11);
    return locptr;
}

/**
 * @brief brings the row,column and distance of the 
 * shortest distance to start of array
 * also gives out the parking lot number
 * @param tptr 
 * @return int* 
 */
int *shortest_distance(int *tptr){
    tptr[3]=1;tptr[7]=2;tptr[11]=3;tptr[15]=4;
    if(tptr[2]>tptr[6]){
        tptr[0]=tptr[4];
        tptr[1]=tptr[5];
        tptr[2]=tptr[6];
        tptr[3]=tptr[7];
    }
        if(tptr[2]>tptr[10]){
        tptr[0]=tptr[8];
        tptr[1]=tptr[9];
        tptr[2]=tptr[10];
        tptr[3]=tptr[11];
    }
        if(tptr[2]>tptr[14]){
        tptr[0]=tptr[12];
        tptr[1]=tptr[13];
        tptr[2]=tptr[14];
        tptr[3]=tptr[15];
    }
    return tptr;
}

/**
 * @brief stores data to pointed location
 * 
 * @param row 
 * @param column 
 * @param plptr 
 */
void data_entry(int row,int column, vehicle *plptr){
    plptr = plptr+((row*10)+column);
    char temp[21];
    printf("Enter Number Plate:");
    scanf("%20s",temp);
    strcpy(plptr->number_plate,temp);
    printf("Enter Name:");
    scanf("%20s",temp);
    strcpy(plptr->name_of_driver,temp);
    printf("Enter Phone Number:");
    scanf("%20s",temp);
    strcpy(plptr->driver_mobile,temp);
    return ;
}

/**
 * @brief erases data from pointed location
 * 
 * @param row 
 * @param column 
 * @param plptr 
 */
void data_erase(int row,int column, vehicle *plptr){
    plptr = plptr+((row*10)+column);
    strcpy(plptr->number_plate,"");
    strcpy(plptr->name_of_driver,"");
    strcpy(plptr->driver_mobile,"");
    return ;
}

/**
 * @brief counts the spots empty in parking lot
 * 
 * @param plptr 
 * @return int 
 */
int count(vehicle *plptr){
    int count = 100;
    for(int i=0;i<100;i++){
        int a = strcmp(plptr->number_plate,"");
        if(a!=0)
        {  
            count--;
        }
        plptr++;
    }
    return count;
}
