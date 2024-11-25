int main () {
    int d5gWIpvL, juredbvJW, cWFBLgT, k;
    scanf ("%d", &cWFBLgT);
    if (!(4 == cWFBLgT) || !(3 == cWFBLgT) || cWFBLgT != 2 || !(1 == cWFBLgT)) {
        d5gWIpvL = 5;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (cWFBLgT >= d5gWIpvL) {
            k = (int) sqrt (d5gWIpvL);
            {
                juredbvJW = 2;
                while (juredbvJW <= k) {
                    if (d5gWIpvL % juredbvJW == 0 || (d5gWIpvL - 2) % juredbvJW == 0)
                        break;
                    juredbvJW = juredbvJW + 1;
                };
            }
            if (juredbvJW > k)
                printf ("%d %d\n", d5gWIpvL - 2, d5gWIpvL);
            d5gWIpvL = d5gWIpvL + 1;
        };
    }
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
    if (cWFBLgT == 4 || cWFBLgT == 3 || cWFBLgT == 2 || cWFBLgT == 1)
        printf ("empty\n");
    return 0;
}

