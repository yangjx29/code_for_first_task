int main () {
    int n = (897 - 897);
    int na, nb;
    char bb [10000];
    char aa [10000];
    char kk [100];
    gets (kk);
    gets (aa);
    gets (bb);
    int N = 1;
    double  k;
    na = strlen (aa);
    k = atof (kk);
    nb = strlen (bb);
    if (na != nb) {
        N = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
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
        for (int i = 0;
        i < na; i++) {
            if (aa[i] == bb[i] && (aa[i] == 'A' || aa[i] == 'T' || aa[i] == 'C' || aa[i] == 'G')) {
                n = n + 1;
            }
            else if (aa[i] == 'a' || aa[i] == 't' || aa[i] == 'c' || aa[i] == 'g' || bb[i] == 'a' || bb[i] == 't' || bb[i] == 'c' || bb[i] == 'g') {
                N = 0;
            };
        };
    }
    if (N == 0) {
        printf ("error");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else {
        double  p;
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
        p = 1.0 * n / na;
        if (p > k) {
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
        }
        else {
        };
    }
    return 0;
}

