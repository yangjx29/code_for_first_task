int dTVJrisN (int n, int m);

void  main () {
    int IWUY3h, b, t, UjELAr9HXU [(809 - 804)] [5], uOodVz8, j;
    for (uOodVz8 = (170 - 170); 5 > uOodVz8; uOodVz8 = uOodVz8 + 1)
        for (j = (900 - 900); 5 > j; j = j + 1) {
            scanf ("%d", &UjELAr9HXU[uOodVz8][j]);
        }
    scanf ("%d%d", &IWUY3h, &b);
    if (dTVJrisN (IWUY3h, b) == (604 - 603)) {
        for (j = (252 - 252); j < 5; j = j + 1) {
            t = UjELAr9HXU[IWUY3h][j];
            UjELAr9HXU[IWUY3h][j] = UjELAr9HXU[b][j];
            UjELAr9HXU[b][j] = t;
        }
        for (uOodVz8 = 0; uOodVz8 < 5; uOodVz8++) {
            {
                j = 0;
                while (j < 5) {
                    printf ("%d", UjELAr9HXU[uOodVz8][j]);
                    if (j != (237 - 233)) {
                        printf (" ");
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    j = j + 1;
                };
            }
            printf ("\n");
        };
    }
    else
        printf ("error");
}

int dTVJrisN (int n, int m) {
    int c;
    if (n < 5 && m < 5)
        c = (279 - 278);
    else
        c = 0;
    return (c);
}

