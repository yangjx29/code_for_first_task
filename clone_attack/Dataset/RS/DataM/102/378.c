int main () {
    int bZTkJ1H;
    int iaKTBO;
    int n;
    int i;
    int G9Jq4fiWM;
    int k;
    bZTkJ1H = (774 - 774);
    iaKTBO = 0;
    double  CIzeiO [100];
    double  PnufiaR [100];
    double  cXqyYv [100];
    double  c7oLGcW2x48P;
    char sex [100];
    scanf ("%d", &n);
    G9Jq4fiWM = (880 - 879);
    k = 0;
    {
        i = 0;
        while (n > i) {
            scanf ("%s %lf", sex, &CIzeiO[i]);
            if (!(0 != strcmp (sex, "male"))) {
                PnufiaR[G9Jq4fiWM] = CIzeiO[i];
                G9Jq4fiWM++;
                bZTkJ1H++;
            }
            if (!(0 != strcmp (sex, "female"))) {
                cXqyYv[k] = CIzeiO[i];
                k++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                iaKTBO++;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (iaKTBO > i) {
            {
                G9Jq4fiWM = 0;
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
                while (iaKTBO - i > G9Jq4fiWM) {
                    if (cXqyYv[G9Jq4fiWM +1] > cXqyYv[G9Jq4fiWM]) {
                        c7oLGcW2x48P = cXqyYv[G9Jq4fiWM +1];
                        cXqyYv[G9Jq4fiWM +1] = cXqyYv[G9Jq4fiWM];
                        cXqyYv[G9Jq4fiWM] = c7oLGcW2x48P;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    G9Jq4fiWM++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = 1;
        while (bZTkJ1H >= i) {
            {
                G9Jq4fiWM = 1;
                while (G9Jq4fiWM <= bZTkJ1H - i) {
                    if (PnufiaR[G9Jq4fiWM] > PnufiaR[G9Jq4fiWM +1]) {
                        c7oLGcW2x48P = PnufiaR[G9Jq4fiWM +1];
                        PnufiaR[G9Jq4fiWM +1] = PnufiaR[G9Jq4fiWM];
                        PnufiaR[G9Jq4fiWM] = c7oLGcW2x48P;
                    }
                    G9Jq4fiWM++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i <= bZTkJ1H) {
            if (i == 1)
                printf ("%.2lf", PnufiaR[i]);
            else
                printf (" %.2lf", PnufiaR[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < iaKTBO) {
            printf (" %.2lf", cXqyYv[i]);
            i++;
        };
    }
    return 0;
}

