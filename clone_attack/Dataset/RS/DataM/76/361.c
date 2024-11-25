int main () {
    int c;
    c = 0;
    int k, t;
    struct   qj {
        int a, b;
    }
    *RPMVv98D1Q, e;
    free (RPMVv98D1Q);
    int i;
    int n;
    scanf ("%d", &n);
    RPMVv98D1Q = (struct   qj *) malloc (sizeof (struct   qj) * n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d", &RPMVv98D1Q[i].a, &RPMVv98D1Q[i].b);
            i = i + 1;
        };
    }
    {
        k = 1;
        while (n >= k) {
            for (i = 0; n - k > i; i = i + 1) {
                if (RPMVv98D1Q[i].a > RPMVv98D1Q[i + 1].a) {
                    e = RPMVv98D1Q[i];
                    RPMVv98D1Q[i] = RPMVv98D1Q[i + 1];
                    RPMVv98D1Q[i + 1] = e;
                }
                if (RPMVv98D1Q[i].b > RPMVv98D1Q[i + 1].b) {
                    t = RPMVv98D1Q[i].b;
                    RPMVv98D1Q[i].b = RPMVv98D1Q[i + 1].b;
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
                    RPMVv98D1Q[i + 1].b = t;
                };
            }
            k = k + 1;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            if (RPMVv98D1Q[i].b < RPMVv98D1Q[i + 1].a) {
                c++;
            }
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
            i = i + 1;
        };
    }
    if (c == 0) {
        printf ("%d %d", RPMVv98D1Q[0].a, RPMVv98D1Q[n - 1].b);
    }
    else {
        printf ("no");
    }
    return 0;
}

