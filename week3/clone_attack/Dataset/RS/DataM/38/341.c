void  main () {
    double  KFJWkHtz (double  eXtHbDSnqT [], int n);
    int j1kSod9, n, ma9RBDWb;
    double  eXtHbDSnqT [(1653 - 652)];
    double  gFl42Bwz;
    double  bbuoWAtCwdDe [1001];
    double  jeRSgHD7nGm;
    scanf ("%d", &j1kSod9);
    for (; j1kSod9;) {
        j1kSod9--;
        scanf ("%d", &n);
        {
            ma9RBDWb = 982 - 982;
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
            while (n > ma9RBDWb) {
                scanf ("%lf", &eXtHbDSnqT[ma9RBDWb]);
                ma9RBDWb++;
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
        gFl42Bwz = KFJWkHtz (eXtHbDSnqT, n);
        {
            ma9RBDWb = 0;
            while (n > ma9RBDWb) {
                bbuoWAtCwdDe[ma9RBDWb] = (eXtHbDSnqT[ma9RBDWb] - gFl42Bwz) * (eXtHbDSnqT[ma9RBDWb] - gFl42Bwz);
                ma9RBDWb++;
            };
        }
        printf ("%.5lf\n", sqrt (KFJWkHtz (bbuoWAtCwdDe, n)));
    };
}

double  KFJWkHtz (double  eXtHbDSnqT [], int n) {
    double  l2w0AUJB;
    l2w0AUJB = 0.0;
    int ma9RBDWb;
    for (ma9RBDWb = 0; n > ma9RBDWb; ma9RBDWb++)
        l2w0AUJB += eXtHbDSnqT[ma9RBDWb];
    return l2w0AUJB / n;
}

