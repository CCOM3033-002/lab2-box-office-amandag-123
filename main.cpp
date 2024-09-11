// Amanda González Mangual, amandag-123, 801-22-5391
//Lab 2 

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
//declaración de variables
string movie; //nombre de la pelicula 
double adult_tix, child_tix; //numero de boletos vendidos para adultos y niños
double child_tix_p, adult_tix_p; //precio total de boletos vendidos
double gross_profit, net_profit, fee; //ganancias brutas, netas y tarifa de distribuidor 

//mensaje de proposito de programa
cout<<"This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater.\n"<<endl;

//entrada del nombre de la pelicula
cout<<"Enter the name of the movie:";
getline(cin,movie);

//Entrada del numero de boletos vendidos para adultos y niños
cout<<"Enter the amount of adult tickets sold:";
cin>>adult_tix;
cout<<"Enter the amount of child tickets sold:";
cin>>child_tix;

//calculo del total de boletos vendidos 
child_tix_p = child_tix*6.00;
adult_tix_p= adult_tix*10.00;

// calculo de ganancias bruta, neta y tarifa de distribuidor
gross_profit= child_tix_p + adult_tix_p; 
net_profit= gross_profit*0.20 ; 
fee=gross_profit -net_profit;


cout<<"\n\n";
//Despliegue de resultados 
cout<<"Movie Name: \t\t"<<setw(8)<<'"'<<movie<<'"'<<endl;
cout<<left<<setw(30)<<"Adult tickets sold: "<<right<<setw(20)<<adult_tix<<endl;
cout<<left<<setw(30)<<"Child tickets sold: "<<right<<setw(20)<<child_tix<<endl;

//fixed para mostrar datos con dos numeros decimales
cout<<left<<setw(30)<<setprecision(2)<<fixed;
cout<<left<<setw(30)<<"Gross Box Office Profit: "<<right<<setw(10)<<"$"<<setw(10)<<gross_profit<<endl;
cout<<left<<setw(30)<<"Net Box Office Profit: "<<right<<setw(10)<<"$"<<setw(10)<<net_profit<<endl;
cout<<left<<setw(30)<<"Amount Paid to Distributor: "<<right<<setw(10)<<"$"<<setw(10)<<fee<<endl;

return 0;
}

