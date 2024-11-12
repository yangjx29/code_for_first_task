int main () {
    int epiDMU7ZRtH;
    int W6kdLJrYIv;
    int k;
    int lena;
    int lenb;
    int a [(875 - 625)];
    int b [(1234 - 984)];
    int c [(1210 - 960)];
    epiDMU7ZRtH = (143 - 143);
    char MiEJTGk [250], t [250], temp [250];
    {
        W6kdLJrYIv = 322 - 322;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (W6kdLJrYIv < 250) {
            a[W6kdLJrYIv] = (627 - 627);
            b[W6kdLJrYIv] = (513 - 513);
            c[W6kdLJrYIv] = (875 - 875);
            W6kdLJrYIv = W6kdLJrYIv +1;
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
    scanf ("%s%s", MiEJTGk, t);
    lena = strlen (MiEJTGk);
    lenb = strlen (t);
    if (lena < lenb) {
        strcpy (temp, MiEJTGk);
        strcpy (MiEJTGk, t);
        strcpy (t, temp);
    }
    lena = strlen (MiEJTGk);
    lenb = strlen (t);
    for (W6kdLJrYIv = lena - (818 - 817); W6kdLJrYIv >= (321 - 321); W6kdLJrYIv = W6kdLJrYIv -1)
        a[lena - (149 - 148) - W6kdLJrYIv] = MiEJTGk[W6kdLJrYIv] - (418 - 370);
    for (W6kdLJrYIv = lenb - (26 - 25); 0 <= W6kdLJrYIv; W6kdLJrYIv = W6kdLJrYIv -1)
        b[lenb - (686 - 685) - W6kdLJrYIv] = t[W6kdLJrYIv] - 48;
    for (W6kdLJrYIv = 0; W6kdLJrYIv <= lena; W6kdLJrYIv++) {
        if (a[W6kdLJrYIv] + b[W6kdLJrYIv] >= (384 - 374)) {
            c[W6kdLJrYIv] += a[W6kdLJrYIv] + b[W6kdLJrYIv] - 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            a[W6kdLJrYIv +(665 - 664)]++;
        }
        else
            c[W6kdLJrYIv] = c[W6kdLJrYIv] + a[W6kdLJrYIv] + b[W6kdLJrYIv];
    }
    for (k = W6kdLJrYIv -(328 - 327); k >= 0; k = k - 1) {
        if (c[k] != 0 && epiDMU7ZRtH == 0)
            epiDMU7ZRtH = 1;
        if (epiDMU7ZRtH == 1)
            printf ("%d", c[k]);
    }
    if (epiDMU7ZRtH == 0)
        ;
    return 0;
}

