#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  time_t timer;
  struct tm *horarioLocal;

  time(&timer); // Obtem informações de data e hora
  horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

  int hora = horarioLocal->tm_gmtoff +11; // +11 Pq ficava bugado quando passada das 22hrs ficava numero negativo quando fazia -1 
  int min  = horarioLocal->tm_min;
  int sec  = horarioLocal->tm_sec;
  int dia  = horarioLocal->tm_mday;
  int mes  = horarioLocal->tm_mon+1;
  int ano  = horarioLocal->tm_year+1900;

  cout << dia << "/" << mes << "/" << ano << " " << "Horário: " << hora << ":" << min << ":" << sec << " (UTC-3)." << endl;
  return 0;
}
