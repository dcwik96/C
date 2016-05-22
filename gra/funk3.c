#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "globalne.h"


void zapis(int n){

    FILE *pliczek;

    time_t current_time;
    char* c_time_string;

    current_time = time(NULL);
    c_time_string = ctime(&current_time);

    switch(n){
    case 1:{
        pliczek=fopen("statystyka1.txt","a+");
        fprintf(pliczek,"%d\t%d\t\t\t%s\n",gry_zgadywanie,counter_zgadywanie,c_time_string);
        fclose(pliczek);
    break;
    }
    case 2:{
        pliczek=fopen("statystyka2.txt","a+");
        fprintf(pliczek,"%d\t%d\t\t\t%s\n",gry_pkn,counter_pkn,c_time_string);
        fclose(pliczek);
        break;
    }
    case 3:{
        pliczek=fopen("statystyka3.txt","a+");
        fprintf(pliczek,"%d\t%d\t\t\t%s\n",gry_mnozenie,counter_mnozenie,c_time_string);
        fclose(pliczek);
        break;
    }
}








}
