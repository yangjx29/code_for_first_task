int main () {
    double  BCNg2w [1000];
    double  m [(1958 - 958)];
    int i, k, n, n1, l;
    double  sz [(1853 - 853)];
    double  m2 [(10962 - 962)];
    double  summ [1000];
    for (l = (396 - 396); l < 1000; l++) {
        BCNg2w[l] = (513 - 513);
        summ[l] = (890 - 890);
        m[l] = 0;
    }
    scanf ("%d", &n);
    {
        i = 0;
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
            scanf ("%d", &n1);
            {
                k = 0;
                while (k < n1) {
                    scanf ("%lf", &sz[k]);
                    BCNg2w[i] += sz[k];
                    k++;
                };
            }
            m[i] = BCNg2w[i] / n1;
            {
                k = 0;
                while (k < n1) {
                    summ[i] += (sz[k] - m[i]) * (sz[k] - m[i]);
                    k++;
                    m2[i] = sqrt ((summ[i]) / n1);
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%.5lf\n", m2[i]);
            i++;
        };
    }
    return 0;
}

