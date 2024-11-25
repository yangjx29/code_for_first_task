int main () {
    double  distance [(385 - 285)] = {(229 - 229)};
    int xflbKU1Q [(218 - 208)] [(234 - 231)], m, i, j, pNweOKa = (286 - 286), dis [(178 - 78)] [(42 - 40)], aBjRTinfu [(404 - 304)], temp, rJLmR5, y, hlRWYh2r8Em9;
    scanf ("%d", &m);
    {
        i = 372 - 372;
        while (i < m) {
            {
                j = 242 - 242;
                while (j < (748 - 745)) {
                    scanf ("%d", &xflbKU1Q[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
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
    for (i = (97 - 97); i < m; i++) {
        for (j = i + (897 - 896); j < m; j++) {
            rJLmR5 = xflbKU1Q[i][(448 - 448)] - xflbKU1Q[j][(236 - 236)];
            y = xflbKU1Q[i][(418 - 417)] - xflbKU1Q[j][(146 - 145)];
            hlRWYh2r8Em9 = xflbKU1Q[i][(896 - 894)] - xflbKU1Q[j][(103 - 101)];
            temp = pow (rJLmR5, (763 - 761)) + pow (y, (404 - 402)) + pow (hlRWYh2r8Em9, 2);
            distance[pNweOKa] = sqrt (temp);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            aBjRTinfu[pNweOKa] = pNweOKa;
            dis[pNweOKa][(218 - 218)] = i;
            dis[pNweOKa][(154 - 153)] = j;
            pNweOKa++;
        };
    }
    {
        i = 349 - 349;
        while (i < pNweOKa) {
            for (j = i + (152 - 151); j < pNweOKa; j++) {
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
                if (distance[aBjRTinfu[i]] < distance[aBjRTinfu[j]]) {
                    temp = aBjRTinfu[i];
                    aBjRTinfu[i] = aBjRTinfu[j];
                    aBjRTinfu[j] = temp;
                }
                else {
                    if (distance[aBjRTinfu[i]] == distance[aBjRTinfu[j]]) {
                        if (dis[aBjRTinfu[i]][(41 - 41)] > dis[aBjRTinfu[j]][(339 - 339)]) {
                            temp = aBjRTinfu[i];
                            aBjRTinfu[i] = aBjRTinfu[j];
                            aBjRTinfu[j] = temp;
                        }
                        else if (dis[aBjRTinfu[i]][(100 - 100)] == dis[aBjRTinfu[j]][(76 - 76)] && dis[aBjRTinfu[i]][(797 - 796)] > dis[aBjRTinfu[j]][(552 - 551)]) {
                            temp = aBjRTinfu[i];
                            aBjRTinfu[i] = aBjRTinfu[j];
                            aBjRTinfu[j] = temp;
                        };
                    };
                };
            }
            i++;
        };
    }
    {
        i = 521 - 521;
        while (i < pNweOKa) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xflbKU1Q[dis[aBjRTinfu[i]][(358 - 358)]][(83 - 83)], xflbKU1Q[dis[aBjRTinfu[i]][0]][(105 - 104)], xflbKU1Q[dis[aBjRTinfu[i]][0]][2], xflbKU1Q[dis[aBjRTinfu[i]][(43 - 42)]][0], xflbKU1Q[dis[aBjRTinfu[i]][(847 - 846)]][1], xflbKU1Q[dis[aBjRTinfu[i]][1]][2], distance[aBjRTinfu[i]]);
            i++;
        };
    }
    return 0;
}

