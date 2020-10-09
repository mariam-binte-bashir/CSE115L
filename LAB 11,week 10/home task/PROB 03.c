#include<stdio.h>
#include<string.h>
struct BarcelonaPlayer
{
char name[20];
int age;
char country[20];
char Position[20];
double Salary;
double Rating;
};

void highestPaidPlayer(struct BarcelonaPlayer *pl, int size){
   int i;
   int highestIndex=0;
   for( i=0;i<size;i++){
       if(((pl+i)->Salary)>((pl+highestIndex)->Salary)){
           highestIndex =i;

       }
   }

   printf("Player with highest salary is %s",(pl+highestIndex)->name);
}

void findPlayers(struct BarcelonaPlayer *pl, int size){

   int i;
   int highestIndex=0;
   for( i=0;i<size;i++){
       if(strcmp((pl+i)->country,"Argentina")==0){

           printf("\nPlayer from Argentina: %s",(pl+i)->name);
       }
   }

}
int main(){


   struct BarcelonaPlayer players[]{
       {"Messi",34,"Argentina"," ",4560000,2},{"Ronaldo",34,"Brazil"," ",4560010,4},{"Luiz",34,"Argentina"," ",456010,14},
       {"Griezman",19,"France"," ",14560010,1},{"Ansu",27,"England"," ",5555,14}
   };

   highestPaidPlayer(players,5);
   findPlayers(players,5);

}
