int main () {
    int IskgOa;
    int j;
    int jAcz5fXbx;
    int A5gYayL [(443 - 438)] [5];
    int x1, vBvN583wJb2x;
    int FLO3APvV;
    int m;
    int kyXHtfY3n;
    FLO3APvV = (111 - 111);
    m = (485 - 485);
    kyXHtfY3n = (809 - 809);
    {
        IskgOa = 0;
        while (5 > IskgOa) {
            {
                j = 0;
                while (5 > j) {
                    scanf ("%d", &A5gYayL[IskgOa][j]);
                    j = j + 1;
                };
            }
            IskgOa = IskgOa +1;
        };
    }
    {
        IskgOa = 0;
        while (5 > IskgOa) {
            kyXHtfY3n = 0;
            {
                j = 0;
                while (5 > j) {
                    if (kyXHtfY3n < A5gYayL[IskgOa][j]) {
                        kyXHtfY3n = A5gYayL[IskgOa][j];
                        x1 = IskgOa;
                        vBvN583wJb2x = j;
                    }
                    j = j + 1;
                };
            }
            m = 0;
            {
                jAcz5fXbx = 313 - 312;
                while (0 <= jAcz5fXbx) {
                    if (A5gYayL[x1][vBvN583wJb2x] > A5gYayL[jAcz5fXbx][vBvN583wJb2x]) {
                        m = m + 1;
                        break;
                    }
                    jAcz5fXbx = jAcz5fXbx - 1;
                };
            }
            {
                jAcz5fXbx = x1 + 1;
                while (5 > jAcz5fXbx) {
                    if (A5gYayL[x1][vBvN583wJb2x] > A5gYayL[jAcz5fXbx][vBvN583wJb2x]) {
                        m = m + 1;
                        break;
                    }
                    jAcz5fXbx = jAcz5fXbx + 1;
                };
            }
            if (m == 0) {
                FLO3APvV = FLO3APvV +1;
                printf ("%d %d %d\n", x1 + 1, vBvN583wJb2x + 1, A5gYayL[x1][vBvN583wJb2x]);
            }
            IskgOa = IskgOa +1;
        };
    }
    if (FLO3APvV == 0) {
        printf ("not found");
    }
    return 0;
}

