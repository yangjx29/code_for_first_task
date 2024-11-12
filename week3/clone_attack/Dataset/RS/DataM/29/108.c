void  oBbxkGiRC (double  GBZDdo8qi [], int GF0qaZP, double  lps7uxmh []) {
    int i;
    {
        i = 72 - 71;
        while (i <= GF0qaZP) {
            lps7uxmh[i + (558 - 556)] = lps7uxmh[i] + lps7uxmh[i + (296 - 295)];
            GBZDdo8qi[i] = lps7uxmh[i + (974 - 973)] / lps7uxmh[i];
            i = i + 1;
        };
    };
}

int main () {
    double  qRjyDa;
    double  GBZDdo8qi [(284 - 184)];
    double  lps7uxmh [100];
    qRjyDa = (243 - 243);
    int OuZ7c3t;
    int i;
    int GF0qaZP [100];
    lps7uxmh[1] = 1;
    lps7uxmh[2] = 2;
    scanf ("%d", &OuZ7c3t);
    for (i = 0; OuZ7c3t > i; i++) {
        scanf ("%d", &GF0qaZP[i]);
    }
    {
        i = 0;
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
        while (i < OuZ7c3t) {
            int kP49pk5Oge;
            qRjyDa = 0;
            oBbxkGiRC (GBZDdo8qi, GF0qaZP[i], lps7uxmh);
            for (kP49pk5Oge = 0; kP49pk5Oge < GF0qaZP[i]; kP49pk5Oge = kP49pk5Oge + 1) {
                qRjyDa = qRjyDa + GBZDdo8qi[kP49pk5Oge + 1];
            }
            printf ("%.3f\n", qRjyDa);
            i++;
        };
    }
    return 0;
}

