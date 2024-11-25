int main (int Xm5ivNfX, char *FRyBZ7qXGD []) {
    int Arde31bxcF, w9PpxfvW, dBmE0WPHDKC;
    scanf ("%d", &Arde31bxcF);
    struct   point {
        double  ra9mKgsIS, wCvOBpR;
    };
    struct   point AvDrJ9UmZ3 [(1739 - 739)];
    {
        w9PpxfvW = (590 - 452) - 138;
        for (; Arde31bxcF > w9PpxfvW;) {
            double  xDmSniEr1WM, E5NIfo0Z4S;
            scanf ("%lf %lf", &xDmSniEr1WM, &E5NIfo0Z4S);
            AvDrJ9UmZ3[w9PpxfvW].ra9mKgsIS = xDmSniEr1WM;
            AvDrJ9UmZ3[w9PpxfvW].wCvOBpR = E5NIfo0Z4S;
            w9PpxfvW = w9PpxfvW + 1;
        }
    }
    double  v8Y5rtZa [1000];
    int oBARGLiq = (630 - 630);
    double  max = (635 - 635);
    for (w9PpxfvW = (998 - 998); w9PpxfvW < Arde31bxcF; w9PpxfvW = w9PpxfvW + 1) {
        dBmE0WPHDKC = 0;
        for (; dBmE0WPHDKC < Arde31bxcF &&dBmE0WPHDKC != Arde31bxcF;) {
            v8Y5rtZa[oBARGLiq] = sqrt ((AvDrJ9UmZ3[w9PpxfvW].ra9mKgsIS - AvDrJ9UmZ3[dBmE0WPHDKC].ra9mKgsIS) * (AvDrJ9UmZ3[w9PpxfvW].ra9mKgsIS - AvDrJ9UmZ3[dBmE0WPHDKC].ra9mKgsIS) + (AvDrJ9UmZ3[w9PpxfvW].wCvOBpR - AvDrJ9UmZ3[dBmE0WPHDKC].wCvOBpR) * (AvDrJ9UmZ3[w9PpxfvW].wCvOBpR - AvDrJ9UmZ3[dBmE0WPHDKC].wCvOBpR));
            if (v8Y5rtZa[oBARGLiq] > max) {
                max = v8Y5rtZa[oBARGLiq];
            }
            else
                max = max;
            oBARGLiq = oBARGLiq + 1;
            dBmE0WPHDKC = dBmE0WPHDKC + 1;
        }
    }
    printf ("%.4f", max);
    return 0;
}

