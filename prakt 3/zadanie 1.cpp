#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <fstream>
  using namespace std;
  
 
void ShellSort(int n, int arr[])
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = arr[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < arr[j - step])
                    arr[j] = arr[j - step];
                else
                    break;
            }
            arr[j] = tmp;
        }
}


int main()
{	int size = 100;

	string Name[size];
	string kontinent[size];
	string city[size];
	int plosa[size];
	int naselenna[size];

{ 
plosa[1]=603628;
Name[1]="Ukraine";
kontinent[1]="Europe";
city[1]="Kyiv";
naselenna[1]=42418235;

plosa[2]=409531;
Name[2]="OAE";
kontinent[2]="Azia";
city[2]="Aby-dabi";
naselenna[2]=5365215;

plosa[3]=8359214;
Name[3]="Nigeria";
kontinent[3]="Afrika";
city[3]="Abydga";
naselenna[3]=42156235;

plosa[4]=603628;
Name[4]="Efiopia";
kontinent[4]="Afrika";
city[4]="Addis-abeba";
naselenna[4]=458535;

plosa[5]=564648;
Name[5]="Gana";
kontinent[5]="Afrika";
city[5]="Akkra";
naselenna[5]=7862251;

plosa[6]=825428;
Name[6]="Algir";
kontinent[6]="Afrika";
city[6]="Algir";
naselenna[6]=459435;

plosa[7]=630558;
Name[7]="Iordania";
kontinent[7]="Azia";
city[7]="Amman";
naselenna[7]=4968455;

plosa[8]=10698;
Name[8]="Niderlandi";
kontinent[8]="Europe";
city[8]="Amsterdam";
naselenna[8]=796225;

plosa[9]=98615;
Name[9]="Andorra";
kontinent[9]="Europe";
city[9]="Andorra-la-Velia";
naselenna[9]=5581865;

plosa[10]=98615;
Name[10]="Tyrkei";
kontinent[10]="Azia";
city[10]="Ankara";
naselenna[10]=5581865;

plosa[11]=8621551;
Name[11]="Madagaskar";
kontinent[11]="Afrika";
city[11]="Antananarivy";
naselenna[11]=36972165;

plosa[12]=8562115;
Name[12]="Samoa";
kontinent[12]="Avstralia";
city[12]="Apia";
naselenna[12]=128115;

plosa[13]=98123;
Name[13]="Erutrea";
kontinent[13]="Afrika";
city[13]="Asmara";
naselenna[13]=5254789;

plosa[14]=58744;
Name[14]="Kazakstan";
kontinent[14]="Azia";
city[14]="Astana";
naselenna[14]=254789;

plosa[15]=587413;
Name[15]="Paragvay";
kontinent[15]="Pivdena Amerika";
city[15]="Asynson";
naselenna[15]=2547169;

plosa[16]=254789;
Name[16]="Gresia";
kontinent[16]="Europe";
city[16]="Afinu";
naselenna[16]=1478569;

plosa[17]=254789;
Name[17]="Tyrkmenistan";
kontinent[17]="Azia";
city[17]="Ashaban";
naselenna[17]=254789;

plosa[18]=651127;
Name[18]="Irak";
kontinent[18]="Azia";
city[18]="Bagdad";
naselenna[18]=5581822;

plosa[19]=986558;
Name[19]="Azerbaydgan";
kontinent[19]="Azia";
city[19]="Baky";
naselenna[19]=5522547;

plosa[20]=985478;
Name[20]="Mali";
kontinent[20]="Afrika";
city[20]="Bamako";
naselenna[20]=552254;

plosa[21]=324974;
Name[21]="Sentralnoafrikansra Respyblika";
kontinent[21]="Afrika";
city[21]="Bangi";
naselenna[21]=2164879;

plosa[22]=541359;
Name[22]="Bruney";
kontinent[22]="Azia";
city[22]="Bandar-Seri-Begavan";
naselenna[22]=15548745;

plosa[23]=821559;
Name[23]="Tailand";
kontinent[23]="Azia";
city[23]="Bangkok";
naselenna[23]=348745;

plosa[24]=633359;
Name[24]="Gambia";
kontinent[24]="Afrika";
city[24]="Bangyl";
naselenna[24]=1554115;

plosa[25]=58286;
Name[25]="Livan";
kontinent[25]="Azia";
city[25]="Beiryt";
naselenna[25]=96523;

plosa[26]=78956;
Name[26]="Serbia";
kontinent[26]="Europe";
city[26]="Belgrad";
naselenna[26]=586248;

plosa[27]=21581;
Name[27]="Beliz";
kontinent[27]="Pivnichna Amerika";
city[27]="Belmopan";
naselenna[27]=653314;

plosa[28]=96389;
Name[28]="Nimechinna";
kontinent[28]="Europe";
city[28]="Berlin";
naselenna[28]=15548745;

plosa[29]=92452;
Name[29]="Hveisaria";
kontinent[29]="Europe";
city[29]="Bern";
naselenna[29]=4558548;

plosa[30]=817654;
Name[30]="Slovachinna";
kontinent[30]="Europe";
city[30]="Bratislav";
naselenna[30]=31874588;

plosa[31]=96389;
Name[31]="Belgia";
kontinent[31]="Europe";
city[31]="Brusel";
naselenna[31]=826555;

plosa[32]=96389;
Name[32]="Nimechinna";
kontinent[32]="Europe";
city[32]="Berlin";
naselenna[32]=15548745;

plosa[33]=8282465;
Name[33]="Ygorchina";
kontinent[33]="Europe";
city[33]="Bydapeht";
naselenna[33]=9962535;

plosa[34]=652324;
Name[34]="Rymynia";
kontinent[34]="Europe";
city[34]="Byharest";
naselenna[34]=866225;

plosa[35]=96389;
Name[35]="Lintenshein";
kontinent[35]="Europe";
city[35]="Vadys";
naselenna[35]=8249548;

plosa[36]=8965581;
Name[36]="Malta";
kontinent[36]="Europe";
city[36]="Valetta";
naselenna[36]=8957825;

plosa[37]=8586596;
Name[37]="Posha";
kontinent[37]="Europe";
city[37]="Varshava";
naselenna[37]=5254818;

plosa[38]=958862;
Name[38]="Vatikan";
kontinent[38]="Europe";
city[38]="Vatikan";
naselenna[38]=381584;

plosa[39]=965235;
Name[39]="Avstraliz";
kontinent[39]="Europe";
city[39]="Viden";
naselenna[39]=658668;

plosa[40]=8558522;
Name[40]="Litva";
kontinent[40]="Europe";
city[40]="Vilnus";
naselenna[40]=8191514;

plosa[41]=5631553;
Name[41]="Finlandia";
kontinent[41]="Europe";
city[41]="Gelsinki";
naselenna[41]=6513559;

plosa[42]=8558522;
Name[42]="Bangladeh";
kontinent[42]="Azia";
city[42]="Dakka";
naselenna[42]=6325188;

plosa[43]=762211;
Name[43]="Siria";
kontinent[43]="Azia";
city[43]="Damask";
naselenna[43]=3663665;

plosa[44]=782223;
Name[44]="India";
kontinent[44]="Azia";
city[44]="Nu-Dela";
naselenna[44]=8659591;

plosa[45]=84221133;
Name[45]="Indonezia";
kontinent[45]="Azia";
city[45]="Dgakarta";
naselenna[45]=6198448;

plosa[46]=899996;
Name[46]="Timor";
kontinent[46]="Azia";
city[46]="Dili";
naselenna[46]=8003541;

plosa[47]=651156;
Name[47]="Katar";
kontinent[47]="Azia";
city[47]="Doha";
naselenna[47]=1542485;

plosa[48]=1651611;
Name[48]="Tadgikistan";
kontinent[48]="Azia";
city[48]="Dyhanbe";
naselenna[48]=3284514;

plosa[49]=8558522;
Name[49]="Kyveit";
kontinent[49]="Azia";
city[49]="El-Kyveit";
naselenna[49]=6325188;

plosa[50]=854533;
Name[50]="Bangladeh";
kontinent[50]="Azia";
city[50]="Dakka";
naselenna[50]=4345453;

plosa[51]=4646688;
Name[51]="Saydivska Aravia";
kontinent[51]="Azia";
city[51]="Er-Riad";
naselenna[51]=24244388;

plosa[52]=4902122;
Name[52]="Birmenia";
kontinent[52]="Azia";
city[52]="Erevan";
naselenna[52]=3256969;

plosa[53]=1258622;
Name[53]="Izrail";
kontinent[53]="Azia";
city[53]="Erysalim";
naselenna[53]=1456767;

plosa[54]=9846519;
Name[54]="Pacistan";
kontinent[54]="Azia";
city[54]="Islamabad";
naselenna[54]=1651986;

plosa[55]=816598;
Name[55]="Afganistan";
kontinent[55]="Azia";
city[55]="Kabyl";
naselenna[55]=1846775;

plosa[56]=4614975;
Name[56]="Nepal";
kontinent[56]="Azia";
city[56]="Katmandy";
naselenna[56]=4254841;

plosa[57]=781465;
Name[57]="Horvatia";
kontinent[57]="Europee";
city[57]="Zagreb";
naselenna[57]=1318428;

plosa[58]=5282455;
Name[58]="Moldova";
kontinent[58]="Europee";
city[58]="Kishiniv";
naselenna[58]=5442815;

plosa[59]=4282844;
Name[59]="Dania";
kontinent[59]="Europee";
city[59]="Kopengagen";
naselenna[59]=4545845;

plosa[60]=5282455;
Name[60]="Portugalia";
kontinent[60]="Europee";
city[60]="Lisabon";
naselenna[60]=5442815;

plosa[61]=775667;
Name[61]="Velica Britania";
kontinent[61]="Europe";
city[61]="London";
naselenna[61]=632451250;

plosa[62]=4556211;
Name[62]="Slovenia";
kontinent[62]="Europe";
city[62]="Lublana";
naselenna[62]=3526441;

plosa[63]=4565677;
Name[63]="Lulsembyrg";
kontinent[63]="Europe";
city[63]="Lulsembyrg";
naselenna[63]=3495249;

plosa[64]=198522;
Name[64]="Maldivi";
kontinent[64]="Azia";
city[64]="Male";
naselenna[64]=6516819;

plosa[65]=198522;
Name[65]="Bahrein";
kontinent[65]="Azia";
city[65]="Manama";
naselenna[65]=6516819;

plosa[66]=8465321;
Name[66]="Filipini";
kontinent[66]="Azia";
city[66]="Manila";
naselenna[66]=4963689;

plosa[67]=5373542;
Name[67]="Oman";
kontinent[67]="Azia";
city[67]="Maskat";
naselenna[67]=7467123;

plosa[68]=786754;
Name[68]="Bilorys";
kontinent[68]="Europea";
city[68]="Minsk";
naselenna[68]=4151861;

plosa[69]=6325951;
Name[69]="Monako";
kontinent[69]="Europe";
city[69]="Monako";
naselenna[69]=2625854;

plosa[70]=4916984;
Name[70]="Rosia";
kontinent[70]="Europe";
city[70]="Moskva";
naselenna[70]=16519615;

plosa[71]=8535522;
Name[71]="Kipr";
kontinent[71]="Europe";
city[71]="Nikosia";
naselenna[71]=1327863;

plosa[72]=4916984;
Name[72]="Norvegia";
kontinent[72]="Europe";
city[72]="Oslo";
naselenna[72]=16519615;

plosa[73]=9451631;
Name[73]="Fransia";
kontinent[73]="Europe";
city[73]="Parig";
naselenna[73]=8963258;

plosa[74]=861876;
Name[74]="Chornogoria";
kontinent[74]="Europe";
city[74]="Moskva";
naselenna[74]=451666;

plosa[75]=75312355;
Name[75]="Chehia";
kontinent[75]="Europe";
city[75]="Praga";
naselenna[75]=49459454;

plosa[76]=4981696;
Name[76]="Malaizia";
kontinent[76]="Azia";
city[76]="Kyala-Lympyr";
naselenna[76]=1842485;

plosa[77]=6456954;
Name[77]="Islandia";
kontinent[77]="Europe";
city[77]="Reikavik";
naselenna[77]=4568762;

plosa[78]=9815165;
Name[78]="Latvia";
kontinent[78]="Europe";
city[78]="Riga";
naselenna[78]=5488651;

plosa[79]=1518912;
Name[79]="Italia";
kontinent[79]="Europe";
city[79]="Pim";
naselenna[79]=26518533;

plosa[80]=75312355;
Name[80]="San-Marino";
kontinent[80]="Europe";
city[80]="San-Marino";
naselenna[80]=49459454;

}


string tempName;
int qw=0;
int qq=1;
int arr[256];



cout << "Vedite kontinent: ";
cin >> tempName;


for(int i=0;i<100;i++){
	if(tempName==kontinent[i]){
	arr[qq]=naselenna[i];
	qw++;
	qq++;
	}
}
ofstream file("file_structuri_zadanie_1.txt",ios_base::trunc);
                size=qq;
                ShellSort(qq, arr);
                printf("\nStryktyri : \n");
                
    for (int i = 0; i < qq; i++){
    	for (int j = 0 ; j < 100; j++){
    if(arr[i]==naselenna[j]){
    	cout <<"\nNazvaniye : "<< Name[j]<<"\nNeseleniye : "<< naselenna[j]<<"\nGorod : "<< city[j]<<"\nPlosha : "<<plosa[j]<<"\nKontinent : "<<kontinent[j]<<"\n\n";
    file <<"\nNazvaniye : "<< Name[j]<<"\nNeseleniye : "<< naselenna[j]<<"\nGorod : "<< city[j]<<"\nPlosha : "<<plosa[j]<<"\nKontinent : "<<kontinent[j]<<"\n\n";
	}
    
   
}
}
   cout <<"Kolichestvo elementov stryktyri= "<< qw<<endl;
   file <<"Kolichestvo elementov stryktyri= "<< qw<<endl;
   file.close();
system("pause");

	}
