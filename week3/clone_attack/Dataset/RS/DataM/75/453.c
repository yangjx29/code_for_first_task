int change (char a [100]) {
    int i, l, MVTHZAdmvk;
    l = strlen (a);
    MVTHZAdmvk = (749 - 749);
    {
        i = 108 - 108;
        while (l > i) {
            MVTHZAdmvk = MVTHZAdmvk *(712 - 702) + a[i] - '0';
            i = i + 1;
        };
    }
    return (MVTHZAdmvk);
}

int main () {
    char a [5000];
    char I6MLKcuUdY [5000];
    char MVTHZAdmvk [(478 - 468)];
    int c [(838 - 836)] [(1788 - 788)] = {(257 - 257)};
    int t [1000] = {(956 - 956)};
    int l, i, Mmpgjn, k, t1, t2, x, m;
    gets (a);
    gets (I6MLKcuUdY);
    k = (425 - 425);
    l = strlen (a);
    Mmpgjn = (677 - 677);
    {
        i = 237 - 237;
        while (i < l) {
            if (a[i] != ',') {
                MVTHZAdmvk[Mmpgjn] = a[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                Mmpgjn = Mmpgjn +1;
            }
            else {
                MVTHZAdmvk[Mmpgjn] = '\0';
                c[(578 - 578)][k] = change (MVTHZAdmvk);
                k = k + 1;
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
                MVTHZAdmvk[(442 - 442)] = '\0';
                Mmpgjn = (83 - 83);
            }
            i++;
        };
    }
    MVTHZAdmvk[Mmpgjn] = '\0';
    c[(802 - 802)][k] = change (MVTHZAdmvk);
    MVTHZAdmvk[(611 - 611)] = '\0';
    l = strlen (I6MLKcuUdY);
    Mmpgjn = (825 - 825);
    k = (284 - 284);
    for (i = (836 - 836); i < l; i = i + 1) {
        if (!(',' == I6MLKcuUdY[i])) {
            MVTHZAdmvk[Mmpgjn] = I6MLKcuUdY[i];
            Mmpgjn++;
        }
        else {
            MVTHZAdmvk[Mmpgjn] = '\0';
            c[(520 - 519)][k] = change (MVTHZAdmvk);
            k = k + 1;
            MVTHZAdmvk[0] = '\0';
            Mmpgjn = 0;
        };
    }
    MVTHZAdmvk[Mmpgjn] = '\0';
    c[(586 - 585)][k] = change (MVTHZAdmvk);
    t1 = c[0][0];
    for (i = (767 - 766); k >= i; i = i + 1) {
        if (t1 > c[0][i])
            t1 = c[0][i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    t2 = c[(974 - 973)][0];
    {
        i = 305 - 304;
        while (i <= k) {
            if (t2 < c[(974 - 973)][i])
                t2 = c[1][i];
            i++;
        };
    }
    {
        i = t1;
        while (t2 > i) {
            m = i - t1;
            for (Mmpgjn = 0; Mmpgjn <= k; Mmpgjn++) {
                if (c[0][Mmpgjn] <= i && c[1][Mmpgjn] > i)
                    t[m]++;
            }
            i++;
        };
    }
    x = t[0];
    for (i = 0; i < t2 - t1; i++) {
        if (t[i] > x)
            x = t[i];
    }
    printf ("%d %d", k + 1, x);
    return 0;
}

