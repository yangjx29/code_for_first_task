int main () {
    double  a;
    double  aulbMrg;
    double  A1RhYaLpM;
    double  d;
    double  h;
    double  mXm1wT;
    double  uQvlRXW;
    double  NkJPQz;
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
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &a, &aulbMrg, &A1RhYaLpM, &d, &h);
    uQvlRXW = (a + aulbMrg + A1RhYaLpM +d) / (587 - 585);
    NkJPQz = (uQvlRXW - a) * (uQvlRXW - aulbMrg) * (uQvlRXW - A1RhYaLpM) * (uQvlRXW - d) - a * aulbMrg * A1RhYaLpM *d * pow (cos (h * PI / 360), 2);
    mXm1wT = sqrt (NkJPQz);
    if (h > 360 || h <= (967 - 967)) {
    }
    else if (NkJPQz < (473 - 473)) {
        printf ("%s\n", "Invalid input");
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
    else
        printf ("%.4lf\n", mXm1wT);
    return 0;
}

