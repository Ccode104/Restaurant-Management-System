/*NAME ABHISHEK PRASHANT CHANDURKAR  ROLL NO BT22CSE104
  NAME AGAM SANCHETI ROLL NO BT22CSE116 */

//Restaurant Management System
struct coordinates
{
        int x;
        int y;
};
struct address 
{
    char Plot_no[3];
    char Area[10];
    struct coordinates coordinates;
};
struct item_of_day_overall //Overall list of Item_of_day
{
    char name[50];
    unsigned int Number_of_variations;
    float price[10];
    unsigned int item_of_day_id;
    unsigned int service_time[10]; 
    char restaurant_name[10][15];
    char PlotNo[10][50];
    char Area[10][50];
};
struct item_of_day
{
    char name[15];
    float price;
    unsigned int item_of_day_id;
    unsigned int service_time;
};
struct gfood_overall
{
        char name[100];
        unsigned int Number_of_variations;
        unsigned int gfood_id;
        float price[10];
        unsigned int service_time[10];
        char restaurant_name[10][50];
        char PlotNo[10][50];
        char Area[10][50];
};
struct gfood
{
    char name[50];
    float price;
    unsigned int service_time;
};
struct sp_food_overall
{
    char name[50];
    unsigned int Number_of_variations;
    unsigned int sp_food_id;
    float price[10];
    unsigned int service_time[10];
    char restaurant_name[10][50];
    char PlotNo[10][50];
    char Area[10][50];
};
struct sp_food
{
     char name[50];
    float price;
    unsigned int service_time;
};
struct order
{
    unsigned int Order_id;
    struct Order_time
    {
        int hour;
        int minutes;
        int seconds;
    }Order_time;
    char User_name[10];
    struct address User_address;
    unsigned int User_phone_no;
    char food_items_ordered[5][10];
    unsigned int quantity_ordered[5];
    float expected_delivery_time;
};
struct restaurant
{
    char name[50];
    struct address restaurant_address;
    unsigned int restaurant_Id;
    unsigned int Number_of_gfood;
    unsigned int Number_of_sp_food;
    struct gfood gfood[50];
    struct sp_food sp_food[10];
    struct item_of_day item_of_day;
    unsigned int Number_of_live_orders;
    struct order order[10];
};
struct output
{
    char food_name[20];
    char restaurant_name[15];
    char restaurant_address[15];
    float price;
    char PlotNo[50];
    char Area[50];
}output[10];
struct restaurant restaurant[10],restaurant_L[5],restaurant_R[5];
struct gfood_overall gfood[50];
struct gfood_overall gfood_L[25],gfood_R[25];
struct sp_food_overall sp_food[50],sp_food_L[8],sp_food_R[8];
struct item_of_day_overall item_of_day[10],iod_L[5],iod_R[5];

#include<stdio.h>
#include<time.h>
#include<math.h>
#include<string.h>
#include<conio.h>
time_t seconds;
struct tm *timeStruct;
int Number_of_gfood,Number_of_sp_food,Number_of_iod;   
#include<D:\Dspd1 tutorial\Functions.h>
#include<D:\Dspd1 tutorial\menu.h>
void main()
{
    int Number_of_Restaurants,quantity,Number_of_special_items_available,exit=0,choice,last_entry_gfood=0,last_entry_sp_food=0,last_entry_iod=0,Number_of_food_items;
    float price,time;
    int i,j,k,s;
    char null[1];
    
    //Input the details
    FILE* ptr = fopen("data.txt", "r");
    if (ptr == NULL) 
    {
        printf("no such file.");
        
    }
    

    printf("Enter the number of restaurants in the city(less than 100)");
    scanf("%d",&Number_of_Restaurants);
    
    for(i=0;i<Number_of_Restaurants;i++)
    {
        //printf("\nRestaurant entry %d",i);
        //printf("\nEnter the name of the Restaurant");
        fscanf(ptr,"%s",restaurant[i].name);
  
        //printf("\nEnter the Address\n");
        //printf("Plot no\t");
        fscanf(ptr,"%s",restaurant[i].restaurant_address.Plot_no);
        
        //printf("\nArea\t");
        fscanf(ptr,"%s",restaurant[i].restaurant_address.Area);
        
    
        //printf("\nEnter the coordinates of the location on map\t");
        //printf("\nX coordinate\t");
        fscanf(ptr,"%d",&restaurant[i].restaurant_address.coordinates.x);
        //printf("\nY coordinate\t");
        fscanf(ptr,"%d",&restaurant[i].restaurant_address.coordinates.y);

        //printf("\nEnter the Number of Generic food items the Restaurant offers");
        fscanf(ptr,"%d",&restaurant[i].Number_of_gfood);
        
        s=0;
        for(j=0;j<restaurant[i].Number_of_gfood;j++)
        {   
            gfood[last_entry_gfood].Number_of_variations=1;
            //printf("\nGeneric food item Entry no. %d",j+1);
            strcpy(gfood[last_entry_gfood].Area[0],restaurant[i].restaurant_address.Area);
            strcpy(gfood[last_entry_gfood].PlotNo[0],restaurant[i].restaurant_address.Plot_no);
            strcpy(gfood[last_entry_gfood].restaurant_name[0],restaurant[i].name);
            //printf("\nEnter the Name of the item\t");
            fscanf(ptr,"%s",gfood[last_entry_gfood].name);
           
            strcpy(restaurant[i].gfood[j].name,gfood[last_entry_gfood].name);
            
            //printf("\nEnter the Price for given quantity seperated by a space\t");
            fscanf(ptr,"%f%d",&price,&quantity);
            gfood[last_entry_gfood].price[0]=price/quantity;
            restaurant[i].gfood[j].price=gfood[last_entry_gfood].price[0];

            //printf("\nEnter the service time for given quantity\t");
            fscanf(ptr,"%f%d",&time,&quantity);

            gfood[last_entry_gfood].service_time[0]=time/quantity;
            restaurant[i].gfood[last_entry_gfood].service_time=time/quantity;
            s++;
            last_entry_gfood++;
        }

        //printf("\nEnter the number of Special Items available\\(Not more than 5\\)\t");
        fscanf(ptr,"%d",&restaurant[i].Number_of_sp_food);
        
        s=0;
        for(k=0;k<restaurant[i].Number_of_sp_food;k++)
        {
            //printf("\nSpecial Item Entry No %d",k+1);
            
            //printf("\nEnter the Name of the special item\t");
            strcpy(sp_food[last_entry_sp_food].Area[0],restaurant[i].restaurant_address.Area);
            strcpy(sp_food[last_entry_sp_food].PlotNo[0],restaurant[i].restaurant_address.Plot_no);
            strcpy(sp_food[last_entry_sp_food].restaurant_name[0],restaurant[i].name);
            fscanf(ptr,"%s",sp_food[last_entry_sp_food].name);
            strcpy(restaurant[i].sp_food[j].name,sp_food[last_entry_gfood].name);

            //printf("\nEnter the price for given quantity seperated by space\t");
            fscanf(ptr,"%f%d",&price,&quantity);

            sp_food[last_entry_sp_food].price[0]=price/quantity;
            restaurant[i].sp_food[k].price=price/quantity;

            //printf("\nEnter the service time for given quantity\t");
            fscanf(ptr,"%f%d",&time,&quantity);

            sp_food[last_entry_sp_food].service_time[0]=time/quantity;
            restaurant[i].sp_food[last_entry_sp_food].service_time=time/quantity;
            last_entry_sp_food++;
        }

   
        strcpy(item_of_day[last_entry_iod].Area[0],restaurant[i].restaurant_address.Area);
        strcpy(item_of_day[last_entry_iod].PlotNo[0],restaurant[i].restaurant_address.Plot_no);
        strcpy(item_of_day[last_entry_iod].restaurant_name[0],restaurant[i].name);
        //printf("Enter the name of the special item of the day");
        fscanf(ptr,"%s",item_of_day[i].name);
        strcpy(restaurant[i].item_of_day.name,restaurant[i].item_of_day.name);

        //printf("Enter the price for given quantity of special item of the day,seperated by space");
        fscanf(ptr,"%f%d",&price,&quantity);

        item_of_day[i].price[0]=price/quantity;
        strcpy(restaurant[i].item_of_day.name,item_of_day[i].name);

        //printf("\nEnter the service time for given quantity\t");
        fscanf(ptr,"%f%d",&time,&quantity);
        item_of_day[i].service_time[0]=time/quantity;
        restaurant[i].item_of_day.service_time=time/quantity;
        last_entry_iod++;
      
    }

    //Initialise the gfood counters for restaurants

    for(int z=0;z<50;z++)
    {
        gfood[z].Number_of_variations=1;
        sp_food[z].Number_of_variations=1;
    }
    for(int z=0;z<10;z++)
    {
        item_of_day[z].Number_of_variations=1;
    }

    //Initialise the Number_of_live_orders counters for each restaurant

    for(int z=0;z<Number_of_Restaurants;z++)
    {
        restaurant[z].Number_of_live_orders=0;
    }
    last_entry_gfood--;
    Number_of_gfood=last_entry_gfood+1;
    last_entry_sp_food--;
    Number_of_sp_food=last_entry_sp_food+1;
    last_entry_iod--;
    Number_of_iod=last_entry_iod+1;
    
    //Pre_process the data
    mergeSort_res(0,Number_of_Restaurants-1);
    mergeSort_gfood(0,Number_of_gfood-1);  //Sort the overall list of generic food items
    mergeSort_sp_food(0,Number_of_sp_food-1);
    mergeSort_iod(0,Number_of_iod-1);
    
    last_entry_gfood=remove_duplicates_gfood(Number_of_gfood); //Merge the gfood entries with same name
    last_entry_sp_food=remove_duplicates_sp_food(Number_of_sp_food);
    last_entry_iod=remove_duplicates_iod(Number_of_iod);
    Number_of_gfood=last_entry_gfood+1;   
    Number_of_sp_food=last_entry_sp_food+1;
    Number_of_iod=last_entry_iod+1;
    
    //Welcome Message
    printf("Welcome to the Food order Mangement System");
    
    //Menu
    
        

        while(exit!=1)
        {
            printf("\n1)Get Minimum time\n2)Get Item Availability\n3)Place an order\n4)Get Item list in sorted order\n5)Get list in area sorted order\n6)Get all special item list in sorted order\n7)Get Item Of day list in sorted order\n8)Get common item\n9)Get all unique item\n10)Exit\nYour Choice\t");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                {
                    getMinTime(Number_of_Restaurants);
                    break;
                }
                case 2:
                {
                    getItemAvailability();
                    break;
                }
                case 3:
                {
                    printf("\nEnter the number of food items\t");
                    scanf("%d",&Number_of_food_items);
                    placeOrder(Number_of_food_items,Number_of_Restaurants);
                    break;
                }
                case 4:
                {
                    getListinSortedOrder(Number_of_Restaurants);
                    break;
                }
                case 5:
                {
                    getListinAreaSortedOrder(Number_of_Restaurants);
                    break;
                }
                case 6:
                {
                    getAllSpecialItemListinSortedorder();
                    break;
                }
                case 7:
                {
                    getItemofDayListinSortedorder();
                    break;
                }
                case 8:
                {
                    getAllCommonItem(Number_of_Restaurants);
                    break;
                }
                case 9:
                {
                    getUniqueItem(Number_of_Restaurants,Number_of_gfood);
                    break;
                }
                case 10:
                {
                    exit=1;
                }
            }
        }        
                
                
            
                

           
                
        
           
    
}

