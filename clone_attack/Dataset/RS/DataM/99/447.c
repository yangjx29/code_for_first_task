int main () {
    int VxiJDrV9eMbl, i;
    double  HaSNph7kfETz [100], b = 0, Cel8EZY1 = 0, Wih7uAxb2 = 0, SFpnC32EhZA = 0, maVuL6nhI1ck = 0;
    double  x5BuXT3P;
    double  rKtoAN;
    double  lLwRKYmM;
    double  u;
    scanf ("%d", &VxiJDrV9eMbl);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (VxiJDrV9eMbl > i) {
            scanf ("%lf", &HaSNph7kfETz[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < VxiJDrV9eMbl) {
            if (HaSNph7kfETz[i] > 60)
                b = b + 1;
            else {
                if (HaSNph7kfETz[i] > 35)
                    Cel8EZY1 = Cel8EZY1 +1;
                else if (HaSNph7kfETz[i] > 18)
                    Wih7uAxb2 = Wih7uAxb2 +1;
                else
                    SFpnC32EhZA = SFpnC32EhZA +1;
            }
            i = i + 1;
        };
    }
    maVuL6nhI1ck = b + Cel8EZY1 +Wih7uAxb2+SFpnC32EhZA;
    u = 100 * b / maVuL6nhI1ck;
    lLwRKYmM = 100 * Cel8EZY1 / maVuL6nhI1ck;
    rKtoAN = 100 * Wih7uAxb2 / maVuL6nhI1ck;
    x5BuXT3P = 100 * SFpnC32EhZA / maVuL6nhI1ck;
    printf ("1-18: %.2lf%%\n", x5BuXT3P);
    printf ("19-35: %.2lf%%\n", rKtoAN);
    printf ("36-60: %.2lf%%\n", lLwRKYmM);
    printf ("60??: %.2lf%%\n", u);
    return 0;
}

