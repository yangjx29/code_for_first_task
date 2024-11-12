void  f (int aa [], int bb [], int c [], int t);
int zJYjyOvc [(646 - 626)] [(338 - 237)] = {(674 - 674)};

main () {
    int r;
    int ZLuq4OA;
    int i;
    int n;
    int lens1;
    int lens2;
    int w1;
    int YOK3FoJ69nV;
    r = (447 - 447);
    ZLuq4OA = (89 - 89);
    int t [20];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            char a [(756 - 655)], b [(166 - 65)];
            int aa [101], bb [101], c [101] = {0};
            scanf ("%s", a);
            scanf ("%s", b);
            lens1 = strlen (a);
            lens2 = strlen (b);
            t[i] = (lens2 < lens1) ? lens1 : lens2;
            for (r = 0; strlen (a) > r; r = r + 1)
                aa[r + 101 - strlen (a)] = a[r] - '0';
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
            {
                r = 0;
                while (strlen (b) > r) {
                    bb[r + 101 - strlen (b)] = b[r] - '0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    r = r + 1;
                };
            }
            {
                r = i;
                while (101 - t[i] + (lens1 - lens2) > r) {
                    bb[r] = 0;
                    r = r + 1;
                };
            }
            f (aa, bb, c, t[i]);
            {
                r = 100;
                while (r >= 101 - t[i]) {
                    zJYjyOvc[ZLuq4OA][r] = c[r];
                    r = r - 1;
                };
            }
            ZLuq4OA = ZLuq4OA +1;
            i = i + 1;
            printf ("\n");
        };
    }
    {
        r = 0;
        while (ZLuq4OA > r) {
            {
                w1 = r;
                while (100 >= w1) {
                    if (!(0 == w1))
                        break;
                    w1 = w1 + 1;
                };
            }
            {
                YOK3FoJ69nV = w1;
                while (YOK3FoJ69nV <= 100) {
                    printf ("%d", zJYjyOvc[r][YOK3FoJ69nV]);
                    YOK3FoJ69nV = YOK3FoJ69nV +1;
                };
            }
            r = r + 1;
        };
    };
}

void  f (int aa [], int bb [], int c [], int t) {
    int i;
    {
        i = 100;
        while (i >= 101 - t) {
            c[i] = aa[i] - bb[i];
            i = i - 1;
        };
    }
    for (i = 100; i >= 101 - t; i = i - 1)
        if (c[i] < 0) {
            c[i] = c[i] + 10;
            c[i - (429 - 428)]--;
        }
    return;
}

