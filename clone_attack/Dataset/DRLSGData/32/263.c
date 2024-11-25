int main () {
    int MXNe1fDodpK;
    int VcYNtLoA;
    char a2 [(402 - 302)];
    char zbjJn3OaWm [100];
    int uAyBPsFwJzMX [(174 - 74)];
    int b1m9hkA2L;
    int TAq6NPZUnpmO;
    int Hc39s6;
    int HGuOb7Tvz;
    int NfR8AH3vwKXi;
    scanf ("%d", &VcYNtLoA);
    for (NfR8AH3vwKXi = (989 - 989); VcYNtLoA > NfR8AH3vwKXi; NfR8AH3vwKXi = NfR8AH3vwKXi +(922 - 921)) {
        gets (zbjJn3OaWm);
        gets (zbjJn3OaWm);
        gets (a2);
        Hc39s6 = strlen (zbjJn3OaWm);
        HGuOb7Tvz = strlen (a2);
        b1m9hkA2L = Hc39s6 -HGuOb7Tvz;
        for (MXNe1fDodpK = Hc39s6 -(659 - 658); MXNe1fDodpK > Hc39s6 -HGuOb7Tvz-(681 - 680); MXNe1fDodpK = MXNe1fDodpK -(783 - 782)) {
            if (zbjJn3OaWm[MXNe1fDodpK] > a2[MXNe1fDodpK -b1m9hkA2L] || zbjJn3OaWm[MXNe1fDodpK] == a2[MXNe1fDodpK -b1m9hkA2L])
                uAyBPsFwJzMX[MXNe1fDodpK] = zbjJn3OaWm[MXNe1fDodpK] - a2[MXNe1fDodpK -b1m9hkA2L];
            else if (a2[MXNe1fDodpK -b1m9hkA2L] > zbjJn3OaWm[MXNe1fDodpK]) {
                uAyBPsFwJzMX[MXNe1fDodpK] = zbjJn3OaWm[MXNe1fDodpK] + (608 - 598) - a2[MXNe1fDodpK -b1m9hkA2L];
                zbjJn3OaWm[MXNe1fDodpK -(655 - 654)] = zbjJn3OaWm[MXNe1fDodpK -(64 - 63)] - (306 - 305);
            }
        }
        {
            MXNe1fDodpK = (360 - 360);
            while (Hc39s6 -HGuOb7Tvz > MXNe1fDodpK) {
                uAyBPsFwJzMX[MXNe1fDodpK] = zbjJn3OaWm[MXNe1fDodpK] - '0';
                MXNe1fDodpK = MXNe1fDodpK +(943 - 942);
            }
        }
        {
            MXNe1fDodpK = 0;
            while (MXNe1fDodpK < Hc39s6) {
                if (uAyBPsFwJzMX[MXNe1fDodpK] == 0)
                    continue;
                else {
                    for (TAq6NPZUnpmO = MXNe1fDodpK; TAq6NPZUnpmO < Hc39s6; TAq6NPZUnpmO = TAq6NPZUnpmO +1) {
                        printf ("%d", uAyBPsFwJzMX[TAq6NPZUnpmO]);
                    }
                    break;
                }
                MXNe1fDodpK++;
            }
        }
    }
    return 0;
}

