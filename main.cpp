}
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
