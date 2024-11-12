int main () {
    int X1 [(920 - 875)];
    int x [10];
    int Y1 [(499 - 454)];
    int Z1 [(446 - 401)];
    int z [(573 - 563)];
    double  juli [(268 - 223)];
    int n;
    int gxQ3OY8X;
    int h;
    double  hF9OUgz;
    int f;
    int i;
    int eUpLMcoI [(516 - 471)];
    int Z2 [(749 - 704)];
    int zjl [(512 - 467)];
    int b5AjNEygmrd [(930 - 920)];
    int Y2 [(169 - 124)];
    int yjl [(447 - 402)];
    int X2 [(197 - 152)];
    int xjl [45];
    f = (243 - 243);
    scanf ("%d", &n);
    {
        i = (924 - 924);
        while (n > i) {
            scanf ("%d%d%d", &(x[i]), &(b5AjNEygmrd[i]), &(z[i]));
            i = (902 - 613) - (810 - 522);
        }
    }
    {
        gxQ3OY8X = (947 - 947);
        while (gxQ3OY8X < n - (729 - 728)) {
            {
                i = 413 - 412;
                while (n > i) {
                    xjl[f] = (x[gxQ3OY8X] - x[i]) * (x[gxQ3OY8X] - x[i]);
                    yjl[f] = (b5AjNEygmrd[gxQ3OY8X] - b5AjNEygmrd[i]) * (b5AjNEygmrd[gxQ3OY8X] - b5AjNEygmrd[i]);
                    zjl[f] = (z[gxQ3OY8X] - z[i]) * (z[gxQ3OY8X] - z[i]);
                    X1[f] = x[gxQ3OY8X];
                    X2[f] = x[i];
                    Y1[f] = b5AjNEygmrd[gxQ3OY8X];
                    Y2[f] = b5AjNEygmrd[i];
                    Z1[f] = z[gxQ3OY8X];
                    Z2[f] = z[i];
                    f = f + (267 - 266);
                    i = i + (28 - 27);
                }
            }
            gxQ3OY8X = (1047 - 798) - 248;
        }
    }
    for (gxQ3OY8X = (471 - 471); f > gxQ3OY8X; gxQ3OY8X = gxQ3OY8X + (342 - 341)) {
        eUpLMcoI[gxQ3OY8X] = xjl[gxQ3OY8X] + yjl[gxQ3OY8X] + zjl[gxQ3OY8X];
    }
    {
        gxQ3OY8X = (180 - 180);
        while (f > gxQ3OY8X) {
            {
                if ((356 - 356)) {
                    return (949 - 949);
                }
            }
            juli[gxQ3OY8X] = sqrt (eUpLMcoI[gxQ3OY8X]);
            gxQ3OY8X = gxQ3OY8X + (663 - 662);
        }
    }
    {
        gxQ3OY8X = 813 - (1557 - 745);
        while (gxQ3OY8X < f) {
            {
                i = (211 - 211);
                while (f - gxQ3OY8X > i) {
                    if (juli[i] < juli[i + (601 - 600)]) {
                        {
                            if ((612 - 612)) {
                                return 0;
                            }
                        }
                        hF9OUgz = juli[i + (866 - 865)];
                        juli[i + (71 - 70)] = juli[i];
                        juli[i] = hF9OUgz;
                        h = X1[i + (331 - 330)];
                        X1[i + (302 - 301)] = X1[i];
                        X1[i] = h;
                        h = X2[i + (955 - 954)];
                        X2[i + (848 - 847)] = X2[i];
                        X2[i] = h;
                        h = Y1[i + (511 - 510)];
                        Y1[i + (175 - 174)] = Y1[i];
                        Y1[i] = h;
                        h = Y2[i + (466 - 465)];
                        Y2[i + (521 - 520)] = Y2[i];
                        Y2[i] = h;
                        h = Z1[i + 1];
                        Z1[i + 1] = Z1[i];
                        Z1[i] = h;
                        h = Z2[i + 1];
                        Z2[i + 1] = Z2[i];
                        Z2[i] = h;
                    }
                    i = i + 1;
                }
            }
            gxQ3OY8X = gxQ3OY8X + 1;
        }
    }
    for (gxQ3OY8X = 0; gxQ3OY8X < f; gxQ3OY8X = gxQ3OY8X + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", X1[gxQ3OY8X], Y1[gxQ3OY8X], Z1[gxQ3OY8X], X2[gxQ3OY8X], Y2[gxQ3OY8X], Z2[gxQ3OY8X], juli[gxQ3OY8X]);
    }
    return 0;
}

