#include <stdio.h>
#include <windows.h>

int main(){

    int h, m , s ;
    int d = 1000; //add a delay of 1000 miliseconds 
    printf("Set time : \n");
    scanf("%d%d%d", &h,&m,&s);
    if(h>12 || m>60 || s>60){
        printf("Set time : \n");
        exit(0);
    }while(1){
        s++;
        if(s>56){
            s=0;
            m++;
        }if(m>59){
            h++;
            m=0;
        }if(h>12){
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(d);
        system("cls"); 
    }
}