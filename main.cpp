#include <cstdlib>
#include <iostream>
using namespace std;

string calculo (string  fechaBaja, string  fechaAlta) {
    char diaBaja[2] = "";
    int i  = 0;
    while (fechaBaja[i] != '/')  {
             diaBaja[i] += fechaBaja[i];
             i++;
    }
    
    char diaAlta[2] = ""; 
    int j = 0;
    while (fechaAlta[j] != '/') {
            diaAlta[j] += fechaAlta[j];
             j++;
    }
    
    int diaBajaInteger = atoi(diaBaja);
    int diaAltaInteger = atoi(diaAlta);
    
    int diasDiferencia = 0;
    if (diaBajaInteger <= diaAltaInteger) {
             diasDiferencia = diaAltaInteger - diaBajaInteger;
    } else  {
            diasDiferencia = diaBajaInteger - diaAltaInteger;
    }
    
   
    char mesBaja[2] = "";
     int k = 0;
     i++;
    while (fechaBaja[i] != '\0')  {
            mesBaja[k] += fechaBaja[i];
            i++;
            k++;
    }
    
    char mesAlta[2] = ""; 
    int u = 0;
    j++;
    while (fechaAlta[j] != '\0') {
         mesAlta[u] += fechaAlta[j];
        j++;
        u++;
    }
    
    int mesBajaInteger = atoi(mesBaja);
    int mesAltaInteger = atoi(mesAlta);
    
    int mesDiferencia = 0;
    if (mesBajaInteger <= mesAltaInteger) {
             mesDiferencia = mesAltaInteger - mesBajaInteger;
    } else  {
                mesDiferencia = mesBajaInteger - mesAltaInteger;
    }
    
         if (mesDiferencia == 0) {
                     return  "The employer was " + std::to_string(diasDiferencia) + " out of work.";
         }   
    
            if (diasDiferencia == 0) {
                    return  "The employer was " + std::to_string(mesDiferencia) + " months  out of work.";
            }
        
                    return  "The employer was " + std::to_string(mesDiferencia) + " months and " + std::to_string(diasDiferencia) + "  days  out of work.";
   
  } 


int  main(int argc, char** argv) {    
        cout << calculo("17/05", "11/04")  << endl;
        return 0;      
}
