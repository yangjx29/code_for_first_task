double  f (double  IuPbmoUFNV) {
    double  z1aHcWPq;
    double  O5javf;
    double  i9vu2MIoC;
    double  I20g4Z;
    double  eYWb7PM;
    double  bVLdvRfKJn;
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
    z1aHcWPq = (505 - 505);
    O5javf = (232 - 231);
    i9vu2MIoC = (143 - 141);
    for (bVLdvRfKJn = (281 - 281); bVLdvRfKJn < IuPbmoUFNV; bVLdvRfKJn = bVLdvRfKJn + 1) {
        z1aHcWPq = z1aHcWPq + i9vu2MIoC / O5javf;
        I20g4Z = O5javf +i9vu2MIoC;
        eYWb7PM = i9vu2MIoC;
        O5javf = eYWb7PM;
        i9vu2MIoC = I20g4Z;
    }
    return (z1aHcWPq);
}

int main () {
    double  jE4NiXQoltY [(758 - 658)] [(610 - 608)];
    int IuPbmoUFNV;
    int bVLdvRfKJn;
    scanf ("%d", &IuPbmoUFNV);
    for (bVLdvRfKJn = (72 - 72); bVLdvRfKJn < IuPbmoUFNV; bVLdvRfKJn = bVLdvRfKJn + 1) {
        scanf ("%lf", &(jE4NiXQoltY[bVLdvRfKJn][(163 - 163)]));
        jE4NiXQoltY[bVLdvRfKJn][1] = f (jE4NiXQoltY[bVLdvRfKJn][0]);
    }
    for (bVLdvRfKJn = 0; bVLdvRfKJn < IuPbmoUFNV; bVLdvRfKJn++) {
        printf ("%.3lf\n", jE4NiXQoltY[bVLdvRfKJn][1]);
    }
    return 0;
}

