int main () {
    int CaRCjZe [(881 - 781)];
    int uPL0HWvC;
    int p9kcigdTs2;
    int a = (969 - 969), oe5TZc = 0, OIbwTD3mO = 0, d = 0;
    scanf ("%d", &uPL0HWvC);
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
    for (p9kcigdTs2 = 0; p9kcigdTs2 < uPL0HWvC; p9kcigdTs2++) {
        scanf ("%d", &CaRCjZe[p9kcigdTs2]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (CaRCjZe[p9kcigdTs2] <= 18)
            a = a + 1;
        else if (18 < CaRCjZe[p9kcigdTs2] && CaRCjZe[p9kcigdTs2] <= 35)
            oe5TZc = oe5TZc + 1;
        else if (CaRCjZe[p9kcigdTs2] > 35 && CaRCjZe[p9kcigdTs2] <= 60)
            OIbwTD3mO++;
        else
            d++;
    }
    printf ("1-18: %.2lf", (a * 1.00) * 100 / uPL0HWvC);
    printf ("19-35: %.2lf", (oe5TZc * 1.00) * 100 / uPL0HWvC);
    printf ("36-60: %.2lf", (OIbwTD3mO *1.00) * 100 / uPL0HWvC);
    printf ("60??: %.2lf", (d * 1.00) * 100 / uPL0HWvC);
    return 0;
}

