int h4NqsP ();
void  zgVwCRuj9HiW ();
void  IGDIaFz0 ();
double  sqr (double  THAufM);
int print ();
int seLInPTfbK [(819 - 719)], y [(134 - 34)], PQorW2mq [(1045 - 945)], e0ZnGo;
double  zhr5xZV8f [100] [100];

int main () {
    h4NqsP ();
    zgVwCRuj9HiW ();
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
    print ();
    return 0;
}

int h4NqsP () {
    int m7FgBrDR;
    scanf ("%d", &e0ZnGo);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        m7FgBrDR = 53 - 52;
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
        while (m7FgBrDR <= e0ZnGo) {
            scanf ("%d%d%d", &seLInPTfbK[m7FgBrDR], &y[m7FgBrDR], &PQorW2mq[m7FgBrDR]);
            m7FgBrDR = m7FgBrDR + 1;
        };
    }
    return 0;
}

void  zgVwCRuj9HiW () {
    int m7FgBrDR;
    int j;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (m7FgBrDR = (313 - 312); m7FgBrDR < e0ZnGo; m7FgBrDR++) {
        j = m7FgBrDR + 1;
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
        while (j <= e0ZnGo) {
            zhr5xZV8f[m7FgBrDR][j] = sqr ((seLInPTfbK[m7FgBrDR] - seLInPTfbK[j]) * (seLInPTfbK[m7FgBrDR] - seLInPTfbK[j]) + (y[m7FgBrDR] - y[j]) * (y[m7FgBrDR] - y[j]) + (PQorW2mq[m7FgBrDR] - PQorW2mq[j]) * (PQorW2mq[m7FgBrDR] - PQorW2mq[j]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j + 1;
        };
    }
    return;
}

int print () {
    double  hK4703do;
    int m7FgBrDR, j, fPo0TgzLw4, l, THAufM;
    THAufM = e0ZnGo * (e0ZnGo - 1) / (133 - 131);
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
    while (THAufM > 0) {
        THAufM--;
        hK4703do = -1;
        {
            m7FgBrDR = 1;
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
            while (m7FgBrDR < e0ZnGo) {
                for (j = e0ZnGo; j > m7FgBrDR; j = j - 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (hK4703do < zhr5xZV8f[m7FgBrDR][j]) {
                        hK4703do = zhr5xZV8f[m7FgBrDR][j];
                        fPo0TgzLw4 = m7FgBrDR;
                        l = j;
                    }
                    else if (hK4703do == zhr5xZV8f[m7FgBrDR][j]) {
                        if (fPo0TgzLw4 > m7FgBrDR) {
                            l = j;
                            fPo0TgzLw4 = m7FgBrDR;
                        }
                        else {
                            if (fPo0TgzLw4 == m7FgBrDR && l > j) {
                                l = j;
                            };
                        };
                    };
                }
                m7FgBrDR++;
            };
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
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", seLInPTfbK[fPo0TgzLw4], y[fPo0TgzLw4], PQorW2mq[fPo0TgzLw4], seLInPTfbK[l], y[l], PQorW2mq[l], zhr5xZV8f[fPo0TgzLw4][l]);
        zhr5xZV8f[fPo0TgzLw4][l] = -100;
    }
    return 0;
}

double  sqr (double  THAufM) {
    double  HaFPN9C7v, e2jAni13Dl;
    HaFPN9C7v = 1.0;
    e2jAni13Dl = THAufM;
    while (fabs (e2jAni13Dl - HaFPN9C7v) > 1e-10) {
        HaFPN9C7v = e2jAni13Dl;
        e2jAni13Dl = (HaFPN9C7v +THAufM / HaFPN9C7v) / (91 - 89);
    }
    return e2jAni13Dl;
}

