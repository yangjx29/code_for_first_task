int main (int zWyEjihlT4, char *xvyFwVb []) {
    double  c86H9Du;
    double  HM94DwngXeH;
    double  c;
    double  QTRfklisEKru;
    double  ktiZuYwN5;
    double  RaTXvMKJxRO;
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
    double  l8lwqL;
    double  jHZA3SJT0qgh;
    double  OjIbBoZGTi0S;
    scanf ("%lf", &jHZA3SJT0qgh);
    for (OjIbBoZGTi0S = 1; OjIbBoZGTi0S <= jHZA3SJT0qgh; OjIbBoZGTi0S = OjIbBoZGTi0S +1) {
        scanf ("%lf%lf%lf", &c86H9Du, &HM94DwngXeH, &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        QTRfklisEKru = HM94DwngXeH *HM94DwngXeH-4 * c86H9Du * c;
        if (QTRfklisEKru > (355 - 355)) {
            p = -HM94DwngXeH / (2 * c86H9Du);
            l8lwqL = sqrt (QTRfklisEKru) / (2 * c86H9Du);
            ktiZuYwN5 = p + l8lwqL;
            RaTXvMKJxRO = p - l8lwqL;
            printf ("x1=%.5lf;x2=%.5lf\n", ktiZuYwN5, RaTXvMKJxRO);
        }
        else if (QTRfklisEKru == 0) {
            p = -HM94DwngXeH / (2 * c86H9Du);
            ktiZuYwN5 = p;
            printf ("x1=x2=%.5lf\n", ktiZuYwN5);
        }
        else if (QTRfklisEKru < 0, HM94DwngXeH / (2 * c86H9Du) == 0) {
            p = HM94DwngXeH / (2 * c86H9Du);
            l8lwqL = sqrt (-QTRfklisEKru) / (2 * c86H9Du);
            ktiZuYwN5 = p + l8lwqL;
            RaTXvMKJxRO = p - l8lwqL;
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p, l8lwqL, p, l8lwqL);
        }
        else {
            p = -HM94DwngXeH / (2 * c86H9Du);
            l8lwqL = sqrt (-QTRfklisEKru) / (2 * c86H9Du);
            ktiZuYwN5 = p + l8lwqL;
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
            RaTXvMKJxRO = p - l8lwqL;
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p, l8lwqL, p, l8lwqL);
        };
    }
    return 0;
}

