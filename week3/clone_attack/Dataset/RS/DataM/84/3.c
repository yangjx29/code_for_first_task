int main () {
    int i;
    int m;
    int n;
    int hmtXJMz8ACe;
    int bF2LgT [100];
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
    scanf ("%d", &n);
    {
        i = 0;
        while (n - 1 >= i) {
            scanf ("%d", &bF2LgT[i]);
            if (i == 1) {
                if (bF2LgT[1] < bF2LgT[0]) {
                    m = bF2LgT[0];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    hmtXJMz8ACe = bF2LgT[1];
                }
                else {
                    if (bF2LgT[0] < bF2LgT[1]) {
                        m = bF2LgT[1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        hmtXJMz8ACe = bF2LgT[0];
                    };
                };
            }
            if (i > 1)
                if (bF2LgT[i] > m) {
                    hmtXJMz8ACe = m;
                    m = bF2LgT[i];
                }
                else {
                    if ((bF2LgT[i] > hmtXJMz8ACe) && (bF2LgT[i] < m) == 1) {
                        hmtXJMz8ACe = bF2LgT[i];
                        m = m;
                    };
                }
            i++;
        };
    }
    printf ("%d\n", m);
    printf ("%d\n", hmtXJMz8ACe);
    return 0;
}

