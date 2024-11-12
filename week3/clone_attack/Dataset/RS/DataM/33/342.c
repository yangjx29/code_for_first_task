int main () {
    int n;
    int k;
    int i;
    int l;
    scanf ("%d", &n);
    {
        k = 0;
        while (k <= n) {
            char *p, s [256];
            gets (s);
            k = k + 1;
            l = strlen (s);
            {
                i = 0;
                p = s;
                while (*p) {
                    if (i == l - 1) {
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
                        if (*p == 'A') {
                        }
                        else if (*p == 'T') {
                        }
                        else if (*p == 'C') {
                            printf ("G\n");
                        }
                        else if (*p == 'G') {
                            printf ("C\n");
                        };
                    }
                    else {
                        if (*p == 'A') {
                            printf ("T");
                        }
                        else if (*p == 'T') {
                            printf ("A");
                        }
                        else if (*p == 'C') {
                            printf ("G");
                        }
                        else if (*p == 'G') {
                        };
                    }
                    i = i + 1;
                    p = p + 1;
                };
            };
        };
    }
    return 0;
}

