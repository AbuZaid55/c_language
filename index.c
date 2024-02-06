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
    // // %p => use for print porinter
    // // %x => use for print porinter in hexadecimal form

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


// #include<stdio.h>
// #include<string.h>

// int main(){
    // int arr[5]={};
    // int arr2[5][2]={{1,2,3,4,5},{1,2,3,4,5}};
    // for(int i=0;i<5;i++){
    //     printf("Enter the value of array:- ");
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<5;i++){
    //     printf("Value of array:- %d\n",arr[i]);
    // }

    // int a = 75;
    // int *ptr = &a;
    // printf("Value of a is %d\n", a);
    // printf("Value of a is %p\n", *ptr);
    // printf("Value of a is %x\n", *ptr);
    // printf("%d\n",ptr-1); // sub 4 because 1 int size = 4 bit
    // printf("%d\n",ptr);
    // printf("%d\n",ptr+1); // add 4 because 1 int size = 4bit

    // int arr[]={1,2,3,4,5,6,7};
    // printf("%d\n",arr);   //same
    // printf("%d\n",arr+0); // same
    // printf("%d\n",&arr[0]); // same
    // printf("%d\n",arr+1); // same2
    // printf("%d\n",&arr[1]); //same2 


    //print * trangle
    // int size;
    // printf("Enter trangle size: -");
    // scanf("%d",&size);
    // for (int i = 0; i < size; i++)
    // {
    //     for(int j=size; j>=size-i; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    

    // char str[]={'a','b','u','z','a','i','d','\0'};
    // char str1[8]= "abuzaid";  //str length sholud be string length+1 in both case , +1 for Null, null repersent the end of string
    // if we do not give string length+1 lenght then it will print like this-> abuzaidN so we should give lenght here 8

    // printf("Using printf %s\n",str);
    // puts(str);
    // puts(str1);

    // char str[8];
    // printf("Enter your string:- ");
    // gets(str);  //gets for take input string. it can take whitespaces but scanf can not
    // puts(str);

    // char s1[]="abu";
    // char s2[]="zaid";
    // char s3[42];

    // puts(strcat(s1,s2));
    // printf("%d\n",strlen(s1));  
    // puts(strrev(s1));
    // strcpy(s3,s2);
    // puts(s3);
    // printf("%d",strcmp(s1,s2)); 
    // // strcmp => if s1[0] before to s2[0] then print -1 if equal then print 0 and if after then print 1

// }


// #include<stdio.h>

// struct Student {
//     int id;
//     float mark;
// };

// union Strudent
// {
//     int id;
//     float mark;
// };
// // union is same to the struct but in union we can access union property only one at a time


// int main(){
//     struct Student s1, s2, s3;
//     s1.id=1;
//     s1.mark=1.00;
//     s2.id=2;
//     s2.mark=2.00;
//     s3.id=3;
//     s3.mark=3.00;

//     // or 
//     struct Student s1={1,1.00};

//     printf("%d\n",s1.id);
//     printf("%f\n",s1.mark);
// }


// #include<stdio.h>
// int main(){
//     // typedef <pre_name> <alias_name>
//     typedef unsigned long ul;
//     typedef int integer; // integer repesent the int we can give anything on interger place
//     ul l1,l2,l3;
//     integer a = 4;
// }

// local variable => function and block level scope
// global variable => which variable decliaer outside of main function
// formal variable => which valriable pass in then function during function creation
// static variable => 
    //static variable remember old value. If we declaer a static valribale inside a functioin and in this function we update this static variable. after this if we call this function next time then it update value which are updated in the preveous call.
    //if we do't initilize it it will auto initialize 0.
    // we can store only constent value in the static valriable and can't store function
    // static int my_value = 10;




// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int *ptr;
//     int n;
//     printf("Enter the size of the array you want to create:- ");
//     scanf("%d",&n);

//     ptr=(int *)malloc(n*sizeof(int));
//     // ptr=(int *)calloc(n,sizeof(int));
//     // ptr=(int *)realloc(ptr,n*sizeof(int));
//     for(int i=0;i<n;i++){
//         printf("Enter the value no %d of the array:- ",i);
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("The value at %d of this array is %d\n",i,ptr[i]);
//     }

//     // calloc and malloc are same both used for allocat dinamic momory. Only one different is malloc retern garbage value if we not give array index value white calloc automatic allocat zero;
//     // realloc use for change momory size of old ptr. old ptr which already difine by malloc or calloc
// }


// Typeof Variable and storage class
// auto int myVal = 5 or int my_value=5 // auto storage class or automatic variable
// extern int myVal;  // external storage class. it use when variable define in other file
// register int myVal = 10; // Register storage class. It use when we want to use any variable so fast


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int generateRanNum(int n){
//     srand(time(NULL));
//     return rand()%n;
// };
// int main(){
//     printf("The random number between 0 to n is:- %d",generateRanNum(200));
// }

// #include<stdio.h>
// int main(){
//     void *ptr;
//     int a = 6;
//     ptr=&a;
//     printf("The value of a is %d",*((int *)ptr)); // void pointer can't print direct that's why we difint int first and then print
// }


// #include<stdio.h>
// #include<stdlib.h>
// int myfun(){
//     int a = 34;
//     return &a;
// }
// int main(){
    //Deallocation of memory
    // int n = 4;
    // int *ptr = (int *)malloc(n*sizeof(int));
    // free(ptr); // ptr now become a dangling pointer
    // ptr=NULL; // ptr no longer dangling

    //Returning local variable
    // int *ptr = myfun(); //ptr point to invalid location so this is become dangling pointer
    // return 0;

    //Variable going out of scope
    // int *ptr;
    // {
    //     int a=10;
    //     ptr=&a; // ptr point to invalid location
    // }
    //here ptr in dangling pointer

    // Wild Pointer 
    // int * ptr ; //This is wild pointer. because we have not initialize any location of this pointer. this is not good thing
    // ptr=NULL; // this is good thing and pointer become a null pointer
// }

//Preporcesser
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     printf("File name is %s\n",__FILE__);
//     printf("Today's date is %s\n",__DATE__);
//     printf("Time now is %s\n",__TIME__);
//     printf("Line no is %d\n",__LINE__);
//     printf("ANSI: %d\n",__STDC__);
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr = NULL;

    //*********Reading file********
    // char str[34];
    // ptr = fopen("test.txt","r");
    // fscanf(ptr, "%s", str);
    // printf("The content of this file has %s\n",str);

    //*******Writing File **********
    // char str[34]= "This is my text.";
    // ptr=fopen("test.txt","w");
    // fprintf(ptr,"%s",str);

    //*******Append File **********
    // char str[34]= "This is my text.";
    // ptr=fopen("test.txt","a");
    // fprintf(ptr,"%s",str);

    // //*******Close File **********
    // fclose(ptr);

    //******* fgetc **********
    // ptr = fopen("test.txt","r");
    // char c = fgetc(ptr);
    // printf("The character 1'st read was %c\n",c);

    // ******* fgets **********
    // ptr = fopen("test.txt","r");
    // char str[4];
    // fgets(str,3,ptr);
    // printf("The 3 character string is %s\n",str);

    // ******* fputc **********
    // ptr = fopen("test.txt","w");
    // fputc('A',ptr);

    // ******* fputs **********
    //  ptr = fopen("test.txt","w");
    //  ptr = fopen("test.txt","r+");
    //  ptr = fopen("test.txt","w+");
    //  ptr = fopen("test.txt","a+");
    // fputs("This is Abu Zaid.",ptr);


    // fclose(ptr);
}