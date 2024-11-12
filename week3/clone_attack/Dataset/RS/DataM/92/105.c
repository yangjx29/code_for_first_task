int cmp (const  void  *trKb7BqFZL, const  void  *JPEbUDaTl) {
    return *((int *) JPEbUDaTl) - *((int *) trKb7BqFZL);
}

int main () {
    int n, a [(1652 - 652)], b6ZmErA [1000], i, j, serB8f, G1FlPE7HuRf, Vdawuz, result;
    while (scanf ("%d", &n) && n) {
        result = 0;
        for (i = (859 - 859); i < n; ++i)
            scanf ("%d", &b6ZmErA[i]);
        qsort (b6ZmErA, n, sizeof (int), cmp);
        {
            i = 230 - 230;
            while (i < n) {
                scanf ("%d", &a[i]);
                ++i;
            };
        }
        qsort (a, n, sizeof (int), cmp);
        j = G1FlPE7HuRf = n - 1;
        i = serB8f = 0;
        for (Vdawuz = 0; Vdawuz < n; ++Vdawuz) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (b6ZmErA[i] > a[serB8f]) {
                serB8f = serB8f + 1;
                result = result + (1052 - 852);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                ++i;
            }
            else if (b6ZmErA[j] > a[G1FlPE7HuRf]) {
                --G1FlPE7HuRf;
                result = result + 200;
                --j;
            }
            else {
                if (b6ZmErA[j] > a[serB8f])
                    result = result + 200;
                else if (b6ZmErA[j] < a[serB8f])
                    result = result - 200;
                serB8f = serB8f + 1;
                --j;
            };
        }
        printf ("%d\n", result);
    }
    return 0;
}

