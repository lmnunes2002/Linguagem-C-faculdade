#include <iostream>

using namespace std;

int main(){
  int jP, mC, pS, tG, brancos, nulos;
  int i;

  jP = mC = pS = tG = brancos = nulos = 0;

  cout<<"===== Candidatos =====\n"<<endl;
  cout<<"1. Candidato Jo�o Paulo"<<endl;
  cout<<"2. Candidata Maria Claudia"<<endl;
  cout<<"3. Candidato Pedro Souza"<<endl;
  cout<<"4. Candidato Ti�o do g�s"<<endl;
  cout<<"5. Votos brancos"<<endl;
  cout<<"6. Votos nulos"<<endl;
  cout<<"7. Encerrar vota��o"<<endl;

  cout<<"\nDigite o n�mero do seu candidato: ";
  cin>>i;

  while(i != 7){
    switch(i){
      case 1:
        jP++;
        break;
      case 2:
        mC++;
        break;
      case 3:
        pS++;
        break;
      case 4:
        tG++;
        break;
      case 5:
        brancos++;
        break;
      case 6:
        nulos++;
        break;
    }
    cout<<"Digite o n�mero do seu candidato: ";
    cin>>i;
  }

cout<<"\nResultado da vota��o:"<<endl;
cout<<"1. votos Jo�o Paulo: "<<jP<<endl;
cout<<"2. votos Maria Claudia: "<<mC<<endl;
cout<<"3. votos Pedro Souza: "<<pS<<endl;
cout<<"4. votos Ti�o do g�s: "<<tG<<endl;
cout<<"5. Votos brancos: "<<brancos<<endl;
cout<<"6. Votos nulos: "<<nulos<<endl;
}
