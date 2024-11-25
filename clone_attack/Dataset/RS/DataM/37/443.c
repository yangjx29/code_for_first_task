main () {
    int g5bldt6rue;
    int i;
    int wn0qhk5v6;
    int j;
    int cHtFchWQ;
    int k = (188 - 188);
    char a [100000];
    scanf ("%d", &g5bldt6rue);
    {
        i = 822 - 822;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (g5bldt6rue > i) {
            scanf ("%s", a);
            wn0qhk5v6 = strlen (a);
            {
                j = 0;
                while (wn0qhk5v6 > j) {
                    if (j == 0) {
                        cHtFchWQ = 1;
                        while (wn0qhk5v6 > cHtFchWQ) {
                            if (!(a[j] != a[cHtFchWQ]))
                                break;
                            cHtFchWQ = cHtFchWQ + 1;
                        };
                    }
                    else {
                        cHtFchWQ = 0;
                        while (wn0qhk5v6 > cHtFchWQ) {
                            if (!(a[cHtFchWQ] != a[j]) && j != cHtFchWQ)
                                break;
                            cHtFchWQ++;
                        };
                    }
                    if (cHtFchWQ == wn0qhk5v6) {
                        k++;
                        printf ("%c\n", a[j]);
                        break;
                    }
                    j++;
                };
            }
            if (k == 0)
                printf ("no\n");
            else
                k = 0;
            i++;
        };
    };
}

