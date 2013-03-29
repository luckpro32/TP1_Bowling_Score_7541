#include <stdio.h>

int parserCrear(TDA_Parser* tda_parser, char[40] arch, char separador){
    //Recibo un tda_parser y divido las lineas por el caracter separador '|'
    int i,tiro=0;
    for (i=0; i<=strlen(tda_parser.lineaactual); i++){
        if (tda_parser.lineaactual[i] != separador){
            tda_parser.campo[tiro] = tda_parser.lineaactual[i];
            tiro++;
        }
        else{
            tda_parser.campo[tiro] = '\0';
            tiro = 0;
            }
        }
    }
    return 0;
}
