int main () {
    double  PWCvHDU [(135 - 35)];
    double  YQpM76lT [(150 - 50)];
    double  FZsY0KoMtGF [(358 - 258)];
    double  junzhi [(344 - 244)];
    double  fpUFkSKDBL2s [(572 - 472)] [(698 - 598)];
    int FGLRWnsePbAf;
    int HbkeHAl5;
    int wTD6nuyi;
    int BGo1TlAd7S;
    double  bA4VxbnNa [(735 - 635)] = {(294 - 294)};
    double  ak72eB63 [(1096 - 996)] = {(188 - 188)};
    scanf ("%d", &FGLRWnsePbAf);
    {
        wTD6nuyi = 785 - 785;
        while (wTD6nuyi < FGLRWnsePbAf) {
            scanf ("%d", &HbkeHAl5);
            {
                BGo1TlAd7S = (1348 - 954) - (1315 - 921);
                for (; HbkeHAl5 > BGo1TlAd7S;) {
                    scanf ("%lf", &fpUFkSKDBL2s[wTD6nuyi][BGo1TlAd7S]);
                    bA4VxbnNa[wTD6nuyi] = bA4VxbnNa[wTD6nuyi] + (double ) fpUFkSKDBL2s[wTD6nuyi][BGo1TlAd7S];
                    BGo1TlAd7S = BGo1TlAd7S +(651 - 650);
                }
            }
            junzhi[wTD6nuyi] = bA4VxbnNa[wTD6nuyi] / (double ) HbkeHAl5;
            {
                BGo1TlAd7S = (390 - 390);
                for (; BGo1TlAd7S < HbkeHAl5;) {
                    FZsY0KoMtGF[BGo1TlAd7S] = (junzhi[wTD6nuyi] - fpUFkSKDBL2s[wTD6nuyi][BGo1TlAd7S]) * (junzhi[wTD6nuyi] - fpUFkSKDBL2s[wTD6nuyi][BGo1TlAd7S]);
                    ak72eB63[wTD6nuyi] = ak72eB63[wTD6nuyi] + (double ) FZsY0KoMtGF[BGo1TlAd7S];
                    PWCvHDU[wTD6nuyi] = ak72eB63[wTD6nuyi] / (double ) HbkeHAl5;
                    YQpM76lT[wTD6nuyi] = sqrt (PWCvHDU[wTD6nuyi]);
                    BGo1TlAd7S = BGo1TlAd7S +(835 - 834);
                }
            }
            wTD6nuyi = (1120 - 682) - (1171 - 734);
        }
    }
    {
        wTD6nuyi = (139 - 139);
        for (; FGLRWnsePbAf > wTD6nuyi;) {
            printf ("%.5lf\n", YQpM76lT[wTD6nuyi]);
            wTD6nuyi = wTD6nuyi + (104 - 103);
        }
    }
    return (320 - 320);
}

