void getItemofDayListinSortedorder()
{
    char area[15],name[10][10];
    int limit,index=0,j=0,i=0,k=0;
    printf("\nEnter the area name");
    scanf("%s",area);

    for(i=0;i<Number_of_iod;i++)
    {
        for(j=0;j<item_of_day[i].Number_of_variations;j++)
        {
            if(strcmp(area,item_of_day[i].Area[j])==0)
            {
                index=i;
                strcpy(name[k],item_of_day[i].name);
                strcpy(output[k].restaurant_name,item_of_day[i].restaurant_name[j]);
                strcpy(output[k].PlotNo,item_of_day[i].PlotNo[j]);
                strcpy(output[k].Area,item_of_day[i].Area[j]);
                output[k].price=item_of_day[i].price[j];
                
                limit=j;
                
                k++;
                //printf("\n%s\t%s\t%f",item_of_day[i].name,item_of_day[i].restaurant_name,item_of_day[i].price[j]);
            }
        }
    }
    
    mergeSort_p(output,0,limit-1);
    for(j=0;j<limit;j++)
    {
        printf("\n%s",name[j]);
        printf("\n%s\t%s\t%s\t%f\t",output[j].restaurant_name,output[j].PlotNo,output[j].Area,output[j].price);
    }
}
void getAllSpecialItemListinSortedorder()
{
    char area[15],name[10][10];
    int k=0;
    printf("\nEnter the area name");
    scanf("%s",area);

    for(int i=0;i<Number_of_sp_food;i++)
    {
        for(int j=0;j<sp_food[i].Number_of_variations;j++)
        {
            if(strcmp(area,sp_food[i].Area[j])==0)
            {
            strcpy(output[k].food_name,sp_food[i].name);
            strcpy(output[k].restaurant_name,sp_food[i].restaurant_name[j]);
            strcpy(output[k].PlotNo,sp_food[i].PlotNo[j]);
            strcpy(output[k].Area,sp_food[i].Area[j]);
            output[k].price=sp_food[i].price[j];
            k++;
            //printf("\n%s\t%s\t%f",sp_food[i].restaurant_name[j],sp_food[i].PlotNo[j],sp_food[i].price[j]);
            }         
        }
    }
    mergeSort_p(output,0,k-1);
    mergeSort_f(output,0,k-1);
    for(int j=0;j<k;j++)
    {
        printf("\n%s",output[j].food_name);
        printf("\n%s\t%s\t%s\t%f\t",output[j].restaurant_name,output[j].PlotNo,output[j].Area,output[j].price);
    }

}

void getUniqueItem(int Number_of_Restaurants,int Number_of_gfood)
{
    int n,count,j;
    char restaurant_name[10][15],restaurant_Plot_no[10][3];
    int item_id,i;
    printf("\nEnter the number of restaurants in the list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n%d Restaurant name\t",i+1);
        scanf("%s",restaurant_name[i]);

        printf("\n%d Plot No\t",i+1);
        scanf("%s",restaurant_Plot_no[i]);
    }
    
    for(i=0;i<Number_of_gfood;i++)
    {   count=0;
    
            for(j=0;j<gfood[i].Number_of_variations;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((strcmp(gfood[i].restaurant_name[j],restaurant_name[k])==0)&&(strcmp(gfood[i].PlotNo[j],restaurant_Plot_no[k])==0))
                    {
                        
                        item_id=j;
                        count++;
                    }
                    
                }
            }
            if(count==1)
            {
                printf("\nItem name\t %s",gfood[i].name);
                printf("\n%s\t%f\t",gfood[i].restaurant_name[item_id],gfood[i].price[item_id]);
                
            }
        
    }
    for(int i=0;i<Number_of_sp_food;i++)
    {   count=0;
        
            for(int j=0;j<sp_food[i].Number_of_variations;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((strcmp(sp_food[i].restaurant_name[j],restaurant_name[k])==0)&&(strcmp(sp_food[i].PlotNo[j],restaurant_Plot_no[k])==0))
                    {
                        item_id=j;
                        count++;
                    }
                }
            }
            
            if(count==1)
            {
                printf("\nItem name\t %s",sp_food[i].name);
                printf("\n%s\t%f\t",sp_food[i].restaurant_name[item_id],sp_food[i].price[item_id]);
            }
        
    }

    for(int i=0;i<Number_of_iod;i++)
    {   count=0;
       
            for(int j=0;j<item_of_day[i].Number_of_variations;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((strcmp(item_of_day[i].restaurant_name[j],restaurant_name[k])==0)&&(strcmp(item_of_day[i].PlotNo[j],restaurant_Plot_no[k])==0))
                    {
                        item_id=j;
                        count++;
                    }
                }
            }
            if(count==1)
            {
                printf("\nItem name\t %s",item_of_day[i].name);
                printf("\n%s\t%f\t",item_of_day[i].restaurant_name[item_id],item_of_day[i].price[item_id]);
            }
    }

}
void getListinAreaSortedOrder(int Number_of_Restaurants)
{
    char area[10];
    printf("\nEnter the area");
    scanf("%s",area);

    for(int i=0;i<Number_of_Restaurants;i++)
    {
        if(strcmp(restaurant[i].restaurant_address.Area,area)==0)
        {
            for(int j=0;j<Number_of_gfood;j++)
            {
                printf("\n%s\t%s\t%f",restaurant[i].name,restaurant[i].gfood[j].name,restaurant[i].gfood[j].price);
            }
        }
    }
}
void getListinSortedOrder(int Number_of_Restaurants)
{
    char name[15],PlotNo[3];
    int res_id,gfood_id;
    printf("\nEnter the name of restaurant\t");
    scanf("%s",name);
    printf("\nPlot No\t");
    scanf("%s",PlotNo);

    res_id=search_for_restaurant(name,PlotNo,Number_of_Restaurants);
    mergeSort_res_gfood(res_id,0,Number_of_gfood-1);
    mergeSort_res_sp_food(res_id,0,Number_of_sp_food-1);
    printf("\nGeneric food Items\n");
    for(int i=0;i<restaurant[res_id].Number_of_gfood;i++)
    {
        printf("\n%s\t%f",restaurant[res_id].gfood[i].name,restaurant[res_id].gfood[i].price);
    }
    printf("\nSpecial Items\n");
    for(int i=0;i<restaurant[res_id].Number_of_sp_food;i++)
    {
        printf("\n%s\t%f",restaurant[res_id].sp_food[i].name,restaurant[res_id].sp_food[i].price);
    }
    printf("\nItem of day\n%s\t%f",restaurant[res_id].item_of_day.name,restaurant[res_id].item_of_day.price);


}
void getMinTime(int Number_of_Restaurants)
{
    char name[10];
    int id,quant,res_id,min,time,res_id_min=0;
    struct coordinates xy;
    printf("\nEnter the name of the food\t");
    scanf("%s",name);
    printf("\nEnter the quantity\t");
    scanf("%d",&quant);
    printf("\nEnter delivery location coordinates x y\t");
    scanf("%d %d",&xy.x,&xy.y);

    id=search_for_gfood(name);
    
    if(id==-1)
    {
        id=search_for_sp_food(name);
        if(id==-1)
        {
            id=search_for_iod(name);
            for(int i=0;i<item_of_day[id].Number_of_variations;i++)
            {
                res_id=search_for_restaurant(item_of_day[id].restaurant_name[i],item_of_day[id].PlotNo[i],Number_of_Restaurants);
                time=2*distance(xy.x,xy.y,restaurant[res_id].restaurant_address.coordinates.x,restaurant[res_id].restaurant_address.coordinates.y);
                time=time+item_of_day[id].service_time[i];
                if(i==0)
                {
                    min=time;

                }   
                else
                {
                    if(min>time)
                    {
                        min=time;
                        res_id_min=res_id;
                    }
                } 
            }
        }
        else
        {
            for(int i=0;i<sp_food[id].Number_of_variations;i++)
            {
                res_id=search_for_restaurant(sp_food[id].restaurant_name[i],sp_food[id].PlotNo[i],Number_of_Restaurants);
                time=2*distance(xy.x,xy.y,restaurant[res_id].restaurant_address.coordinates.x,restaurant[res_id].restaurant_address.coordinates.y);
                time=time+sp_food[id].service_time[i];
                if(i==0)
                {
                    min=time;

                }   
                else
                {
                    if(min>time)
                    {
                        min=time;
                        res_id_min=res_id;
                    }
                } 
            }
        }        
    }
    else
    {
        for(int i=0;i<gfood[id].Number_of_variations;i++)
        {
            res_id=search_for_restaurant(gfood[id].restaurant_name[i],gfood[id].PlotNo[i],Number_of_Restaurants);
            printf("%d",res_id);
            time=2*distance(xy.x,xy.y,restaurant[res_id].restaurant_address.coordinates.x,restaurant[res_id].restaurant_address.coordinates.y);
            time=time+gfood[id].service_time[i];
            if(i==0)
            {
                min=time;

            }   
            else
            {
                if(min>time)
                {
                    min=time;
                    res_id_min=res_id;
                }
            } 
        }
    }
    printf("\n%s\t%s\t%s\t%d",restaurant[res_id_min].name,restaurant[res_id_min].restaurant_address.Plot_no,restaurant[res_id_min].restaurant_address.Area,min);

}
void getAllCommonItem(int Number_of_Restaurants)
{
    
    int n,count;
    char restaurant_name[10][15],restaurant_Plot_no[10][3];
    int item_id[10];
    printf("\nEnter the number of restaurants in the list");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\n%d Restaurant name\t",i+1);
        scanf("%s",restaurant_name[i]);

        printf("\n%d Plot No\t",i+1);
        scanf("%s",restaurant_Plot_no[i]);
    }
    
    for(int i=0;i<Number_of_gfood;i++)
    {   count=0;
        if(gfood[i].Number_of_variations>=n)
        {
            for(int j=0;j<gfood[i].Number_of_variations;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((strcmp(gfood[i].restaurant_name[j],restaurant_name[k])==0)&&(strcmp(gfood[i].PlotNo[j],restaurant_Plot_no[k])==0))
                    {
                        item_id[count]=j;
                        count++;
                    }
                }
            }
            if(count==n)
            {
                printf("\nItem name\t %s",gfood[i].name);
                for(int z=0;z<count;z++)
                {
                    printf("\n%s\t%f\t",gfood[i].restaurant_name[item_id[z]],gfood[i].price[item_id[z]]);
                }
            }
        }
    }
    for(int i=0;i<Number_of_sp_food;i++)
    {   count=0;
        if(sp_food[i].Number_of_variations>=n)
        {
            for(int j=0;j<sp_food[i].Number_of_variations;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((strcmp(sp_food[i].restaurant_name[j],restaurant_name[k])==0)&&(strcmp(sp_food[i].PlotNo[j],restaurant_Plot_no[k])==0))
                    {
                        item_id[count]=j;
                        count++;
                    }
                }
            }
            
            if(count==n)
            {
                printf("\nItem name\t %s",sp_food[i].name);
                for(int z=0;z<count;z++)
                {
                printf("\n%s\t%f\t",sp_food[i].restaurant_name[item_id[z]],sp_food[i].price[item_id[z]]);
                }
            }
        }
    }

    for(int i=0;i<Number_of_iod;i++)
    {   count=0;
        if(item_of_day[i].Number_of_variations>=n)
        {
            for(int j=0;j<item_of_day[i].Number_of_variations;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if((strcmp(item_of_day[i].restaurant_name[j],restaurant_name[k])==0)&&(strcmp(item_of_day[i].PlotNo[j],restaurant_Plot_no[k])==0))
                    {
                        item_id[count]=j;
                        count++;
                    }
                }
            }
            if(count==n)
            {
                printf("\nItem name\t %s",item_of_day[i].name);
                for(int z=0;z<count;z++)
                {
                    printf("\n%s\t%f\t",item_of_day[i].restaurant_name[item_id[z]],item_of_day[i].price[item_id[z]]);
                }
            }
        }
    }
}
void getItemAvailability()
{
    char Name[20];
    int i,j,flag=0,index;
    struct output output[10];

    printf("\nEnter the Name of the food item");
    scanf("%s",Name);

    for(i=0;i<Number_of_gfood,flag!=1;i++)
    {
        if(strcmp(gfood[i].name,Name)==0)
        {
            flag=1;
            index=i;        
        }
    }
    printf("Restaurant Name\tPlotNo\tArea\t\tPrice per unit quantity");
    for(j=0;j<gfood[index].Number_of_variations;j++)
    {
        strcpy(output[j].restaurant_name,gfood[index].restaurant_name[j]);
        strcpy(output[j].PlotNo,gfood[index].PlotNo[j]);
        strcpy(output[j].Area,gfood[index].Area[j]);
        output[j].price=gfood[index].price[j];
        //printf("\n%s\t%s\t%f",gfood[index].restaurant_name[j],gfood[index].restaurant_address,gfood[index].price[j]);
    }
    mergeSort(output,0,gfood[index].Number_of_variations-1);
    for(j=0;j<gfood[index].Number_of_variations;j++)
    {
        printf("\n%s\t%s\t%s\t%f\t",output[j].restaurant_name,output[j].PlotNo,output[j].Area,output[j].price);
    }
} 
void placeOrder(int Number_of_food_items,int Number_of_Restaurants)
{

    int restaurant_id,choice,expected_delivery_time;
    char restaurant_name[50],restaurant_Plot_No[3];
    seconds = time(NULL);

    timeStruct = localtime(&seconds);

    printf("\nEnter yor name please\t");
    scanf("%s",restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_name);

    printf("\nEnter your address\n");
    
    printf("Plot No\t");
    scanf("%s",restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_address.Plot_no);
    
    printf("\nArea\t");
    scanf("%s",restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_address.Area);
    
    printf("\nEnter the coordinates of your location on map\n");
    
    printf("X coordiante\t");
    scanf("%d",&restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_address.coordinates.x);
    
    printf("Y coordiante\t");
    scanf("%d",&restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_address.coordinates.y);
    
    printf("\nEnter the name of the restaurant you want to order from\t");
    scanf("%s",restaurant_name);
    printf("\nEnter the Plot_No of the restaurant you want to order from\t");
    scanf("%s",restaurant_Plot_No);
    restaurant_id=search_for_restaurant(restaurant_name,restaurant_Plot_No,Number_of_Restaurants);

    printf("\nEnter your phone no\t");
    scanf("%d",&restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_phone_no);

    for(int i=0;i<Number_of_food_items;i++)
    {
        printf("\nEnter the name of food_item no. \"%d\"\t",i+1);
        scanf("%s",restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].food_items_ordered[i]);

        printf("\nEnter the quantity to be ordered for item no. \"%d\"\t",i+1);
        scanf("%d",&restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].quantity_ordered[i]);

    }
    printf("Do you want to place the order now or at some other time?Press \"1\" to place it now else press\"0\"");
    scanf("%d",&choice);

    if(choice==1)
    {
        restaurant[restaurant_id].order[restaurant_id].Order_time.hour=timeStruct->tm_hour;
        restaurant[restaurant_id].order[restaurant_id].Order_time.minutes=timeStruct->tm_min;
        restaurant[restaurant_id].order[restaurant_id].Order_time.seconds=timeStruct->tm_sec;
    }
    else
    {
        printf("Enter the time in HH MM SS format");
        scanf("%d%d%d",&restaurant[restaurant_id].order[restaurant_id].Order_time.hour,restaurant[restaurant_id].order[restaurant_id].Order_time.minutes,restaurant[restaurant_id].order[restaurant_id].Order_time.seconds);
    }
    expected_delivery_time=calc_delivery_time(restaurant_id,Number_of_food_items,restaurant[restaurant_id].Number_of_live_orders,restaurant_name,restaurant_Plot_No);
    restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].expected_delivery_time=expected_delivery_time;
    restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].Order_id=restaurant[restaurant_id].Number_of_live_orders;
    printf("Your order is succesfully placed\nOrder Id %d",restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].Order_id);
    printf("\nThe order will be delivered in %d minutes",expected_delivery_time);
}
