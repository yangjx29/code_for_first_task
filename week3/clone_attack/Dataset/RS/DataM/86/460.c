int main () {
    int t;
    int i;
    int n;
    int m;
    int a;
    int sz [1000];
    scanf ("%d", &n);
    {
        a = 1;
        while (n >= a) {
            scanf ("%d", &m);
            {
                i = 0;
                while (m > i) {
                    scanf ("%d", &sz[i]);
                    i++;
                };
            }
            if (!(0 != m))
                t = 60;
            else {
                i = 0;
                while (i < m) {
                    if (sz[i] + 3 * i > 60) {
                        t = 60 - 3 * i;
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
                        break;
                    }
                    if ((sz[i] + 3 * i <= 60) && (sz[i] + 3 * i >= 57)) {
                        t = sz[i];
                        break;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if ((sz[i] + 3 * i < 60) && (i == m - 1)) {
                        t = 60 - 3 * (i + 1);
                        break;
                    }
                    i++;
                };
            }
            a = a + 1;
            printf ("%d\n", t);
        };
    }
    return 0;
}

