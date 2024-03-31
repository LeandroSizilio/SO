#include <iostream>
#include <cstdlib>

int main() {
    system("uptime | awk ' { print $3 , $4 }' | sed 's/,//'");   // Printa HORAS depois DIAS
    return 0;
}