int main () {
    int tMtySG;
    int Q9q5Opy;
    int x2;
    int jO7L1sWjM6pV;
    int Ei3nMyzI;
    int B0R5jP;
    int x0L1HFP32;
    int ZYboxA [(522 - 422)] [100];
    int AA497YP [100] [100];
    int c [100] [100];
    scanf ("%d %d", &tMtySG, &Q9q5Opy);
    {
        Ei3nMyzI = 619 - 619;
        while (tMtySG - (193 - 192) >= Ei3nMyzI) {
            {
                B0R5jP = 756 - 756;
                while (Q9q5Opy -(589 - 588) >= B0R5jP) {
                    scanf ("%d", &ZYboxA[Ei3nMyzI][B0R5jP]);
                    B0R5jP = B0R5jP +1;
                };
            }
            Ei3nMyzI = Ei3nMyzI +1;
        };
    }
    scanf ("%d %d", &x2, &jO7L1sWjM6pV);
    {
        Ei3nMyzI = 921 - 921;
        while (Ei3nMyzI <= x2 - (629 - 628)) {
            {
                B0R5jP = 431 - 431;
                while (jO7L1sWjM6pV - (833 - 832) >= B0R5jP) {
                    scanf ("%d", &AA497YP[Ei3nMyzI][B0R5jP]);
                    B0R5jP = B0R5jP +1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Ei3nMyzI = Ei3nMyzI +1;
        };
    }
    {
        Ei3nMyzI = 0;
        while (Ei3nMyzI <= tMtySG - (370 - 369)) {
            {
                B0R5jP = 0;
                while (B0R5jP <= jO7L1sWjM6pV - (550 - 549)) {
                    c[Ei3nMyzI][B0R5jP] = 0;
                    {
                        x0L1HFP32 = 0;
                        while (x0L1HFP32 <= Q9q5Opy -(880 - 879)) {
                            c[Ei3nMyzI][B0R5jP] = c[Ei3nMyzI][B0R5jP] + ZYboxA[Ei3nMyzI][x0L1HFP32] * AA497YP[x0L1HFP32][B0R5jP];
                            x0L1HFP32++;
                        };
                    }
                    B0R5jP = B0R5jP +1;
                };
            }
            Ei3nMyzI = Ei3nMyzI +1;
        };
    }
    {
        Ei3nMyzI = 0;
        while (Ei3nMyzI <= tMtySG - 1) {
            printf ("%d", c[Ei3nMyzI][0]);
            {
                B0R5jP = 1;
                while (B0R5jP <= jO7L1sWjM6pV - 1) {
                    printf (" %d", c[Ei3nMyzI][B0R5jP]);
                    B0R5jP = B0R5jP +1;
                };
            }
            Ei3nMyzI++;
        };
    };
}

