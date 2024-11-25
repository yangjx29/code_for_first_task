int main () {
    char iAlS9rB [(656 - 156)], a [500];
    double  grgNaPR, X0tfEm;
    int hjWEV3zBM, L7IsG4FR, FC8uBSHl1s0J = (766 - 766), Uj9gWuD4pKU1, uYSwIrRO = 0;
    scanf ("%lf", &grgNaPR);
    scanf ("%s %s", iAlS9rB, a);
    hjWEV3zBM = strlen (iAlS9rB);
    L7IsG4FR = strlen (a);
    if (!(hjWEV3zBM == L7IsG4FR))
        printf ("error");
    else {
        {
            Uj9gWuD4pKU1 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (hjWEV3zBM > Uj9gWuD4pKU1) {
                if (!('T' == iAlS9rB[Uj9gWuD4pKU1]) && !('A' == iAlS9rB[Uj9gWuD4pKU1]) && !('C' == iAlS9rB[Uj9gWuD4pKU1]) && !('G' == iAlS9rB[Uj9gWuD4pKU1]) && !('T' == a[Uj9gWuD4pKU1]) && a[Uj9gWuD4pKU1] != 'A' && a[Uj9gWuD4pKU1] != 'G' && a[Uj9gWuD4pKU1] != 'C') {
                    uYSwIrRO = 1;
                    break;
                }
                if (iAlS9rB[Uj9gWuD4pKU1] == a[Uj9gWuD4pKU1])
                    FC8uBSHl1s0J = FC8uBSHl1s0J +1;
                Uj9gWuD4pKU1++;
            };
        }
        X0tfEm = 1.0 * FC8uBSHl1s0J / hjWEV3zBM;
        if (uYSwIrRO == 0) {
            if (X0tfEm >= grgNaPR)
                ;
            else
                ;
        };
    }
    return 0;
}

