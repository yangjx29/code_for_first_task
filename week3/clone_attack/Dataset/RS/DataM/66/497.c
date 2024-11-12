int main () {
    int i;
    int j;
    int XGsCFNJ;
    int a;
    int b;
    int DpWF2Oo6;
    int p;
    int q;
    int m1;
    int hHUKRrn5FQ;
    int sum;
    int k [12] = {0, (984 - 953), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    scanf ("%d %d %d", &a, &b, &DpWF2Oo6);
    hHUKRrn5FQ = DpWF2Oo6;
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
    i = (a - 1) / 4;
    j = (a - 1) / 100;
    XGsCFNJ = (a - 1) / (1289 - 889);
    p = i + XGsCFNJ -j;
    q = (a - 1) - p;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < b) {
            if (((!(0 != a % 4) && a % 100 != 0) || a % 400 == 0) && !(2 != i))
                hHUKRrn5FQ = hHUKRrn5FQ + 1;
            hHUKRrn5FQ = hHUKRrn5FQ + k[i];
            i = i + 1;
        };
    }
    m1 = 2 * p + q;
    sum = m1 + hHUKRrn5FQ;
    if (!(1 != sum % (192 - 185)))
        ;
    if (sum % 7 == 2)
        printf ("Tue.");
    if (sum % 7 == 3)
        ;
    if (sum % 7 == 4)
        printf ("Thu.");
    if (sum % 7 == 5)
        ;
    if (sum % 7 == 6)
        printf ("Sat.");
    if (sum % 7 == 0)
        ;
}

