
void merge_res(int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m; 
  
    // Create temp arrays 
    struct restaurant restaurant_L[n1],restaurant_R[n2]; 
  
    // Copy data to temp arrays 
    // L[] and R[] 
    for (i=0;i<n1;i++) 
        restaurant_L[i]=restaurant[l+i]; 
    for (j=0;j<n2;j++) 
        restaurant_R[j]=restaurant[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(restaurant_L[i].name,restaurant_R[j].name)<0) { 
            restaurant[k] = restaurant_L[i]; 
            i++; 
        } 
        else 
        { 
            restaurant[k]=restaurant_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        restaurant[k] = restaurant_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        restaurant[k] = restaurant_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_res(int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_res(l, m); 
        mergeSort_res(m + 1, r); 
  
        merge_res(l, m, r); 
    } 
} 
void merge_gfood(int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m;
    for (i=0;i<n1;i++) 
        gfood_L[i]=gfood[l+i]; 
    for (j=0;j<n2;j++) 
        gfood_R[j]=gfood[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(gfood_L[i].name,gfood_R[j].name)<0) { 
            gfood[k] = gfood_L[i]; 
            i++; 
        } 
        else 
        { 
            gfood[k]=gfood_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        gfood[k] = gfood_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        gfood[k] = gfood_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_gfood(int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_gfood(l, m); 
        mergeSort_gfood(m + 1, r); 
  
        merge_gfood(l, m, r); 
    } 
} 

void merge_sp_food(int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m;
  
    // Copy data to temp arrays 
    // L[] and R[] 
    for (i=0;i<n1;i++) 
        sp_food_L[i]=sp_food[l+i]; 
    for (j=0;j<n2;j++) 
        sp_food_R[j]=sp_food[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(sp_food_L[i].name,sp_food_R[j].name)<0) { 
            sp_food[k] = sp_food_L[i]; 
            i++; 
        } 
        else 
        { 
            sp_food[k]=sp_food_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        sp_food[k] = sp_food_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        sp_food[k] = sp_food_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_sp_food(int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_sp_food(l, m); 
        mergeSort_sp_food(m + 1, r); 
  
        merge_sp_food(l, m, r); 
    } 
} 
void merge_iod(int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m; 

    // Copy data to temp arrays 
    // L[] and R[] 
    for (i=0;i<n1;i++) 
        iod_L[i]=item_of_day[l+i]; 
    for (j=0;j<n2;j++) 
        iod_R[j]=item_of_day[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(iod_L[i].name,iod_R[j].name)<0) { 
            item_of_day[k] = iod_L[i]; 
            i++; 
        } 
        else 
        { 
            item_of_day[k]=iod_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        item_of_day[k] = iod_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        item_of_day[k] = iod_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_iod(int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_iod(l, m); 
        mergeSort_iod(m + 1, r); 
  
        merge_iod(l, m, r); 
    } 
} 

void merge_res_addr(int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m; 
    for (i=0;i<n1;i++) 
        restaurant_L[i]=restaurant[l+i]; 
    for (j=0;j<n2;j++) 
        restaurant_R[j]=restaurant[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(restaurant_L[i].restaurant_address.Plot_no,restaurant_R[j].restaurant_address.Plot_no)<0) { 
            restaurant[k] = restaurant_L[i]; 
            i++; 
        } 
        else 
        { 
            restaurant[k]=restaurant_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        restaurant[k] = restaurant_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        restaurant[k] = restaurant_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_res_addr(int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_res_addr(l, m); 
        mergeSort_res_addr(m + 1, r); 
  
        merge_res_addr(l, m, r); 
    } 
} 


void merge_order(int restaurant_no,int l,int m,int r) 
{ 
    int i,j,k,time_L,time_R,time; 
    int n1=m-l+1; 
    int n2=r-m;
    struct order order_L[5],order_R[5];
    for (i=0;i<n1;i++) 
        order_L[i]=restaurant[restaurant_no].order[l+i]; 
    for (j=0;j<n2;j++) 
        order_R[j]=restaurant[restaurant_no].order[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        time_L=order_L[i].Order_time.hour+order_L[i].Order_time.minutes;
        time_R=order_R[i].Order_time.hour+order_R[i].Order_time.minutes;
        if (time_L<time_R) { 
            gfood[k] = gfood_L[i]; 
            i++; 
        } 
        else 
        { 
            restaurant[restaurant_no].order[k]=order_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        restaurant[restaurant_no].order[k] = order_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        restaurant[restaurant_no].order[k] = order_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_order(int restaurant_no,int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_order(restaurant_no,l, m); 
        mergeSort_order(restaurant_no,m + 1, r); 
  
        merge_order(restaurant_no,l, m, r); 
    } 
} 
void sort_restaurant(int Number_of_Restaurants)
{
    int j=0;
    for(int i=0;i<Number_of_Restaurants;i++)
    {
        if(strcmp(restaurant[i].name,restaurant[j].name)!=0)
        {
            mergeSort_res_addr(j,i-1-j);
            j=i;
        }
    }
}
void merge_res_order(int restaurant_id,int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m;
    struct order order_L[5],order_R[5]; 
    for (i=0;i<n1;i++) 
        order_L[i]=restaurant[restaurant_id].order[l+i]; 
    for (j=0;j<n2;j++) 
        order_R[j]=restaurant[restaurant_id].order[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if(order_L[i].expected_delivery_time<order_R[j].expected_delivery_time) 
        { 
            restaurant[restaurant_id].order[k] = order_L[i]; 
            i++; 
        } 
        else 
        { 
           restaurant[restaurant_id].order[k]=order_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        restaurant[restaurant_id].order[k] = order_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        restaurant[restaurant_id].order[k] = order_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_res_order(int restaurant_id,int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_res_order(restaurant_id,l, m); 
        mergeSort_res_order(restaurant_id,m + 1, r); 
  
        merge_res_order(restaurant_id,l, m, r); 
    } 
} 
void sort_restaurant_orders(int restaurant_id)
{
    int j=0;
    for(int i=0;i<restaurant[restaurant_id].Number_of_live_orders;i++)
    {
        if(restaurant[restaurant_id].order[i].expected_delivery_time!=restaurant[restaurant_id].order[j].expected_delivery_time)
        {
            mergeSort_res_order(restaurant_id,j,i-1-j);
            j=i;
        }
    }
}


int remove_duplicates_sp_food(int Number_of_sp_food)
{   
    int i,j=0;  
    for (i=0;i<Number_of_sp_food-1;i++)  
    {    
        if (strcmp(sp_food[i].name,sp_food[i+1].name)!=0)  
        {
            j++;
            sp_food[j]=sp_food[i+1];
        }
        else
        {
            sp_food[j].price[sp_food[j].Number_of_variations]=sp_food[i+1].price[0];
            sp_food[j].service_time[sp_food[j].Number_of_variations]=sp_food[i+1].service_time[0];
            strcpy(sp_food[j].restaurant_name[sp_food[j].Number_of_variations],sp_food[i+1].restaurant_name[0]);
            strcpy(sp_food[j].PlotNo[sp_food[j].Number_of_variations],sp_food[i+1].PlotNo[0]);
            strcpy(sp_food[j].Area[sp_food[j].Number_of_variations],sp_food[i+1].Area[0]);
            sp_food[j].Number_of_variations++;
        }  
    }  
    return j;
}  
int remove_duplicates_gfood(int Number_of_gfood)
{   
    int i,j=0;  
    for (i=0;i<Number_of_gfood-1;i++)  
    {    
        if (strcmp(gfood[i].name,gfood[i+1].name)!=0)  
        {
            j++;
            gfood[j]=gfood[i+1];

        }
        else
        {
            gfood[j].price[gfood[j].Number_of_variations]=gfood[i+1].price[0];
            gfood[j].service_time[gfood[j].Number_of_variations]=gfood[i+1].service_time[0];
            strcpy(gfood[j].restaurant_name[gfood[j].Number_of_variations],gfood[i+1].restaurant_name[0]);
            strcpy(gfood[j].PlotNo[gfood[j].Number_of_variations],gfood[i+1].PlotNo[0]);
            strcpy(gfood[j].Area[gfood[j].Number_of_variations],gfood[i+1].Area[0]);
            gfood[j].Number_of_variations++;
        }  
    }  
    return j;
}  
int remove_duplicates_iod(int Number_of_gfood)
{   
    int i,j=0;  
    for (i=0;i<Number_of_iod-1;i++)  
    {    
        if (strcmp(item_of_day[i].name,item_of_day[i+1].name)!=0)  
        {
            j++;
            item_of_day[j]=item_of_day[i+1];

        }
        else
        {
            item_of_day[j].price[item_of_day[j].Number_of_variations]=item_of_day[i+1].price[0];
            item_of_day[j].service_time[item_of_day[j].Number_of_variations]=item_of_day[i+1].service_time[0];
            strcpy(item_of_day[j].restaurant_name[item_of_day[j].Number_of_variations],item_of_day[i+1].restaurant_name[0]);
            strcpy(item_of_day[j].PlotNo[item_of_day[j].Number_of_variations],item_of_day[i+1].PlotNo[0]);
            strcpy(item_of_day[j].Area[item_of_day[j].Number_of_variations],item_of_day[i+1].Area[0]);
            item_of_day[j].Number_of_variations++;
        }  
    }  
    return j;
}  
int search_for_restaurant(char restaurant_name[],char PlotNo[],int Number_of_Restaurants)
{
    int found=0,restaurant_id=0;
    for(int i=0;i<Number_of_Restaurants,found!=1;i++)
    {
        if((strcmp(restaurant[i].name,restaurant_name)==0)&&(strcmp(restaurant[i].restaurant_address.Plot_no,PlotNo)==0))
        {
            restaurant_id=i;
            found=1;
        }
    }
    return restaurant_id;
}
int search_for_restaurantb(char restaurant_name[],char res_address[],int Number_of_Restaurants)
{
    int l,mid,h,found,restaurant_id=-1;

    l=0;
    h=Number_of_Restaurants-1;
    found=0;
    while((l<=h)&&(found!=1))
    {   
        mid=(l+h)/2;

        if((strcmp(restaurant[mid].name,restaurant_name)==0))
        {   
            restaurant_id=mid;
            found=1;
        }
        else if(strcmp(restaurant[mid].name,restaurant_name)<0)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return restaurant_id;
}
float distance(int x1,int y1,int x2,int y2)
{
    int distance;
    distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//in km
    return distance;
}
float transport_time(int distance)
{
    int time;
    time=distance*2;//minutes
    return time;
}

int search_for_gfood(char gfood_name[])
{
    int l,mid,h,found,gfood_id=-1;

    l=0;
    h=Number_of_gfood-1;
    found=0;
    while((l<=h)&&(found!=1))
    {   
        mid=(l+h)/2;

        if(strcmp(gfood[mid].name,gfood_name)==0)
        {   
            gfood_id=mid;
            found=1;
        }
        else if(strcmp(gfood[mid].name,gfood_name)<0)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return gfood_id;
}
int search_for_sp_food(char sp_food_name[])
{
    int l,mid,h,found,sp_food_id=-1;

    l=0;
    h=Number_of_sp_food-1;
    found=0;
    while((l<=h)&&(found!=1))
    {   
        mid=(l+h)/2;

        if(strcmp(sp_food[mid].name,sp_food_name)==0)
        {   
            sp_food_id=mid;
            found=1;
        }
        else if(strcmp(sp_food[mid].name,sp_food_name)<0)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return sp_food_id;
}
int search_for_iod(char iod_name[])
{
    int l,mid,h,found,iod_id=-1;

    l=0;
    h=Number_of_iod-1;
    found=0;
    while((l<=h)&&(found!=1))
    {   
        mid=(l+h)/2;

        if(strcmp(item_of_day[mid].name,iod_name)==0)
        {   
            iod_id=mid;
            found=1;
        }
        else if(strcmp(item_of_day[mid].name,iod_name)<0)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return iod_id;
}
float calc_delivery_time(int restaurant_id,int Number_of_food_items,int order_id,char restaurant_name[],char restaurant_Plot_No[])
{
    int x1,x2,y1,y2,index,loc,found=0,time=0;
    x1=restaurant[restaurant_id].restaurant_address.coordinates.x;
    y1=restaurant[restaurant_id].restaurant_address.coordinates.y;
    x2=restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_address.coordinates.x;
    y2=restaurant[restaurant_id].order[restaurant[restaurant_id].Number_of_live_orders].User_address.coordinates.y;
    time=transport_time(distance(x1,y1,x2,y2));
    for(int i=0;i<Number_of_food_items;i++)
    {
        index=search_for_gfood(restaurant[restaurant_id].order[order_id].food_items_ordered[i]);
        if(index==-1)
        {
            index=search_for_sp_food(restaurant[restaurant_id].order[order_id].food_items_ordered[i]);
        }
        if(index==-1)
        {
            index=search_for_iod(restaurant[restaurant_id].order[order_id].food_items_ordered[i]);
        }
        for(int j=0;j<gfood[index].Number_of_variations,found!=1;j++)
        {
            if(strcmp(gfood[index].restaurant_name[j],restaurant_name)==0)
            {
                if(strcmp(gfood[index].PlotNo[j],restaurant_Plot_No)==0)
                {
                    found=1;
                    loc=j;
                }
            }
        }
        time=time+gfood[index].service_time[loc];
    }
    return time;
}






void merge(struct output output[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    // Create temp arrays 
    struct output L[n1], R[n2]; 
  
    // Copy data to temp arrays 
    // L[] and R[] 
    for (i = 0; i < n1; i++) 
        L[i]=output[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j]=output[m + 1 + j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(L[i].restaurant_name,R[j].restaurant_name)<=0) { 
            output[k]=L[i]; 
            i++; 
        } 
        else { 
            output[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        output[k]=L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        output[k]=R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort(struct output output[], int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort(output, l, m); 
        mergeSort(output, m + 1, r); 
  
        merge(output, l, m, r); 
    } 
} 
void merge_p(struct output output[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    // Create temp arrays 
    struct output L[n1], R[n2]; 
  
    // Copy data to temp arrays 
    // L[] and R[] 
    for (i = 0; i < n1; i++) 
        L[i]=output[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j]=output[m + 1 + j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i].price<=R[j].price) { 
            output[k]=L[i]; 
            i++; 
        } 
        else { 
            output[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        output[k]=L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        output[k]=R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_p(struct output output[], int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_p(output, l, m); 
        mergeSort_p(output, m + 1, r); 
  
        merge_p(output, l, m, r); 
    } 
} 
void merge_f(struct output output[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    // Create temp arrays 
    struct output L[n1], R[n2]; 
  
    // Copy data to temp arrays 
    // L[] and R[] 
    for (i = 0; i < n1; i++) 
        L[i]=output[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j]=output[m + 1 + j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(L[i].food_name,R[j].food_name)<=0) { 
            output[k]=L[i]; 
            i++; 
        } 
        else { 
            output[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        output[k]=L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        output[k]=R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_f(struct output output[], int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_f(output, l, m); 
        mergeSort_f(output, m + 1, r); 
  
        merge_f(output, l, m, r); 
    } 
} 
  



void merge_res_gfood(int id,int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m; 
    struct gfood gfood_L[10],gfood_R[10];
    for (i=0;i<n1;i++) 
        gfood_L[i]=restaurant[id].gfood[l+i]; 
    for (j=0;j<n2;j++) 
        gfood_R[j]=restaurant[id].gfood[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(gfood_L[i].name,gfood_R[j].name)<0) { 
            restaurant[id].gfood[k] =gfood_L[i]; 
            i++; 
        } 
        else 
        { 
            restaurant[id].gfood[k]=gfood_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        restaurant[id].gfood[k] = gfood_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        restaurant[id].gfood[k] = gfood_R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_res_gfood(int id,int l,int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_res_gfood(id,l,m); 
        mergeSort_res_gfood(id,m + 1,r); 
  
        merge_res_gfood(id,l,m,r); 
    } 
} 
void merge_res_sp_food(int id,int l,int m,int r) 
{ 
    int i,j,k; 
    int n1=m-l+1; 
    int n2=r-m;
    struct sp_food sp_food_L[5],sp_food_R[5]; 
    for (i=0;i<n1;i++) 
        sp_food_L[i]=restaurant[id].sp_food[l+i]; 
    for (j=0;j<n2;j++) 
        sp_food_R[j]=restaurant[id].sp_food[m+1+j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (strcmp(sp_food_L[i].name,sp_food_R[j].name)<0) { 
            restaurant[id].sp_food[k] =sp_food_L[i]; 
            i++; 
        } 
        else 
        { 
            restaurant[id].sp_food[k]=sp_food_R[j]; 
            j++; 
        } 
            
        k++; 
    } 

  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        restaurant[id].sp_food[k] = sp_food_L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        restaurant[id].sp_food[k] = sp_food_R[j]; 
        j++; 
        k++; 
    } 
} 

  
// l is for left index and r is 
// right index of the sub-array 
// of arr to be sorted 
void mergeSort_res_sp_food(int id,int l,int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort_res_sp_food(id,l,m); 
        mergeSort_res_sp_food(id,m + 1,r); 
  
        merge_res_sp_food(id,l,m,r); 
    } 
}

