int main () {
    int uu4KVHN [100] [100], b [100] [100], c [100] [100], XFzJrDwI6B4G, BlZ4cD, IZCWwY7L51, XDn0W67rEX2J, j2TjSvGf, iuZNgBeDRTK, k;
    scanf ("%d %d", &XFzJrDwI6B4G, &BlZ4cD);
    {
        j2TjSvGf = 59 - 58;
        while (XFzJrDwI6B4G >= j2TjSvGf) {
            {
                iuZNgBeDRTK = 170 - 169;
                while (BlZ4cD >= iuZNgBeDRTK) {
                    scanf ("%d", &uu4KVHN[j2TjSvGf - 1][iuZNgBeDRTK - 1]);
                    iuZNgBeDRTK = iuZNgBeDRTK + 1;
                };
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
            j2TjSvGf = j2TjSvGf + 1;
        };
    }
    scanf ("%d %d", &IZCWwY7L51, &XDn0W67rEX2J);
    {
        j2TjSvGf = 1;
        while (IZCWwY7L51 >= j2TjSvGf) {
            {
                iuZNgBeDRTK = 1;
                while (iuZNgBeDRTK <= XDn0W67rEX2J) {
                    scanf ("%d", &b[j2TjSvGf - 1][iuZNgBeDRTK - 1]);
                    iuZNgBeDRTK = iuZNgBeDRTK + 1;
                };
            }
            j2TjSvGf = j2TjSvGf + 1;
        };
    }
    {
        j2TjSvGf = 0;
        while (XFzJrDwI6B4G -1 >= j2TjSvGf) {
            {
                iuZNgBeDRTK = 0;
                while (XDn0W67rEX2J -1 >= iuZNgBeDRTK) {
                    c[j2TjSvGf][iuZNgBeDRTK] = 0;
                    iuZNgBeDRTK = iuZNgBeDRTK + 1;
                };
            }
            j2TjSvGf++;
        };
    }
    {
        j2TjSvGf = 0;
        while (j2TjSvGf <= XFzJrDwI6B4G -1) {
            {
                iuZNgBeDRTK = 0;
                while (iuZNgBeDRTK <= XDn0W67rEX2J -1) {
                    for (k = 0; k <= BlZ4cD -1; k = k + 1)
                        c[j2TjSvGf][iuZNgBeDRTK] += uu4KVHN[j2TjSvGf][k] * b[k][iuZNgBeDRTK];
                    iuZNgBeDRTK++;
                };
            }
            j2TjSvGf++;
        };
    }
    {
        j2TjSvGf = 1;
        while (j2TjSvGf <= XFzJrDwI6B4G) {
            {
                iuZNgBeDRTK = 1;
                while (iuZNgBeDRTK <= XDn0W67rEX2J) {
                    if (iuZNgBeDRTK != XDn0W67rEX2J) {
                        printf ("%d ", c[j2TjSvGf - 1][iuZNgBeDRTK - 1]);
                    }
                    else {
                        printf ("%d\n", c[j2TjSvGf - 1][iuZNgBeDRTK - 1]);
                    }
                    iuZNgBeDRTK++;
                };
            }
            j2TjSvGf++;
        };
    }
    return 0;
}

