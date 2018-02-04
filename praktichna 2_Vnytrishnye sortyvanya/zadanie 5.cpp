#include <fstream>
#include <iostream>
using namespace std; 
 main()
{ofstream file("file_zadanie_5.txt",ios_base::trunc);
	file<<"Kontrol'n³ pitannja"<<endl;
	file<<"Chim mozhna pojasniti r³znoman³ttja algoritm³v sortuvan'?"<<endl;
	file<<"----Rizni algoritmi na rizny vipadok"<<endl;
	file<<"Chomu na danij moment ne ³snuº un³versal'nogo algoritmu sortuvannja?"<<endl;
	file<<"----Bo kojen mae svoi nedoliki i efectivney ispolzovatb rizni algoritmi v riznih vupadkah"<<endl;
	file<<"Jak dotrimannja vlastivostej st³jkost³ ³ prirodnost³ vplivaº na trudom³stk³st' algoritmu sortuvannja?"<<endl;
	file<<"----BustriIIIe robit"<<endl;
	file<<"Jak viznachiti, jakim algoritmom sortuvannja v³ddati perevagu pri vir³shenn³ zadach³?"<<endl;
	file<<"----Google abo podivitis na + i -= algoritmy"<<endl;
file.close();
    system("pause");
    return 0;
    
    
    
   

}
