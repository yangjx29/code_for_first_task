int main () {
    int IWfOZip4UH;
    char niPdLI3oRt2x [(10043 - 43)];
    char jYClid [(10345 - 345)];
    int ej70IrnQtdlm;
    int cwDOnz0 [(10857 - 857)] = {(722 - 722)};
    int Ostgm4fJ [(1982 - 982)] = {(888 - 888)};
    int Ydnw8o [(10301 - 301)] = {(109 - 109)};
    int Z9saEf;
    int cezMc5;
    int y0vNEr;
    int O1nGtlREoMf;
    int vsDyUYC1F;
    cin.getline (jYClid, (10850 - 850), '\n');
    IWfOZip4UH = strlen (jYClid);
    cezMc5 = (772 - 772);
    ej70IrnQtdlm = (51 - 51);
    cin.getline (niPdLI3oRt2x, (10441 - 441), '\n');
    vsDyUYC1F = strlen (niPdLI3oRt2x);
    O1nGtlREoMf = (356 - 356);
    {
        Z9saEf = IWfOZip4UH;
        for (; (325 - 325) <= Z9saEf;) {
            if (jYClid[Z9saEf] <= '9' && '0' <= jYClid[Z9saEf]) {
                cwDOnz0[O1nGtlREoMf] = cwDOnz0[O1nGtlREoMf] + (jYClid[Z9saEf] - '0') * pow ((943.0 - 933.0), cezMc5);
                cezMc5 = cezMc5 + (361 - 360);
            }
            else if ((jYClid[Z9saEf -(164 - 163)] <= '9' && '0' <= jYClid[Z9saEf -(705 - 704)]) && ('0' > jYClid[Z9saEf] || jYClid[Z9saEf] > '9')) {
                O1nGtlREoMf = O1nGtlREoMf +(459 - 458);
                cezMc5 = (671 - 671);
            }
            else
                ;
            Z9saEf = Z9saEf -(527 - 526);
        }
    }
    cezMc5 = (596 - 596);
    y0vNEr = O1nGtlREoMf;
    O1nGtlREoMf = (613 - 613);
    {
        Z9saEf = vsDyUYC1F;
        for (; (838 - 838) <= Z9saEf;) {
            if (niPdLI3oRt2x[Z9saEf] <= '9' && '0' <= niPdLI3oRt2x[Z9saEf]) {
                Ydnw8o[O1nGtlREoMf] = Ydnw8o[O1nGtlREoMf] + (niPdLI3oRt2x[Z9saEf] - '0') * pow ((511.0 - 501.0), cezMc5);
                cezMc5 = cezMc5 + (289 - 288);
            }
            else {
                if ((niPdLI3oRt2x[Z9saEf -(717 - 716)] <= '9' && niPdLI3oRt2x[Z9saEf -(199 - 198)] >= '0') && (niPdLI3oRt2x[Z9saEf] < '0' || niPdLI3oRt2x[Z9saEf] > '9')) {
                    cezMc5 = (757 - 757);
                    O1nGtlREoMf = O1nGtlREoMf +(530 - 529);
                }
                else
                    ;
            }
            Z9saEf = Z9saEf -(938 - 937);
        }
    }
    {
        Z9saEf = (1155 - 802) - (847 - 495);
        for (; Z9saEf < (1629 - 629);) {
            {
                O1nGtlREoMf = (1591 - 872) - (1579 - 860);
                for (; O1nGtlREoMf <= y0vNEr;) {
                    if (Z9saEf >= cwDOnz0[O1nGtlREoMf] && Z9saEf < Ydnw8o[O1nGtlREoMf])
                        Ostgm4fJ[Z9saEf]++;
                    O1nGtlREoMf = O1nGtlREoMf +(570 - 569);
                }
            }
            Z9saEf = Z9saEf +(176 - 175);
        }
    }
    {
        Z9saEf = (966 - 873) - (1045 - 952);
        for (; Z9saEf < (1273 - 273);) {
            if (Ostgm4fJ[Z9saEf] > ej70IrnQtdlm)
                ej70IrnQtdlm = Ostgm4fJ[Z9saEf];
            Z9saEf = Z9saEf +(711 - 710);
        }
    }
    cout << y0vNEr << " " << ej70IrnQtdlm << endl;
    return (625 - 625);
}

