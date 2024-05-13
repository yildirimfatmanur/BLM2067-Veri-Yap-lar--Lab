# include<stdio.h>
# define SIZE 1000

void sort(int arr[][2],int size);

int main(){
    int dizi1[SIZE][2];
    int newDizi1[SIZE][2];
    int k,j,i=0,id,not;
    
    scanf("%d",&id);
    
    
    while(id != -1){
        scanf("%d",&not);
        dizi1[i][0] = id;
        dizi1[i][1] = not;
        i++;
        scanf("%d",&id);    
    }
    sort(dizi1,i);

    for (j=0; j<i; j++){
        printf("%d %d\n",dizi1[j][0],dizi1[j][1]);
    }

    printf("\n");





    return 0;
}
void sort(int arr[][2],int size){
    int i,j,temp,temp2;
        for(i=0;i<size; i++) // bu kısım ile 
        {
           for(j=0;j<size-1;j++)// bu kısım cok onemli buralara yazdıgın sayi buyuk olmamalı
             {
         
                if(arr[j][1]>=arr[j+1][1]) // bu kısımda <= yaparsan azalan sırada oluyor
                 {
                   temp=arr[j+1][1];
                   arr[j+1][1]=arr[j][1];
                   arr[j][1]=temp;

                   temp2 = arr[j+1][0];
                   arr[j+1][0]=arr[j][0];
                   arr[j][0]=temp2;
                 }  
              }
         }
}
