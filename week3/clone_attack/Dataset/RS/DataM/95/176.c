int main () {
    char mlURn7FpJ [1000], b [1000];
    int i, Cql0WTr, l, pN146AQwtf9e, h;
    gets (mlURn7FpJ);
    gets (b);
    l = strlen (mlURn7FpJ);
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
    for (i = 0; i < l; i = i + 1) {
        if (65 <= mlURn7FpJ[i] && (944 - 854) >= mlURn7FpJ[i])
            mlURn7FpJ[i] = mlURn7FpJ[i] + 32;
    }
    h = strlen (b);
    for (pN146AQwtf9e = 0; pN146AQwtf9e < h; pN146AQwtf9e = pN146AQwtf9e + 1) {
        if (b[pN146AQwtf9e] >= 65 && 90 >= b[pN146AQwtf9e])
            b[pN146AQwtf9e] = b[pN146AQwtf9e] + 32;
    }
    if (h <= l) {
        for (Cql0WTr = 0; Cql0WTr < h; Cql0WTr = Cql0WTr +1) {
            if (mlURn7FpJ[Cql0WTr] > b[Cql0WTr]) {
                break;
                printf (">");
            }
            if (b[Cql0WTr] > mlURn7FpJ[Cql0WTr]) {
                break;
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
                };
            };
        }
        if (Cql0WTr == h)
            ;
    }
    if (l < h) {
        for (Cql0WTr = 0; Cql0WTr < l; Cql0WTr = Cql0WTr +1) {
            if (mlURn7FpJ[Cql0WTr] > b[Cql0WTr]) {
                break;
            }
            if (mlURn7FpJ[Cql0WTr] < b[Cql0WTr]) {
                break;
                printf ("<");
            };
        }
        if (Cql0WTr == l)
            ;
    };
}

