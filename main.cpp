#include <iostream>

using namespace std;

void meni();
float odjeca(float unos);
float hrana(float unos);
float gazirani(float unos);
float tehno(float unos);
float racunari(float unos);
float mobliteli(float unos);
float bteh(float unos);
float autom(float unos);
float skolski(float unos);
void svota();

int main(){
    int x,unos,svota;
    while(true){
        meni();
        cin>>x;
        switch (x)
        {
        case 1:
			hrana(unos);
            break;
        case 2: 
        	odjeca(unos);
        	break;
        	
        case 8:
        	break;
        default:
            break;
        }
    }
    return 0;
}



void meni() {
    cout<<"----------------------------------"<<endl;
    cout<<"|              MENI              |"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"| <1> Hrana                      |"<<endl;
    cout<<"| <2> Odjeca                     |"<<endl;
    cout<<"| <3> Gazirani napici            |"<<endl;
    cout<<"| <4> Tehnologija                |"<<endl;
    cout<<"| <5> Automobili                 |"<<endl;
    cout<<"| <6> Nakit                      |"<<endl; 
    cout<<"| <7> Skolski pribor             |"<<endl;
    cout<<"| <8> Stanje na racunu           |"<<endl;
    cout<<"| <0> Izlaz                      |"<<endl;
    cout<<"Vas izbor je: ";
}

float hrana(float unos) {
	int x;
    cout<<"----------------------------------"<<endl;
    cout<<"|              MENI              |"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Unesite svotu novca koju zelite potrositi: ";
    cin>>unos;
    if(unos<=10){
    cout<<"----------------------------------"<<endl;
    cout<<"|              MENI              |"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"| <1> Jabuke 1KG - 5KM           |"<<endl;
    cout<<"| <2> Hljeb - 2KM                |"<<endl;
    cout<<"| <3> Banane 1KG - 7KM           |"<<endl;
    cout<<"| <4> Meso 1KG - 10KM            |"<<endl;
    cout<<"| <0> Vratite se nazad           |"<<endl;
    cout<<"Vas izbor je: ";
    cin>>x;
	}
}

float odjeca(float unos){
    int x;
    cout<<"----------------------------------"<<endl;
    cout<<"|              MENI              |"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Unesite svotu novca koju zelite potrositi: ";
    cin>>unos;
    if(unos<100){
    cout<<"----------------------------------"<<endl;
    cout<<"|              MENI              |"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"| <1> Adidas Muska Majica - 50KM |"<<endl;
    cout<<"| <2> Adida Zenska Majica - 45KM |"<<endl;
    cout<<"| <3> Nike Muska Majica - 60KM   |"<<endl;
    cout<<"| <4> Nike Zenska Majica - 55KM  |"<<endl;
    cout<<"| <0> Vratite se nazad           |"<<endl;
    cout<<"Vas izbor je: ";
    cin>>x;
    system("CLS");
    while(true){
        switch (x)
        {
        case 1:
            if(unos>=50){
                cout<<"Uspjesno ste kupili Adidas Muska Majica - 50KM (skinuto vam je 50KM sa racuna.)"<<endl;
                unos=unos-50;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 2:
        if(unos>=45){
                cout<<"Uspjesno ste kupili Adidas Zenska Majica - 45KM (skinuto vam je 45KM sa racuna.)"<<endl;
                unos=unos-45;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 3:
        if(unos>=60){
                cout<<"Uspjesno ste kupili Nike Muska Majica - 60KM (skinuto vam je 60KM sa racuna.)"<<endl;
                unos=unos-60;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 4:
        if(unos>=55){
                cout<<"Uspjesno ste kupili Adidas Zenska Majica - 55KM (skinuto vam je 55KM sa racuna.)"<<endl;
                unos=unos-45;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 0: 
        return main();
        default:
            break;
        }
        }
    }
    else if(unos>100) {
    cout<<"----------------------------------"<<endl;
    cout<<"|              MENI              |"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"| <1> Adidas Muska Jakna - 150KM |"<<endl;
    cout<<"| <2> Adida Zenska Jakna - 145KM |"<<endl;
    cout<<"| <3> Nike Muska Jakna - 160KM   |"<<endl;
    cout<<"| <4> Nike Zenska Jakna - 155KM  |"<<endl;
    cout<<"| <5> Gucci Unisex Jakna - 170KM |"<<endl;
    cout<<"| <0> Vratite se nazad           |"<<endl;
    cout<<"Vas izbor je: ";
    cin>>x;
    while(true){
        switch (x)
        {
        case 1:
            if(unos>=150){
                cout<<"Uspjesno ste kupili Adidas Muska Jakna - 150KM (skinuto vam je 150KM sa racuna.)"<<endl;
                unos=unos-150;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 2:
        if(unos>=145){
                cout<<"Uspjesno ste kupili Adidas Zenska Jakna - 145KM (skinuto vam je 145KM sa racuna.)"<<endl;
                unos=unos-145;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 3:
        if(unos>=160){
                cout<<"Uspjesno ste kupili Nike Muska Jakna -160KM (skinuto vam je 160KM sa racuna.)"<<endl;
                unos=unos-160;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 4:
        if(unos>=155){
                cout<<"Uspjesno ste kupili Adidas Zenska Jakna - 155KM (skinuto vam je 155KM sa racuna.)"<<endl;
                unos=unos-155;
                cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
            }
            else cout<<"Nemate dovoljno novca za ovu stavku.";
            return 0;
            break;
        case 5:
        if(unos>=170){
        cout<<"Uspjesno ste kupili Gucci Zenska Jakna - 170KM (skinuto vam je 170KM sa racuna.)"<<endl;
        unos=unos-170;
        cout<<"Ostalo vam je "<<unos<<"KM na racunu."<<endl;
        }
        else cout<<"Nemate dovoljno novca za ovu stavku.";
        return 0;
        break;
		
        case 0: 
        return main();
        default:
            break;
            }
        }
        }
  
	}


