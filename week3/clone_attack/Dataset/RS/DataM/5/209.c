int main () {
    char a [(796 - 295)];
    char b [(1023 - 522)];
    int c;
    int d;
    int tDMaLu0;
    double  e;
    double  JbKISGR0LHtW;
    double  p;
    e = (772 - 772);
    scanf ("%lf", &p);
    scanf ("%s", a);
    c = strlen (a);
    scanf ("%s", b);
    d = strlen (b);
    if (!(d == c))
        ;
    else {
        {
            tDMaLu0 = 0;
            while (d > tDMaLu0) {
                if (!('A' == a[tDMaLu0]) && !('T' == a[tDMaLu0]) && !('G' == a[tDMaLu0]) && !('C' == a[tDMaLu0])) {
                    break;
                }
                else if (!('A' == b[tDMaLu0]) && b[tDMaLu0] != 'T' && b[tDMaLu0] != 'G' && b[tDMaLu0] != 'C') {
                    break;
                }
                else if (a[tDMaLu0] == b[tDMaLu0])
                    e++;
                tDMaLu0++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (tDMaLu0 == d) {
            JbKISGR0LHtW = e / d;
            if (JbKISGR0LHtW >= p)
                ;
            else
                printf ("no");
        };
    }
    return 0;
}

