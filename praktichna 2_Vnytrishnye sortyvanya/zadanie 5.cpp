#include <fstream>
#include <iostream>
using namespace std; 
 main()
{ofstream file("file_zadanie_5.txt",ios_base::trunc);
	file<<"Kontrol'n� pitannja"<<endl;
	file<<"Chim mozhna pojasniti r�znoman�ttja algoritm�v sortuvan'?"<<endl;
	file<<"----Rizni algoritmi na rizny vipadok"<<endl;
	file<<"Chomu na danij moment ne �snu� un�versal'nogo algoritmu sortuvannja?"<<endl;
	file<<"----Bo kojen mae svoi nedoliki i efectivney ispolzovatb rizni algoritmi v riznih vupadkah"<<endl;
	file<<"Jak dotrimannja vlastivostej st�jkost� � prirodnost� vpliva� na trudom�stk�st' algoritmu sortuvannja?"<<endl;
	file<<"----BustriIIIe robit"<<endl;
	file<<"Jak viznachiti, jakim algoritmom sortuvannja v�ddati perevagu pri vir�shenn� zadach�?"<<endl;
	file<<"----Google abo podivitis na + i -= algoritmy"<<endl;
file.close();
    system("pause");
    return 0;
    
    
    
   

}
