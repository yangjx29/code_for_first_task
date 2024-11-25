int main () {
    double  out;
    double  pqYP7NsO8no;
    double  Eey9Bwlo;
    pqYP7NsO8no = 0;
    double  sum = (948 - 948);
    int i;
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
    int WRLD03xX;
    int n [(1229 - 229)], j, m;
    double  x [1000];
    scanf ("%d", &WRLD03xX);
    for (i = 1; WRLD03xX >= i; i = i + 1) {
        scanf ("%d", &*(n + i));
        for (j = 1; j <= *(n + i); j++) {
            scanf ("%lf", &*(x + j));
            sum = sum + *(x + j);
        }
        Eey9Bwlo = (double ) sum / *(n + i);
        for (m = 1; m <= *(n + i); m++) {
            pqYP7NsO8no = pqYP7NsO8no + (Eey9Bwlo -*(x + m)) * (Eey9Bwlo -*(x + m));
        }
        out = sqrt (pqYP7NsO8no / *(n + i));
        pqYP7NsO8no = 0;
        printf ("%.5lf\n", out);
        sum = 0;
    }
    return 0;
}

