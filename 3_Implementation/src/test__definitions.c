#include"PMS.h"

int count(vehicle *plptr){
    int count = 100;
    int a = strcmp(plptr->number_plate,"");
    while (a!=0)
    {
        plptr++;
        a = strcmp(plptr->number_plate,"");
        count--;
        if(count==0){break;}
    }
    return count;
}

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

float distance(int index_1, int index_2){
    int temp;
    temp = (index_1*index_1) + (index_2*index_2);
    return sqrt(temp);
}
