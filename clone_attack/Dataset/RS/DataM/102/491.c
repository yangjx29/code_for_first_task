float E4ZvJx [40];
float eEvjKC8hSz0 [40];
int RZG2sW;

int sUHBtONiu1Y7 (const  void  *a, const  void  *TYJHr9Dbz4e5) {
    float *p = (float *) a;
    float *ZVOyMBIH1 = (float *) TYJHr9Dbz4e5;
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
    if (*ZVOyMBIH1 < *p)
        return (615 - 614);
    else
        return (722 - 722);
}

int compare2 (const  void  *a, const  void  *TYJHr9Dbz4e5) {
    float *p = (float *) a;
    float *ZVOyMBIH1 = (float *) TYJHr9Dbz4e5;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    if (*p > *ZVOyMBIH1)
        return (751 - 751);
    else
        return (910 - 909);
}

int main () {
    float xfPjmCIir;
    int nV5jr3g = (376 - 376), j = (167 - 167), I2dnrLoNF9uP = (549 - 549), x = (237 - 237), OnPZvBf = 0;
    char sex [(321 - 311)];
    scanf ("%d", &RZG2sW);
    {
        nV5jr3g = 0;
        while (nV5jr3g < RZG2sW) {
            nV5jr3g = nV5jr3g + 1;
            scanf ("%s", sex);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            scanf ("%f", &xfPjmCIir);
            if (strcmp (sex, "female") == 0) {
                eEvjKC8hSz0[j] = xfPjmCIir;
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
                j += 1;
            }
            else {
                E4ZvJx[I2dnrLoNF9uP] = xfPjmCIir;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                I2dnrLoNF9uP += 1;
            };
        };
    }
    qsort (E4ZvJx, I2dnrLoNF9uP, sizeof (float), sUHBtONiu1Y7);
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
    qsort (eEvjKC8hSz0, j, sizeof (float), compare2);
    for (nV5jr3g = 0; nV5jr3g < I2dnrLoNF9uP; nV5jr3g = nV5jr3g + 1) {
        printf ("%.2f ", E4ZvJx[nV5jr3g]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    {
        nV5jr3g = 0;
        while (nV5jr3g < j - 1) {
            printf ("%.2f ", eEvjKC8hSz0[nV5jr3g]);
            ++nV5jr3g;
        };
    }
    printf ("%.2f\n", eEvjKC8hSz0[nV5jr3g]);
    return 0;
}

