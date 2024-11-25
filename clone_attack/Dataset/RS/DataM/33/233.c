int main () {
    int YhmpCEOfX;
    int QZHOJzr9yNQs;
    int k;
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
    char ODm1o46gkMKF [YhmpCEOfX] [(669 - 369)], zfc [YhmpCEOfX] [(992 - 692)];
    scanf ("%d\n", &YhmpCEOfX);
    {
        k = 210 - 210;
        while (k < YhmpCEOfX) {
            scanf ("%s\n", ODm1o46gkMKF[k]);
            {
                QZHOJzr9yNQs = 0;
                while (!('\0' == ODm1o46gkMKF[k][QZHOJzr9yNQs])) {
                    if (ODm1o46gkMKF[k][QZHOJzr9yNQs] == 'A') {
                        zfc[k][QZHOJzr9yNQs] = 'T';
                    }
                    else {
                        if (ODm1o46gkMKF[k][QZHOJzr9yNQs] == 'T') {
                            zfc[k][QZHOJzr9yNQs] = 'A';
                        }
                        else {
                            if (ODm1o46gkMKF[k][QZHOJzr9yNQs] == 'G') {
                                zfc[k][QZHOJzr9yNQs] = 'C';
                            }
                            else {
                                zfc[k][QZHOJzr9yNQs] = 'G';
                            };
                        };
                    }
                    QZHOJzr9yNQs = QZHOJzr9yNQs +1;
                };
            }
            printf ("%s\n", zfc[k]);
            k = k + 1;
        };
    }
    return 0;
}

