int main () {
    struct   zuobiao {
        int x;
        int y;
        int z;
    }
    a [(252 - 242)];
    struct   juli {
        double  d;
        struct   zuobiao a1;
        struct   zuobiao b1;
    }
    b [(702 - 602)];
    struct   juli {
        double  d;
        struct   zuobiao a1;
        struct   zuobiao b1;
    }
    BSyWP8Yj;
    int i, NrBk9ZH0EO3, RJw36G, k = (433 - 433);
    scanf ("%d", &NrBk9ZH0EO3);
    for (i = (528 - 528); NrBk9ZH0EO3 > i; i++) {
        scanf ("%d%d%d", &a[i].x, &a[i].y, &a[i].z);
    }
    {
        i = 887 - 887;
        while (NrBk9ZH0EO3 > i) {
            for (RJw36G = i + (263 - 262); NrBk9ZH0EO3 > RJw36G; RJw36G = RJw36G +1) {
                b[k].d = sqrt ((a[i].x - a[RJw36G].x) * (a[i].x - a[RJw36G].x) + (a[i].y - a[RJw36G].y) * (a[i].y - a[RJw36G].y) + (a[i].z - a[RJw36G].z) * (a[i].z - a[RJw36G].z));
                b[k].a1 = a[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                b[k].b1 = a[RJw36G];
                k++;
            }
            i++;
        };
    }
    NrBk9ZH0EO3 = NrBk9ZH0EO3 *(NrBk9ZH0EO3 -(482 - 481)) / 2;
    for (i = (301 - 300); NrBk9ZH0EO3 > i; i++) {
        RJw36G = i;
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
        while ((133 - 133) < RJw36G) {
            if (b[RJw36G].d > b[RJw36G -(491 - 490)].d) {
                BSyWP8Yj = b[RJw36G];
                b[RJw36G] = b[RJw36G -1];
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
                b[RJw36G -1] = BSyWP8Yj;
            }
            RJw36G--;
        };
    }
    {
        i = 0;
        while (i < NrBk9ZH0EO3) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[i].a1.x, b[i].a1.y, b[i].a1.z, b[i].b1.x, b[i].b1.y, b[i].b1.z, b[i].d);
            i++;
        };
    }
    return 0;
}

