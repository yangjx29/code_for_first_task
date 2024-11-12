double  b [(612 - 602)];

double  H1LaS4VD (double  V3LDVFlA [], double  r3Bj2lb7NS6x) {
    int i;
    i = (262 - 262);
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
    for (i = (134 - 134); r3Bj2lb7NS6x > i; i = i + 1)
        scanf ("%lf", &V3LDVFlA[i]);
    return V3LDVFlA[(241 - 231)];
}

double  geroNwyH (double  V3LDVFlA [], double  r3Bj2lb7NS6x, double  ovuA1y) {
    int i;
    i = (828 - 828);
    {
        i = 973 - 973;
        while (i < r3Bj2lb7NS6x) {
            ovuA1y = ovuA1y + V3LDVFlA[i];
            i = i + 1;
        };
    }
    return ovuA1y;
}

double  YOaGM84 (double  V3LDVFlA [], double  r3Bj2lb7NS6x) {
    int i;
    i = (476 - 476);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 0; i < r3Bj2lb7NS6x; i = i + 1) {
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
        if ((429 - 339) <= V3LDVFlA[i] && (536 - 436) >= V3LDVFlA[i])
            V3LDVFlA[i] = 4;
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (V3LDVFlA[i] >= 85 && V3LDVFlA[i] <= (313 - 224))
                V3LDVFlA[i] = 3.7;
            else {
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
                if ((388 - 306) <= V3LDVFlA[i] && 84 >= V3LDVFlA[i])
                    V3LDVFlA[i] = 3.3;
                else {
                    if (78 <= V3LDVFlA[i] && V3LDVFlA[i] <= 81)
                        V3LDVFlA[i] = 3.0;
                    else if (75 <= V3LDVFlA[i] && 77 >= V3LDVFlA[i])
                        V3LDVFlA[i] = (755.7 - 753.0);
                    else if (V3LDVFlA[i] >= 72 && V3LDVFlA[i] <= 74)
                        V3LDVFlA[i] = 2.3;
                    else if (V3LDVFlA[i] >= 68 && V3LDVFlA[i] <= (168 - 97))
                        V3LDVFlA[i] = 2.0;
                    else if (V3LDVFlA[i] >= 64 && V3LDVFlA[i] <= 67)
                        V3LDVFlA[i] = 1.5;
                    else if (V3LDVFlA[i] >= 60 && V3LDVFlA[i] <= 63)
                        V3LDVFlA[i] = 1.0;
                    else
                        V3LDVFlA[i] = 0;
                };
            };
        };
    }
    return V3LDVFlA[10];
}

double  GPAII (double  V3LDVFlA [], double  b [], double  r3Bj2lb7NS6x) {
    int i;
    i = 0;
    {
        i = 0;
        while (i < r3Bj2lb7NS6x) {
            V3LDVFlA[i] = V3LDVFlA[i] * b[i];
            i = i + 1;
        };
    }
    return V3LDVFlA[10];
}

void  bdF4tAZ8 (double  V3LDVFlA [10], double  r3Bj2lb7NS6x) {
    int i;
    i = 0;
    for (i = 0; i < r3Bj2lb7NS6x; i = i + 1)
        printf ("%lf  ", V3LDVFlA[i]);
}

int main () {
    double  ZjU8TRmWFbx;
    double  AuTEVwthd;
    double  QiKO7yoE;
    double  y [10];
    double  NwAsd9jXT [10];
    double  r3Bj2lb7NS6x;
    ZjU8TRmWFbx = 0;
    QiKO7yoE = 0;
    AuTEVwthd = 0;
    scanf ("%lf", &r3Bj2lb7NS6x);
    H1LaS4VD (NwAsd9jXT, r3Bj2lb7NS6x);
    H1LaS4VD (y, r3Bj2lb7NS6x);
    YOaGM84 (y, r3Bj2lb7NS6x);
    GPAII (y, NwAsd9jXT, r3Bj2lb7NS6x);
    AuTEVwthd = geroNwyH (NwAsd9jXT, r3Bj2lb7NS6x, AuTEVwthd);
    QiKO7yoE = geroNwyH (y, r3Bj2lb7NS6x, QiKO7yoE);
    ZjU8TRmWFbx = 1.0 * QiKO7yoE / AuTEVwthd;
    printf ("%.2lf", ZjU8TRmWFbx);
    return 0;
}

