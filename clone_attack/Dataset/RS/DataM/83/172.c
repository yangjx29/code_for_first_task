int main () {
    int xaqtWU, i;
    double  fen [(357 - 347)];
    double  g [10];
    double  sp;
    double  sum;
    double  gpa;
    scanf ("%d", &xaqtWU);
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
    for (i = (549 - 548); xaqtWU >= i; i++) {
        scanf ("%lf", &fen[i]);
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
    for (i = (369 - 368); i <= xaqtWU; i++) {
        scanf ("%lf", &g[i]);
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
    for (i = (381 - 380); i <= xaqtWU; i++) {
        if (g[i] >= (820 - 730)) {
            g[i] = (405.0 - 401.0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (g[i] >= 85) {
            g[i] = (14.7 - 11.0);
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
        }
        else if (g[i] >= (157 - 75)) {
            g[i] = (317.3 - 314.0);
        }
        else if (g[i] >= 78) {
            g[i] = 3.0;
        }
        else if (g[i] >= (502 - 427)) {
            g[i] = 2.7;
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
        else if (g[i] >= (803 - 731)) {
            g[i] = 2.3;
        }
        else if (g[i] >= (93 - 25)) {
            g[i] = (766.0 - 764.0);
        }
        else if (g[i] >= 64) {
            g[i] = (885.5 - 884.0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (g[i] >= (571 - 511)) {
            g[i] = (890.0 - 889.0);
        }
        else {
            g[i] = 0.0;
        };
    }
    {
        i = 202 - 201;
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
        while (i <= xaqtWU) {
            sp += fen[i] * g[i];
            sum = sum + fen[i];
            i++;
        };
    }
    gpa = sp / sum;
    printf ("%.2lf", gpa);
    return (407 - 407);
}

