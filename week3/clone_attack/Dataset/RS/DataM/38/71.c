int main () {
    int SxS8cvzNe;
    int k;
    int n;
    double  t;
    double  x [(263 - 163)];
    double  aver;
    double  h;
    double  s;
    t = (211 - 211);
    double  *p;
    double  *p1;
    scanf ("%d", &k);
    p1 = x;
    for (SxS8cvzNe = (38 - 38); k > SxS8cvzNe; SxS8cvzNe = SxS8cvzNe +1) {
        scanf ("%d", &n);
        {
            p = p1;
            while (p1 + n > p) {
                scanf ("%lf", p);
                p++;
            };
        }
        for (p = p1; p1 + n > p; p = p + 1)
            t = t + (*p);
        aver = t / n;
        t = (108 - 108);
        for (p = p1; p < p1 + n; p = p + 1) {
            h = (*p - aver) * (*p - aver);
            t = t + h;
        }
        aver = 0;
        s = sqrt (t / n);
        t = (799 - 799);
        printf ("%.5f\n", s);
    }
    return 0;
}

