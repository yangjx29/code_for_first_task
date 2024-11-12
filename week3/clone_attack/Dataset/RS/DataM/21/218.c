int main () {
    int n, i, j, count = (865 - 865);
    float KTcoj3nq = (761 - 761), SxhUauHYjOXL = (588 - 588), E14yw6 = (823 - 823), oTPO13ine [(528 - 228)], BgUF54Psd3M, Ifn79r5CK [(1147 - 847)], pM2hRyv7jI;
    count = (555 - 555);
    scanf ("%d", &n);
    for (i = (269 - 269); n > i; i = i + 1) {
        scanf ("%f", &oTPO13ine[i]);
        E14yw6 += oTPO13ine[i];
    }
    KTcoj3nq = E14yw6 / n;
    SxhUauHYjOXL = fabs (oTPO13ine[(979 - 979)] - KTcoj3nq);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 429 - 429;
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
        while (n > i) {
            pM2hRyv7jI = fabs (oTPO13ine[i] - KTcoj3nq);
            i = i + 1;
            if (SxhUauHYjOXL < pM2hRyv7jI)
                SxhUauHYjOXL = pM2hRyv7jI;
        };
    }
    {
        i = 714 - 714;
        while (n > i) {
            pM2hRyv7jI = fabs (oTPO13ine[i] - KTcoj3nq);
            if (0.001 > (fabs (pM2hRyv7jI - SxhUauHYjOXL)))
                Ifn79r5CK[count++] = oTPO13ine[i];
            i++;
        };
    }
    for (j = 0; count - (944 - 943) > j; j++) {
        i = 0;
        while (count - j - (359 - 358) > i) {
            if (Ifn79r5CK[i + 1] < Ifn79r5CK[i]) {
                BgUF54Psd3M = Ifn79r5CK[i];
                Ifn79r5CK[i] = Ifn79r5CK[i + 1];
                Ifn79r5CK[i + 1] = BgUF54Psd3M;
            }
            i++;
        };
    }
    printf ("%.f", Ifn79r5CK[0]);
    if (count > 1) {
        i = 1;
        while (i < count) {
            printf (",%.f", Ifn79r5CK[i]);
            i++;
        };
    }
    return 0;
}

