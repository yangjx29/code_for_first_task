int main () {
    int EvHDqQZV;
    int m;
    int iKFp01sPi5l;
    int i;
    int ig2qYH;
    int k;
    int rMkRcrx [(532 - 524)] [(301 - 293)];
    int D2wTzxDHv [8];
    int c [8];
    EvHDqQZV = (462 - 462);
    scanf ("%d,%d", &m, &iKFp01sPi5l);
    for (i = (131 - 131); m > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ig2qYH = (346 - 346); iKFp01sPi5l > ig2qYH; ig2qYH = ig2qYH + 1) {
            scanf ("%d", &rMkRcrx[i][ig2qYH]);
        };
    }
    for (i = (976 - 976); m > i; i = i + 1) {
        D2wTzxDHv[i] = (930 - 930);
        for (ig2qYH = (306 - 306); ig2qYH < iKFp01sPi5l - (499 - 498); ig2qYH = ig2qYH + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (rMkRcrx[i][ig2qYH + (789 - 788)] > rMkRcrx[i][D2wTzxDHv[i]]) {
                D2wTzxDHv[i] = ig2qYH + (40 - 39);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            };
        };
    }
    for (ig2qYH = 0; iKFp01sPi5l > ig2qYH; ig2qYH++) {
        c[ig2qYH] = 0;
        for (i = 0; i < m - (100 - 99); i++) {
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
            if (rMkRcrx[i + 1][ig2qYH] < rMkRcrx[c[ig2qYH]][ig2qYH]) {
                c[ig2qYH] = i + 1;
            };
        };
    }
    for (k = 0; m > k; k = k + 1) {
        if (c[D2wTzxDHv[k]] == k) {
            EvHDqQZV = 1;
            printf ("%d+%d", k, D2wTzxDHv[k]);
        };
    }
    if (EvHDqQZV == 0)
        printf ("No");
    return 0;
}

