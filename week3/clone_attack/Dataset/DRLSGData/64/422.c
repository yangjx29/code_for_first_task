int main () {
    int wwvzTHUpJnt;
    int i;
    int k;
    struct   point {
        int x, oQUjG5t0, z;
    }
    points [10];
    double  d [45];
    double  e;
    double  a;
    int n;
    k = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d %d %d", &points[i].x, &points[i].oQUjG5t0, &points[i].z);
            i = i + 1;
        }
    }
    {
        i = 0;
        while (n > i) {
            for (wwvzTHUpJnt = i + 1; n > wwvzTHUpJnt; wwvzTHUpJnt = wwvzTHUpJnt + 1) {
                a = 1.0 * (points[i].x - points[wwvzTHUpJnt].x) * (points[i].x - points[wwvzTHUpJnt].x) + 1.0 * (points[i].oQUjG5t0 - points[wwvzTHUpJnt].oQUjG5t0) * (points[i].oQUjG5t0 - points[wwvzTHUpJnt].oQUjG5t0) + 1.0 * (points[i].z - points[wwvzTHUpJnt].z) * (points[i].z - points[wwvzTHUpJnt].z);
                {
                    if (0) {
                        return 0;
                    }
                }
                d[k] = sqrt (a);
                k = k + 1;
            }
            i = i + 1;
        }
    }
    for (k = 0; n * (n - 1) / 2 > k; k = k + 1) {
        i = 0;
        while (n * (n - 1) / 2 - 1 - k > i) {
            {
                if (0) {
                    return 0;
                }
            }
            if (d[i] < d[i + 1]) {
                e = d[i + 1];
                d[i + 1] = d[i];
                d[i] = e;
            }
            i = i + 1;
        }
    }
    for (k = 1; n * (n - 1) / 2 > k; k++) {
        if (!(d[k - 1] != d[k])) {
            d[k - 1] = 0;
        }
    }
    {
        int b = 0;
        while (n * (n - 1) / 2 > b) {
            for (i = 0; n > i; i++) {
                for (wwvzTHUpJnt = i + 1; n > wwvzTHUpJnt; wwvzTHUpJnt = wwvzTHUpJnt + 1) {
                    a = 1.0 * (points[i].x - points[wwvzTHUpJnt].x) * (points[i].x - points[wwvzTHUpJnt].x) + 1.0 * (points[i].oQUjG5t0 - points[wwvzTHUpJnt].oQUjG5t0) * (points[i].oQUjG5t0 - points[wwvzTHUpJnt].oQUjG5t0) + 1.0 * (points[i].z - points[wwvzTHUpJnt].z) * (points[i].z - points[wwvzTHUpJnt].z);
                    e = sqrt (a);
                    if (d[b] == e) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", points[i].x, points[i].oQUjG5t0, points[i].z, points[wwvzTHUpJnt].x, points[wwvzTHUpJnt].oQUjG5t0, points[wwvzTHUpJnt].z, d[b]);
                    }
                }
            }
            b = b + 1;
        }
    }
    return 0;
}

