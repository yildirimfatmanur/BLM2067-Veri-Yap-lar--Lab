# include<stdio.h>
# define SIZE 1000

void sortET(int dizi[],int size);
void printDizi(int dizi[],int size);

int main(){
    int i,num,len=0;
    int dizi[SIZE];

    scanf("%d",&num);
    dizi[len] = num;
    while(num != -1){
        scanf("%d",&num);    
        len++;
        dizi[len] = num;
           
    }
    

    sortET(dizi,len);
    printDizi(dizi,len);
    printf("\n");


    return 0;
}

void printDizi(int dizi[],int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d\n",dizi[i]);
    }
}

void sortET(int dizi[],int size){
    int i,j,k,temp;
    for (i=0; i<size; i++){
        for (j=0; j<size-1; j++){
            if(dizi[j]>dizi[j+1]){
                temp = dizi[j+1];
                dizi[j+1] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
}