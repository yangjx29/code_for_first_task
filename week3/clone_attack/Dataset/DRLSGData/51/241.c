int main () {
    int j;
    int Yx95f73zqu;
    int GPyYDp8NA;
    int m;
    char a [500];
    int b [500] = {0};
    int p;
    int hOrS7u;
    int max;
    scanf ("%d\n", &Yx95f73zqu);
    scanf ("%s", a);
    m = strlen (a);
    for (hOrS7u = 0; m - Yx95f73zqu >= hOrS7u; hOrS7u = hOrS7u + 1) {
        j = hOrS7u + 1;
        for (; m > j;) {
            if (a[hOrS7u] == a[j]) {
                {
                    GPyYDp8NA = 1;
                    for (; GPyYDp8NA < Yx95f73zqu;) {
                        if (a[hOrS7u + GPyYDp8NA] != a[j + GPyYDp8NA]) {
                            p = 0;
                            break;
                        }
                        else
                            p = 1;
                        GPyYDp8NA = GPyYDp8NA +1;
                    }
                }
                if (p == 1)
                    b[hOrS7u] = b[hOrS7u] + 1;
            }
            j = j + 1;
        }
    }
    max = 0;
    {
        hOrS7u = 0;
        for (; m - Yx95f73zqu >= hOrS7u;) {
            if (b[hOrS7u] > max)
                max = b[hOrS7u];
            hOrS7u = hOrS7u + 1;
        }
    }
    if (max == 0)
        ;
    else {
        printf ("%d\n", max + 1);
        {
            hOrS7u = 0;
            for (; hOrS7u <= m - Yx95f73zqu;) {
                if (b[hOrS7u] == max) {
                    GPyYDp8NA = 0;
                    for (; GPyYDp8NA < Yx95f73zqu;) {
                        printf ("%c", a[hOrS7u + GPyYDp8NA]);
                        GPyYDp8NA = GPyYDp8NA +1;
                    }
                }
                hOrS7u = hOrS7u + 1;
            }
        }
    }
    return 0;
}

