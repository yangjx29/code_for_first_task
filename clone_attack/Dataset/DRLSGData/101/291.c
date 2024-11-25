typedef struct   QKpzlP {
    int dGICTdg;
    int inqKtL46;
    char V9uzAx58hIEc;
}
QKpzlP;

int main () {
    QKpzlP eCw45Pkh, nwhRDo03uC, pbRKFDhdZ6A;
    eCw45Pkh.V9uzAx58hIEc = 'A';
    nwhRDo03uC.V9uzAx58hIEc = 'B';
    pbRKFDhdZ6A.V9uzAx58hIEc = 'C';
    for (eCw45Pkh.dGICTdg = 0; 3 > eCw45Pkh.dGICTdg; eCw45Pkh.dGICTdg++) {
        for (nwhRDo03uC.dGICTdg = 0; nwhRDo03uC.dGICTdg < 3; nwhRDo03uC.dGICTdg++) {
            for (pbRKFDhdZ6A.dGICTdg = 0; 3 > pbRKFDhdZ6A.dGICTdg; pbRKFDhdZ6A.dGICTdg++) {
                int z5OobH, DKrOwX, L6iyQAm2Nu;
                eCw45Pkh.inqKtL46 = (eCw45Pkh.dGICTdg < nwhRDo03uC.dGICTdg) + (!(eCw45Pkh.dGICTdg != pbRKFDhdZ6A.dGICTdg));
                nwhRDo03uC.inqKtL46 = (nwhRDo03uC.dGICTdg < eCw45Pkh.dGICTdg) + (pbRKFDhdZ6A.dGICTdg < eCw45Pkh.dGICTdg);
                pbRKFDhdZ6A.inqKtL46 = (nwhRDo03uC.dGICTdg < pbRKFDhdZ6A.dGICTdg) + (eCw45Pkh.dGICTdg < nwhRDo03uC.dGICTdg);
                z5OobH = (eCw45Pkh.dGICTdg > nwhRDo03uC.dGICTdg && nwhRDo03uC.inqKtL46 > eCw45Pkh.inqKtL46) || (eCw45Pkh.dGICTdg < nwhRDo03uC.dGICTdg && nwhRDo03uC.inqKtL46 < eCw45Pkh.inqKtL46);
                DKrOwX = (pbRKFDhdZ6A.dGICTdg < eCw45Pkh.dGICTdg && eCw45Pkh.inqKtL46 < pbRKFDhdZ6A.inqKtL46) || (pbRKFDhdZ6A.dGICTdg > eCw45Pkh.dGICTdg && eCw45Pkh.inqKtL46 > pbRKFDhdZ6A.inqKtL46);
                L6iyQAm2Nu = (pbRKFDhdZ6A.dGICTdg > nwhRDo03uC.dGICTdg && pbRKFDhdZ6A.inqKtL46 < nwhRDo03uC.inqKtL46) || (pbRKFDhdZ6A.dGICTdg < nwhRDo03uC.dGICTdg && pbRKFDhdZ6A.inqKtL46 > nwhRDo03uC.inqKtL46);
                if (z5OobH + DKrOwX +L6iyQAm2Nu == 3) {
                    int lQlL7OKkP;
                    char fYd6icvg;
                    if (eCw45Pkh.dGICTdg > nwhRDo03uC.dGICTdg) {
                        lQlL7OKkP = eCw45Pkh.dGICTdg;
                        eCw45Pkh.dGICTdg = nwhRDo03uC.dGICTdg;
                        nwhRDo03uC.dGICTdg = lQlL7OKkP;
                        fYd6icvg = eCw45Pkh.V9uzAx58hIEc;
                        eCw45Pkh.V9uzAx58hIEc = nwhRDo03uC.V9uzAx58hIEc;
                        nwhRDo03uC.V9uzAx58hIEc = fYd6icvg;
                    }
                    if (eCw45Pkh.dGICTdg > pbRKFDhdZ6A.dGICTdg) {
                        lQlL7OKkP = eCw45Pkh.dGICTdg;
                        eCw45Pkh.dGICTdg = pbRKFDhdZ6A.dGICTdg;
                        pbRKFDhdZ6A.dGICTdg = lQlL7OKkP;
                        fYd6icvg = eCw45Pkh.V9uzAx58hIEc;
                        eCw45Pkh.V9uzAx58hIEc = pbRKFDhdZ6A.V9uzAx58hIEc;
                        pbRKFDhdZ6A.V9uzAx58hIEc = fYd6icvg;
                    }
                    if (nwhRDo03uC.dGICTdg > pbRKFDhdZ6A.dGICTdg) {
                        lQlL7OKkP = pbRKFDhdZ6A.dGICTdg;
                        pbRKFDhdZ6A.dGICTdg = nwhRDo03uC.dGICTdg;
                        nwhRDo03uC.dGICTdg = lQlL7OKkP;
                        fYd6icvg = pbRKFDhdZ6A.V9uzAx58hIEc;
                        pbRKFDhdZ6A.V9uzAx58hIEc = nwhRDo03uC.V9uzAx58hIEc;
                        nwhRDo03uC.V9uzAx58hIEc = fYd6icvg;
                    }
                    cout << eCw45Pkh.V9uzAx58hIEc << nwhRDo03uC.V9uzAx58hIEc << pbRKFDhdZ6A.V9uzAx58hIEc << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

