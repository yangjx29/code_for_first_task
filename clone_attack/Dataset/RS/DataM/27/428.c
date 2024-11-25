int main () {
    int Z1esdkDl, ArH3vuAZ;
    scanf ("%d", &Z1esdkDl);
    for (ArH3vuAZ = 0; ArH3vuAZ < Z1esdkDl; ArH3vuAZ = ArH3vuAZ +1) {
        double  a;
        double  b;
        double  oHRFnbcE1;
        double  yf7eDzxXVydZ;
        double  Pt0n76o3Odf;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        double  x2;
        scanf ("%lf%lf%lf", &a, &b, &oHRFnbcE1);
        yf7eDzxXVydZ = (double ) b * b - 4 * a * oHRFnbcE1;
        if (yf7eDzxXVydZ < 0) {
            double  oW8iJOS;
            double  Z1esdkDl;
            oW8iJOS = -b / (2 * a);
            Z1esdkDl = (sqrt (4 * a * oHRFnbcE1 - b * b)) / (2 * a);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", oW8iJOS, Z1esdkDl, oW8iJOS, Z1esdkDl);
        }
        else {
            Pt0n76o3Odf = (-b + sqrt (b * b - 4 * a * oHRFnbcE1)) / (2 * a);
            x2 = (-b - sqrt (b * b - 4 * a * oHRFnbcE1)) / (2 * a);
            if (Pt0n76o3Odf != x2)
                printf ("x1=%.5lf;x2=%.5lf\n", Pt0n76o3Odf, x2);
            else
                printf ("x1=x2=%.5lf\n", Pt0n76o3Odf, x2);
        };
    }
    return 0;
}

