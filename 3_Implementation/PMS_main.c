#include"PMS.h"

/**
 * @brief parking_lot is 2D array with 10x10 size 
 * And can store 100 elements i.e vehiicles.
 * 
 */
vehicle parking_lot1[10][10];
vehicle parking_lot2[10][10];
vehicle parking_lot3[10][10];
vehicle parking_lot4[10][10];

int main(){
    int mode;
    printf("Enter the mode:\n1 - Start\t 0 - Stop\n");
    scanf("%d",&mode);
    while(mode==1)
    {
        // 2D pointer to parking lots
        vehicle (*pl1ptr)[10] = parking_lot1;
        vehicle (*pl2ptr)[10] = parking_lot2;
        vehicle (*pl3ptr)[10] = parking_lot3;
        vehicle (*pl4ptr)[10] = parking_lot4;

        int operation;
        printf("Enter Operation:\n1 - Data Entry\t2 - Data Delete\t3 - Show Status\t4 - Full\n");
        scanf("%d",&operation);

        if(operation==1)
        {
            int *locptr = (int *)malloc(16*sizeof(int));    
            int *tptr = locptr; //tptr stores the start address of locptr
            locptr = location(*pl1ptr,locptr);
            locptr = location(*pl2ptr,locptr);
            locptr = location(*pl3ptr,locptr);
            locptr = location(*pl4ptr,locptr);

            locptr = shortest_distance(tptr);

            int row = locptr[0];
            int column = locptr[1];
            int lot_no = locptr[3];
            printf("Lot No:%d\tRow:%d\tColumn:%d\n",lot_no,row,column);
            if(lot_no==1){
                data_entry(row,column,*pl1ptr);}
            else if(lot_no==2){
                data_entry(row,column,*pl2ptr);}
            else if(lot_no==3){
                data_entry(row,column,*pl3ptr);}
            else{
                data_entry(row,column,*pl4ptr);}

            free(locptr);
        }
        
        if(operation==2)
        {
            printf("Enter the location to delete:\n");
            int row,column,lot_no;
            printf("Row:\n");
            scanf("%d",&row);
            printf("Column:\n");
            scanf("%d",&column);
            printf("Lot No:\n");
            scanf("%d",&lot_no);
            
            if(lot_no==1){
                data_erase(row,column,*pl1ptr);
            }
            else if(lot_no==2){
                data_erase(row,column,*pl2ptr);
            }
            else if(lot_no==3){
                data_erase(row,column,*pl3ptr);
            }
            else{
                data_erase(row,column,*pl4ptr);
            }

        }

        if(operation==3)
        {
            int lot1,lot2,lot3,lot4;
            lot1=count(*pl1ptr);
            lot2=count(*pl2ptr);
            lot3=count(*pl3ptr);
            lot4=count(*pl4ptr);
            printf("Vacant spots:\nLot1-%d\tLot2-%d\tLot3-%d\tLot4-%d\n",lot1,lot2,lot3,lot4);
        }
        if(operation==4)
        {
            printf("The parking facility is full\n");
        }
        printf("Mode:");
        scanf("%d",&mode);
    }
    
}

