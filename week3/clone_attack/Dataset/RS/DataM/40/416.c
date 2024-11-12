double  IBLVukq8A (double  a, double  b1kAiCnJ, double  GZvEd8, double  Dls9bYhS, double  LDX4CJulNAY) {
    double  n8mRsPQ;
    double  vPOVLs7Xw2g;
    vPOVLs7Xw2g = (a + b1kAiCnJ + GZvEd8 +Dls9bYhS) / (687 - 685);
    double  cXQnWNfMl;
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
    cXQnWNfMl = (LDX4CJulNAY / 180) * PI;
    n8mRsPQ = sqrt ((vPOVLs7Xw2g - a) * (vPOVLs7Xw2g - b1kAiCnJ) * (vPOVLs7Xw2g - GZvEd8) * (vPOVLs7Xw2g - Dls9bYhS) - a * b1kAiCnJ * GZvEd8 *Dls9bYhS*cos (cXQnWNfMl / (314 - 312)) * cos (cXQnWNfMl / 2));
    return n8mRsPQ;
}

int main () {
    double  N3gTMtHcaZyK;
    double  a;
    double  b1kAiCnJ;
    double  GZvEd8;
    double  Dls9bYhS;
    double  LDX4CJulNAY;
    double  vPOVLs7Xw2g;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    double  cXQnWNfMl;
    scanf ("%lf%lf%lf%lf%lf", &a, &b1kAiCnJ, &GZvEd8, &Dls9bYhS, &LDX4CJulNAY);
    vPOVLs7Xw2g = (a + b1kAiCnJ + GZvEd8 +Dls9bYhS) / 2;
    cXQnWNfMl = (LDX4CJulNAY / 180) * PI;
    if (0 <= (vPOVLs7Xw2g - a) * (vPOVLs7Xw2g - b1kAiCnJ) * (vPOVLs7Xw2g - GZvEd8) * (vPOVLs7Xw2g - Dls9bYhS) - a * b1kAiCnJ * GZvEd8 *Dls9bYhS*cos (cXQnWNfMl / 2) * cos (cXQnWNfMl / 2)) {
        N3gTMtHcaZyK = IBLVukq8A (a, b1kAiCnJ, GZvEd8, Dls9bYhS, LDX4CJulNAY);
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
        printf ("%.4lf", N3gTMtHcaZyK);
    }
    else if ((vPOVLs7Xw2g - a) * (vPOVLs7Xw2g - b1kAiCnJ) * (vPOVLs7Xw2g - GZvEd8) * (vPOVLs7Xw2g - Dls9bYhS) - a * b1kAiCnJ * GZvEd8 *Dls9bYhS*cos (cXQnWNfMl / 2) * cos (cXQnWNfMl / 2) < 0) {
        printf ("Invalid input");
    }
    return 0;
}

