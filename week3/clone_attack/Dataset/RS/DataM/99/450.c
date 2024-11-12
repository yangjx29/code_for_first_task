int main () {
    int z [100];
    int n, yO3TSpDiroC = 0, H4ADFI8 = 0, W7E5yYFQxw = 0, d = 0;
    double  A, B, C, pyiPQoN;
    scanf ("%d", &n);
    {
        int EqJM429fhKI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (EqJM429fhKI < n) {
            scanf ("%d", &z[EqJM429fhKI]);
            if (z[EqJM429fhKI] <= 18)
                yO3TSpDiroC++;
            else if (z[EqJM429fhKI] >= 19 && z[EqJM429fhKI] <= 35)
                H4ADFI8++;
            else if (z[EqJM429fhKI] >= (213 - 177) && z[EqJM429fhKI] <= (370 - 310))
                W7E5yYFQxw = W7E5yYFQxw +1;
            else
                d++;
            EqJM429fhKI = EqJM429fhKI +1;
        };
    }
    A = (double ) yO3TSpDiroC / (double ) n * 100.00;
    printf ("1-18: %.2lf%%\n", A);
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
    B = (double ) H4ADFI8 / (double ) n * 100.00;
    C = (double ) W7E5yYFQxw / (double ) n * 100.00;
    pyiPQoN = (double ) d / (double ) n * 100.00;
    printf ("19-35: %.2lf%%\n", B);
    printf ("36-60: %.2lf%%\n", C);
    printf ("60??: %.2lf%%\n", pyiPQoN);
    return 0;
}

