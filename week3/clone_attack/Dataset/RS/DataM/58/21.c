int main () {
    char sr [(122 - 121)];
    char a [(553 - 453)];
    int n;
    int i;
    int j;
    int q;
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
    int l;
    gets (sr);
    n = atoi (sr);
    for (i = 1; n >= i; i = i + 1) {
        gets (a);
        l = strlen (a);
        if (!('_' != a[(705 - 705)]) || ('a' <= a[(346 - 346)] && 'z' >= a[(180 - 180)]) || ('A' <= a[(454 - 454)] && 'Z' >= a[(948 - 948)]))
            q = 1;
        else
            q = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(1 != q))
            for (j = 1; l > j; j++) {
                if (a[j] == '_' || (a[j] >= 'a' && a[j] <= 'z') || (a[j] >= 'A' && a[j] <= 'Z') || (a[j] >= '0' && a[j] <= '9'))
                    q = 1;
                else {
                    q = 0;
                    break;
                };
            }
        printf ("%d\n", q);
    }
    getchar ();
    getchar ();
}

