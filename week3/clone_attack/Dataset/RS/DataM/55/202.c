void  main () {
    long  m;
    long  OFnDsezt;
    char c;
    char CgeAlj [100];
    char gGYk7Wqpzj [100];
    int nItaYu7MLrk;
    int b;
    int d6FDac;
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
    int sP4pK62;
    int q;
    scanf ("%d%s%d", &nItaYu7MLrk, CgeAlj, &b);
    {
        d6FDac = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((c = CgeAlj[d6FDac]) != '\0') {
            if (c >= 'A' && 'Z' >= c)
                q = c - 55;
            else {
                if ('a' <= c && c <= 'z')
                    q = c - 87;
                else
                    q = c - 48;
            }
            if (d6FDac != 0)
                m = nItaYu7MLrk * m + q;
            else
                m = q;
            d6FDac = d6FDac + 1;
        };
    }
    {
        d6FDac = 0;
        while ((OFnDsezt = m / b) != 0) {
            sP4pK62 = m % b;
            m = m / b;
            if (sP4pK62 < (902 - 892))
                gGYk7Wqpzj[d6FDac] = sP4pK62 + 48;
            else
                gGYk7Wqpzj[d6FDac] = sP4pK62 + 55;
            d6FDac = d6FDac + 1;
        };
    }
    sP4pK62 = m % b;
    if (sP4pK62 < 10)
        gGYk7Wqpzj[d6FDac] = sP4pK62 + 48;
    else
        gGYk7Wqpzj[d6FDac] = sP4pK62 + 55;
    for (; d6FDac >= 0; d6FDac = d6FDac - 1)
        printf ("%c", gGYk7Wqpzj[d6FDac]);
}

