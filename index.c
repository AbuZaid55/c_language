// #include<stdio.h>
// #define my_value 700

// int main(int argc, char const *argv[])
// {
    // int a;
    // printf("Hello World\n");
    // printf("Enter Your Number:- ");
    // scanf("%d",&a);
    // printf("Your Number is:- %d",a);

    // printf("%lu",sizeof(double));

    // float a;
    // float b;
    // a=35.00;
    // b=6.00;
    // printf("a+b= %f\n",a+b);
    // // %f => use for floting point number
    // // %d => use for integer number

    // int a;
    // int b;
    // a=2;
    // b=3;
    // printf("a&b = %d\n",a&b); //10 & 11 => 10 =>2
    // printf("a|b = %d\n",a|b); //10 & 11 => 11 =>3
    // printf("a^b = %d\n",a^b); //10 & 11 => 01 =>1

    // importent for understanding %d and %f 
    // int a = 8;
    // float b=7.333;
    // printf("Hello Wrold\n");
    // printf("The value of a is %d and the value of b is %f\n",a,b);
    // printf("%8.2f\n",b); //2 repesent the number of integer after decimala and 8 repesent the space from right to left;

    // int a= 2;
    // int b= 3;
    // printf("This is a %d and this is b %d",a,b);

    // // printf("%-18.2f this",b); 

    // %c => charcter
    // %d=> integer
    // %f => float
    // %l => long
    // %lf => double
    // %Lf => long double

    // const int a = 6
    // printf("%d",my_value);

    // int i = 0;
    // if(i<10){
    //     printf("%d",i);
    // }else{
    //     printf("%d",i);
    // }
    
    // int a = 3;  
    // switch (a) // a must be int or char
    // {
    // case 0:
    //     printf("%d",a);
    //     break;
    // case 2:
    //     printf("%d",a);
    //     break;
    // default:
    //     printf("2<");
    //     break;
    // }

    // int i=1;
    // do
    // {
    //    printf("%d\n",i);
    //    i++;
    // } while (i<11);

    // while (i<11)
    // {
    //     printf("%d\n",i);
    // }

    // for ( int i = 0; i < 11; i++)
    // {
    //     printf("%d\n",i);
    // }
    
    // for ( int i = 0; i < 11; i++)
    // {
    //     if(i==2){
    //         continue;
    //     }
    //     if(i==10){
    //         break;
    //     }
    //     printf("%d\n",i);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",i);
    //     for (int j = 0; j < 8; j++)
    //     {
    //        printf("This is inside loop no %d\n",j);
    //        if(j==3){
    //         goto end; // goto end break all loop on give condition
    //        }
    //     }
        
    // }
    // end:

    //TypeCasting
    // float b = 3.27;
    // printf("%d\n",(int) b); // (int)=>convert value into int 

    // float b = (float) 54/5; // int/int => int so that's why use (float) for convert int value into float and get exict value
    // printf("%f\n",b); 
    
    
    // return 0;
// }

// funcitons
// #include<stdio.h>
// int sum(int a,int b); //function prototype. it use when we define function after calling
// void func1(int a){
//     printf("Void funciton not return anything");
// }
// int main(){
//     int a =5;
//     int b= 8;
//     int c = sum(a,b);
//     printf("%d",c);
// }
// int sum(int a, int b){
//     return a+b;
// }


#include<stdio.h>

int main(){
    int arr[5]={};
    int arr2[5][2]={{1,2,3,4,5},{1,2,3,4,5}};
    for(int i=0;i<5;i++){
        printf("Enter the value of array:- ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("Value of array:- %d\n",arr[i]);
    }
}