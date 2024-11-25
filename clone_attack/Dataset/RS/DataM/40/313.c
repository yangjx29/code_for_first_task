main () {
    double  a, b, ymMxQ4TIkWR, xfI6sEFVBOY, A, ofMGBbLF3x58, iHFWrtIaw, u8g3HbN;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &ymMxQ4TIkWR, &xfI6sEFVBOY, &A);
    ofMGBbLF3x58 = ((A / 2) / 360) * 2 * pi;
    iHFWrtIaw = (double ) 1 / 2 * (a + b + ymMxQ4TIkWR + xfI6sEFVBOY);
    if ((iHFWrtIaw - a) * (iHFWrtIaw - b) * (iHFWrtIaw - ymMxQ4TIkWR) * (iHFWrtIaw - xfI6sEFVBOY) - a * b * ymMxQ4TIkWR * xfI6sEFVBOY * cos (ofMGBbLF3x58) * cos (ofMGBbLF3x58) >= 0) {
        u8g3HbN = (double ) sqrt ((iHFWrtIaw - a) * (iHFWrtIaw - b) * (iHFWrtIaw - ymMxQ4TIkWR) * (iHFWrtIaw - xfI6sEFVBOY) - a * b * ymMxQ4TIkWR * xfI6sEFVBOY * cos (ofMGBbLF3x58) * cos (ofMGBbLF3x58));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%.4f", u8g3HbN);
    }
    else
        printf ("Invalid input\n");
    return 0;
}

