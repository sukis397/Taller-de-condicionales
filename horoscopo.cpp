#include <iostream>
using namespace std;

int main() {
    int dia, mes;
    int diasEnMes;
    string nombreMes;

    cout << "Ingrese su dia de nacimiento: ";
    cin >> dia;
    cout << "Ingrese su mes de nacimiento (1-12): ";
    cin >> mes;

    // Asignar cantidad de días y nombre del mes
    if (mes == 1) {
        diasEnMes = 31;
        nombreMes = "Enero";
    }
    else if (mes == 2) {
        diasEnMes = 29; // hasta 29 por años bisiestos
        nombreMes = "Febrero";
    }
    else if (mes == 3) {
        diasEnMes = 31;
        nombreMes = "Marzo";
    }
    else if (mes == 4) {
        diasEnMes = 30;
        nombreMes = "Abril";
    }
    else if (mes == 5) {
        diasEnMes = 31;
        nombreMes = "Mayo";
    }
    else if (mes == 6) {
        diasEnMes = 30;
        nombreMes = "Junio";
    }
    else if (mes == 7) {
        diasEnMes = 31;
        nombreMes = "Julio";
    }
    else if (mes == 8) {
        diasEnMes = 31;
        nombreMes = "Agosto";
    }
    else if (mes == 9) {
        diasEnMes = 30;
        nombreMes = "Septiembre";
    }
    else if (mes == 10) {
        diasEnMes = 31;
        nombreMes = "Octubre";
    }
    else if (mes == 11) {
        diasEnMes = 30;
        nombreMes = "Noviembre";
    }
    else if (mes == 12) {
        diasEnMes = 31;
        nombreMes = "Diciembre";
    }
    else {
        cout << "Mes no valido" << endl;
        return 0;
    }

    // Validar día
    if (dia < 1 || dia > diasEnMes) {
        cout << "El dia " << dia << " no existe en " << nombreMes << endl;
        return 0;
    }

    // Mostrar mes y día válido
    cout << "Fecha valida: " << dia << " de " << nombreMes << endl;

    // --- Determinar el signo zodiacal ---
    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)) {
        cout << "Tu signo es Aries\n";
    }
    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5)) {
        cout << "Tu signo es Tauro\n";
    }
    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) {
        cout << "Tu signo es Geminis\n";
    }
    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)) {
        cout << "Tu signo es Cancer\n";
    }
    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) {
        cout << "Tu signo es Leo\n";
    }
    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) {
        cout << "Tu signo es Virgo\n";
    }
    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) {
        cout << "Tu signo es Libra\n";
    }
    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) {
        cout << "Tu signo es Escorpio\n";
    }
    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) {
        cout << "Tu signo es Sagitario\n";
    }
    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1)) {
        cout << "Tu signo es Capricornio\n";
    }
    else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)) {
        cout << "Tu signo es Acuario\n";
    }
    else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)) {
        cout << "Tu signo es Piscis\n";
    }

    return 0;
}
