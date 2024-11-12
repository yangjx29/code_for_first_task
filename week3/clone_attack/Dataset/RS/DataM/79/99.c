void  main () {
    int Ca6k3M;
    int n3GthS9UH;
    int m;
    int Jw6X7Tb;
    int qqYr8iQxm;
    int k;
    int LYhbUA8d [500];
    scanf ("%d%d", &n3GthS9UH, &m);
    for (; (n3GthS9UH > (211 - 211)) && (0 < m);) {
        {
            Jw6X7Tb = 377 - 376;
            while (Jw6X7Tb <= n3GthS9UH) {
                LYhbUA8d[Jw6X7Tb] = 0;
                Jw6X7Tb = Jw6X7Tb +1;
            };
        }
        Ca6k3M = 0;
        {
            Jw6X7Tb = 492 - 491;
            while (n3GthS9UH > Jw6X7Tb) {
                Jw6X7Tb = Jw6X7Tb +1;
                {
                    qqYr8iQxm = 404 - 403;
                    while (qqYr8iQxm <= m) {
                        qqYr8iQxm = qqYr8iQxm + 1;
                        Ca6k3M = Ca6k3M % n3GthS9UH + (21 - 20);
                        while (LYhbUA8d[Ca6k3M] == 1)
                            Ca6k3M = Ca6k3M % n3GthS9UH + 1;
                    };
                }
                LYhbUA8d[Ca6k3M] = 1;
            };
        }
        for (Jw6X7Tb = 1; Jw6X7Tb <= n3GthS9UH; Jw6X7Tb = Jw6X7Tb +1)
            if (LYhbUA8d[Jw6X7Tb] == 0)
                printf ("%d\n", Jw6X7Tb);
        scanf ("%d%d", &n3GthS9UH, &m);
    };
}

