#include <iostream>
#include <math.h>
#include <string>
#include <locale.h>
using namespace std;
int asignacion(char);
//-------------------------------------------------------BIENVENIDO A ENIGMA---------------------------------------------------------
int main(int argc, char **argv)
{
    float alfa, beta, teta, ro, epsilon, ohmega, ohm = 0;
    int i = 0, j = 0, k, ohm2;
    char config, c1, c2, c3, c4, c5;
    bool error = 0, opc, e = 0;
    string texto;
    setlocale(LC_CTYPE, "SPANISH");
    while (1)
    {
        i = 0;
        system("CLS");
        system("COLOR 0A"); // MENÚ:
        cout << "\n\n\n\n\n\t\t\t\t¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
        cout << "\t\t\t\t\t\t\t\tB U A P\n";
        cout << "\t\t\t\t¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤\n";
        cout << "\t\t\t\t\t\t\t\t\tE.S.I.M.E. \n";
        cout << "\t\t\t\t¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤\n";
        cout << "\t\t\t\t\t\t\t\t   Ingeniería En C Computación\n\t\t\t\t¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤\n";
        cout << "\t\t\t\t¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤\n";
        cout << "\t\t\t\t\t\t\t\t\tBienvenid@\n\t\t\t\t\t\t\t\t\t~ENIGMA\n\t\t\t\t\t\t\t\t\t®Irwing Duran\n\t\t\t\t¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤ ¤\n";
        cout << "\t\t\t\t¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦\n";
        cout << "\t\t\t\t\t\t\t\tPress 0 Para Cifrar\n\t\t\t\t\t\t\t\tPress 1 Para Descifrar\n";
        cout << "\t\t\t\r\t\t\t\t";
        cin >> opc;
        if (opc == 0)
        {
            do
            {
                system("COLOR 0E");
                system("CLS");
                cout << "\n\n\nEscribe la configuración de la máquina (Sólo Mayúsculas)\n(Ejemplo: Combinación AAAA)\nLa letra numero 1 es la de extrema derecha, La 5 es la de extrema izquierda\nLetra numero " << i + 1 << "\n";
                cin >> config;
                if ((config >= 65 && config <= 90))
                { // LAS LETRAS DEBEN SER MAYÚSCULAS
                    switch (i)
                    { // SE ASIGNA LA POSICION DEL ALFABETO A CINCO VARIABLES PARA REALIZAR UNA OPERACION Y CIFRAR UNA NUEVA LETRA
                    case 0:
                        c1 = config;
                        alfa = asignacion(config);
                        break;
                    case 1:
                        c2 = config;
                        beta = asignacion(config);
                        break;
                    case 2:
                        c3 = config;
                        teta = asignacion(config);
                        break;
                    case 3:
                        c4 = config;
                        ro = asignacion(config);
                        break;
                    case 4:
                        c5 = config;
                        epsilon = asignacion(config);
                        break;
                    }
                    error = 0;
                    i++;
                }
                else
                {
                    system("COLOR 0C"); // LAS LETRAS DEBEN SER MAYÚSCULAS
                    cout << "\n\n\n¡¡¡ERROR!\n¡¡¡No es una letra o no es mayúscula!!!\n";
                    system("PAUSE");
                    error = 1;
                }
            } while (error != 0 || i < 5);
            fflush(stdin);
            system("CLS");
            system("COLOR 0E"); // SE ESCRIBE LA COMBINACIÓN DE LA MÁQUINA
            cout << "\n\n\nEscribe el texto para cifrar con la combinacion:\n\t\t\t\t\t" << c5 << " " << c4 << " " << c3 << " " << c2 << " " << c1 << "\n\n\n";
            getline(cin, texto);
            system("CLS");
            cout << "\n\n\nTexto cifrado normal:\n\n"; // SE MUESTRA EL TEXTO CIFRADO TAL CUÁL SE ESCRIBIÓ
            j = 0;
            k = 0;
            ohm = 0;
            e = 0;
            for (int i = 0; i < texto.length(); i++)
            {
                if (texto[i] >= (char)65 && texto[i] <= (char)90)
                {                  // SI EL CARACTER NO ES ESPACIO, CIFRA, SI ES ESPACIO SÓLO IMPRIME
                    fflush(stdin); // SE LIMPIA EL BUFFER PARA QUE NO SE SATURE LA MEMORIA DE CÁLCULOS
                    if (c5 != 'A')
                    {              // PARA EVITAR QUE COMBINACIONES DE LA MISMA LETRA CON EL MISMO VALOR SE REPITAN...
                        ohm = 300; //... SE ASIGNA UN VALOR DE SUMA AL RECORRIMIENTO DE LAS LETRAS, DEPEDIENDO LA COMBINACIÓN
                    }
                    else
                    {
                        if (c4 != 'A')
                        {
                            ohm = 240;
                        }
                        else
                        {
                            if (c3 != 'A')
                            {
                                ohm = 180;
                            }
                            else
                            {
                                if (c2 != 'A')
                                {
                                    ohm = 120;
                                }
                                else
                                {
                                    if (c1 != 'A')
                                    {
                                        ohm = 60;
                                    }
                                    else
                                    {
                                        ohm = 30;
                                    }
                                }
                            }
                        }
                    }
                    // FORMULA PARA CIFRAR (det[a,B,E,t,r]+ohm) COMO SON CINCO EN UNA MATRIZ DE 2×2 SE ELIMINA UN TERMINO PARA QUE PASEN LAS CINCO LETRAS
                    // SE HACE UN VALOR ABSOLUTO DE LA DETERMINANTE
                    ohmega = abs(((alfa + beta + 1) * (alfa + beta + 1)) - ((alfa + beta + teta + 1) * (alfa + beta + teta + ro + 1)) + ((beta + 1) * (beta + teta + 1)) - ((beta + teta + ro + 1) * (beta + teta + ro + epsilon + 1)) + ((teta + 1) * (teta + alfa + ro + 1)) - ((teta + alfa + ro + epsilon + 1) * (alfa + teta + ro + epsilon + 1)) + ((ro + 1) * (ro + alfa + 1)) - ((ro + alfa + beta + 1) * (ro + alfa + beta + epsilon + 1)) + ((teta + 1) * (teta + alfa + 1)) - ((teta + alfa + beta + 1) * (teta + alfa + beta + epsilon + 1))) + ohm;
                    ohm2 = round(ohmega);
                    if (ohm2 % 2 == 0)
                    {
                        ohmega = ohmega + round(ohmega * 2);
                    }
                    else
                    {
                        ohmega = ohmega + round(ohmega / 2);
                    }
                    if (i % 2 == 0)
                    {
                        ohmega = ohmega + round(pow(i, 2));
                    }
                    else
                    {
                        if (sqrt(ohmega) < 1)
                        {
                            ohmega = ohmega + round(sqrt(ohmega)) * 10;
                        }
                        else
                        {
                            ohmega = ohmega + round(sqrt(ohmega));
                        }
                    }
                    ohmega = ohmega + round(log10(ohmega * 10000));
                    // SI EL NUMÚMERO ES DEMASIADO GRANDE (MAX APROX ±10K) SE RESTA PARA QUE SEA MENOR EL CIFRADO
                    if (ohmega >= 3000 && ohmega < 5000)
                    {
                        ohmega = ohmega - 1000;
                    }
                    if (ohmega >= 5000 && ohmega < 8000)
                    {
                        ohmega = ohmega - 3000;
                    }
                    if (ohmega >= 8000)
                    {
                        ohmega = ohmega - 5000;
                    }
                    if (j != 0)
                    {
                        if (e == 0)
                        {
                            j = i;
                        }
                        else
                        {
                            j = i - 1;
                        }
                    }
                    // EL ÚNICO DETALLE DE LA MÁQUINA ES QUE OTRA COMBINACIÓN CONCIDIRÁ CON LA ACTUAL; SIN EMBARGO ES DIFÍCIL ADIVINAR CUÁL SE APROXIMA
                    while (j != ohmega)
                    {
                        // COMIENZA EL RECORRIMIENTO DE LETRAS
                        if (texto[i] >= 90)
                        { // SI SE PASA DE "Z" ASCII VUELVE A EMPEZAR EN "A" ASCII
                            texto[i] = 65;
                        }
                        else
                        {
                            texto[i]++; // SE HACE EL RECORRIMIENTO DE LA LETRA
                        }
                        j++;
                        if (j == ohmega)
                        {
                            j = 0;
                            break;
                        }
                    }
                    c1++; // EL RECORRIMIENTO DE LOS "ROTORES COMIENZA"
                    alfa++;
                    if (c1 > 'Z')
                    {
                        c1 = 'A';
                        c2++;
                        alfa = 1;
                        beta++;
                    }
                    if (c2 > 'Z')
                    {
                        c2 = 'A';
                        c3++;
                        beta = 1;
                        epsilon++;
                    }
                    if (c3 > 'Z')
                    {
                        c3 = 'A';
                        c4++;
                        epsilon = 1;
                        teta++;
                    }
                    if (c4 > 'Z')
                    {
                        c4 = 'A';
                        c5++;
                        teta = 1;
                        ro++;
                    }
                    if (c5 > 'Z')
                    {
                        c5 = 'A';
                        c1 = 'A';
                        ro = 1;
                        alfa = 1;
                    }
                    e = 0;
                    cout << texto[i];
                }
                else
                { // SI NO ES LETRA IMPRIME EL ESPACIO
                    e = 1;
                    cout << " ";
                }
            }
            j = 0;
            cout << "\n\n\nEn grupos de cuatro:\n\n"; // PARA MEJORAR EL CIFRADO SE PUEDE AGRUPAR EN GRUPOS DE CUATRO
            for (int i = 0; i <= texto.length(); i++)
            {
                if (texto[i] != (char)32)
                { // SI EN EL STRING HAY UN ESPACIO NO LO TOMARÁ EN CUENTA
                    cout << texto[i];
                    j++;
                    if (j % 4 == 0)
                    { // CADA CUATRO LETRAS SE IMPRIME UN ESPACIO
                        cout << " ";
                    }
                }
            }
            j = 0;
            cout << "\n\n\nEn grupos de cinco:\n\n"; // Y TAMBIÉN PARA MEJORAR EL CIFRADO SE PUEDE AGRUPAR EN GRUPOS DE CINCO
            for (int i = 0; i <= texto.length(); i++)
            {
                if (texto[i] != (char)32)
                { // SI EN EL STRING HAY UN ESPACIO NO LO TOMARÁ EN CUENTA
                    cout << texto[i];
                    j++;
                    if (j % 5 == 0)
                    { // CADA CINCO LETRAS SE IMPRIME UN ESPACIO
                        cout << " ";
                    }
                }
            }
            cout << "\n";
            system("PAUSE");
        }
        else
        {
            do
            {
                system("CLS");
                system("COLOR 09"); // DESCIFRADO
                cout << "\n\n\nEscribe la configuración de la máquina (Sólo Mayúsculas)\n(Ejemplo: Combinación AAAA)\nLa letra numero 1 es la de extrema derecha, La 5 es la de extrema izquierda\nLetra numero " << i + 1 << "\n";
                cin >> config;
                if ((config >= 65 && config <= 90))
                {
                    switch (i)
                    {
                    case 0:
                        c1 = config;
                        alfa = asignacion(config);
                        break;
                    case 1:
                        c2 = config;
                        beta = asignacion(config);
                        break;
                    case 2:
                        c3 = config;
                        teta = asignacion(config);
                        break;
                    case 3:
                        c4 = config;
                        ro = asignacion(config);
                        break;
                    case 4:
                        c5 = config;
                        epsilon = asignacion(config);
                        break;
                    }
                    error = 0;
                    i++;
                }
                else
                {
                    system("COLOR 0C");
                    cout << "\n\n\nERROR!\nNo es una letra o no es mayúscula!!!\n";
                    system("PAUSE");
                    error = 1;
                }
            } while (error != 0 || i < 5);
            fflush(stdin);
            system("CLS");
            system("COLOR 09");
            cout << "\n\n\nEscribe el texto para descifrar con la combinacion:\n\t\t\t\t\t" << c5 << " " << c4 << " " << c3 << " " << c2 << " " << c1 << "\n\n\n";
            getline(cin, texto);
            cout << "\n";
            j = 0;
            e = 0;
            ohm = 0;
            for (int i = 0; i < texto.length(); i++)
            {
                if (texto[i] >= (char)65 && texto[i] <= (char)90)
                {
                    fflush(stdin);
                    if (c5 != 'A')
                    {
                        ohm = 300;
                    }
                    else
                    {
                        if (c4 != 'A')
                        {
                            ohm = 240;
                        }
                        else
                        {
                            if (c3 != 'A')
                            {
                                ohm = 180;
                            }
                            else
                            {
                                if (c2 != 'A')
                                {
                                    ohm = 120;
                                }
                                else
                                {
                                    if (c1 != 'A')
                                    {
                                        ohm = 60;
                                    }
                                    else
                                    {
                                        ohm = 30;
                                    }
                                }
                            }
                        }
                    }
                    ohmega = abs(((alfa + beta + 1) * (alfa + beta + 1)) - ((alfa + beta + teta + 1) * (alfa + beta + teta + ro + 1)) + ((beta + 1) * (beta + teta + 1)) - ((beta + teta + ro + 1) * (beta + teta + ro + epsilon + 1)) + ((teta + 1) * (teta + alfa + ro + 1)) - ((teta + alfa + ro + epsilon + 1) * (alfa + teta + ro + epsilon + 1)) + ((ro + 1) * (ro + alfa + 1)) - ((ro + alfa + beta + 1) * (ro + alfa + beta + epsilon + 1)) + ((teta + 1) * (teta + alfa + 1)) - ((teta + alfa + beta + 1) * (teta + alfa + beta + epsilon + 1))) + ohm;
                    ohm2 = round(ohmega);
                    if (ohm2 % 2 == 0)
                    {
                        ohmega = ohmega + round(ohmega * 2);
                    }
                    else
                    {
                        ohmega = ohmega + round(ohmega / 2);
                    }
                    if (i % 2 == 0)
                    {
                        ohmega = ohmega + round(pow(i, 2));
                    }
                    else
                    {
                        if (sqrt(ohmega) < 1)
                        {
                            ohmega = ohmega + round(sqrt(ohmega)) * 10;
                        }
                        else
                        {
                            ohmega = ohmega + round(sqrt(ohmega));
                        }
                    }
                    ohmega = ohmega + round(log10(ohmega * 10000));
                    if (ohmega >= 3000 && ohmega < 5000)
                    {
                        ohmega = ohmega - 1000;
                    }
                    if (ohmega >= 5000 && ohmega < 8000)
                    {
                        ohmega = ohmega - 3000;
                    }
                    if (ohmega >= 8000)
                    {
                        ohmega = ohmega - 5000;
                    }
                    if (j != 0)
                    {
                        if (e == 0)
                        {
                            j = i;
                        }
                        else
                        {
                            j = i - 1;
                        }
                    }
                    while (j != ohmega)
                    {
                        if (texto[i] <= 65)
                        {                  // PARA DESCIFRAR SE HACE EL MISMO PROCEDIMIENTO PEOR INVERSO
                            texto[i] = 90; // SI LA LETRA ES MENOR A "A" ASCII VUELVE A EMPEZAR EN "Z" ASCII
                        }
                        else
                        {
                            texto[i]--; // EN LUGAR DE AVANZAR POSICIONES, RETROCEDEMOS POSICIONES
                        }
                        j++;
                        if (j == ohmega)
                        {
                            j = 0;
                            break;
                        }
                    }
                    c1++;
                    alfa++;
                    if (c1 > 'Z')
                    {
                        c1 = 'A';
                        c2++;
                        alfa = 1;
                        beta++;
                    }
                    if (c2 > 'Z')
                    {
                        c2 = 'A';
                        c3++;
                        beta = 1;
                        epsilon++;
                    }
                    if (c3 > 'Z')
                    {
                        c3 = 'A';
                        c4++;
                        epsilon = 1;
                        teta++;
                    }
                    if (c4 > 'Z')
                    {
                        c4 = 'A';
                        c5++;
                        teta = 1;
                        ro++;
                    }
                    if (c5 > 'Z')
                    {
                        c5 = 'A';
                        c1 = 'A';
                        ro = 1;
                        alfa = 1;
                    }
                    e = 0;
                    cout << texto[i];
                }
                else
                {
                    e = 1;
                    cout << " ";
                }
            }
            cout << "\n";
            system("PAUSE");
        }
    }
    return 0;
}

int asignacion(char l)
{
    switch (l)
    {
    case 'A':
        return 1;
        break;
    case 'B':
        return 2;
        break;
    case 'C':
        return 3;
        break;
    case 'D':
        return 4;
        break;
    case 'E':
        return 5;
        break;
    case 'F':
        return 6;
        break;
    case 'G':
        return 7;
        break;
    case 'H':
        return 8;
        break;
    case 'I':
        return 9;
        break;
    case 'J':
        return 10;
        break;
    case 'K':
        return 11;
        break;
    case 'L':
        return 12;
        break;
    case 'M':
        return 13;
        break;
    case 'N':
        return 14;
        break;
    case 'O':
        return 15;
        break;
    case 'P':
        return 16;
        break;
    case 'Q':
        return 17;
        break;
    case 'R':
        return 18;
        break;
    case 'S':
        return 19;
        break;
    case 'T':
        return 20;
        break;
    case 'U':
        return 21;
        break;
    case 'V':
        return 22;
        break;
    case 'W':
        return 23;
        break;
    case 'X':
        return 24;
        break;
    case 'Y':
        return 25;
        break;
    case 'Z':
        return 26;
        break;
    default:
        break;
    }
}