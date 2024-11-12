double  cLZHNym2GXIP (double  P9jsZW2o, double  iIbsyqNUi, double  p3QIkzWHMT, double  odsMUF) {
    return sqrt ((P9jsZW2o -p3QIkzWHMT) * (P9jsZW2o -p3QIkzWHMT) + (iIbsyqNUi - odsMUF) * (iIbsyqNUi - odsMUF));
}

int main () {
    double  XL0Ay6 [100];
    double  nDhyVsX8F [100];
    double  MlI4rz;
    int eBDGwRQu, IC1QgudHVB, WUtg1QSnYXqG;
    scanf ("%d", &eBDGwRQu);
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
        IC1QgudHVB = 1;
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
        while (eBDGwRQu >= IC1QgudHVB) {
            scanf ("%lf %lf", &XL0Ay6[IC1QgudHVB], &nDhyVsX8F[IC1QgudHVB]);
            IC1QgudHVB++;
        };
    }
    MlI4rz = 0.0;
    {
        IC1QgudHVB = 1;
        while (eBDGwRQu >= IC1QgudHVB) {
            {
                WUtg1QSnYXqG = IC1QgudHVB +1;
                while (WUtg1QSnYXqG <= eBDGwRQu) {
                    if (cLZHNym2GXIP (XL0Ay6[IC1QgudHVB], nDhyVsX8F[IC1QgudHVB], XL0Ay6[WUtg1QSnYXqG], nDhyVsX8F[WUtg1QSnYXqG]) > MlI4rz)
                        MlI4rz = cLZHNym2GXIP (XL0Ay6[IC1QgudHVB], nDhyVsX8F[IC1QgudHVB], XL0Ay6[WUtg1QSnYXqG], nDhyVsX8F[WUtg1QSnYXqG]);
                    WUtg1QSnYXqG++;
                };
            }
            IC1QgudHVB++;
        };
    }
    printf ("%.4lf", MlI4rz);
    return 0;
}

