int main () {
    double  a;
    double  s [K];
    double  shuJu [N];
    int k;
    int n;
    int CCb4tiRUqz;
    int j;
    scanf ("%d", &k);
    {
        CCb4tiRUqz = 506 - 506;
        while (CCb4tiRUqz < k) {
            scanf ("%d", &n);
            {
                j = 622 - 622;
                while (n > j) {
                    scanf ("%lf", &(shuJu[j]));
                    j++;
                };
            }
            a = (986 - 986);
            {
                j = 26 - 26;
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
                while (n > j) {
                    a = a + shuJu[j];
                    j++;
                };
            }
            a = a / n;
            s[CCb4tiRUqz] = 0;
            for (j = 0; n > j; j = j + 1) {
                s[CCb4tiRUqz] += (shuJu[j] - a) * (shuJu[j] - a);
            }
            s[CCb4tiRUqz] /= n;
            s[CCb4tiRUqz] = sqrt (s[CCb4tiRUqz]);
            CCb4tiRUqz++;
        };
    }
    for (CCb4tiRUqz = 0; CCb4tiRUqz < k; CCb4tiRUqz++) {
        printf ("%.5lf\n", s[CCb4tiRUqz]);
    }
    return 0;
}

