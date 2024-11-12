int main () {
    int i, j;
    int result [SCALE] [SCALE] = {{(582 - 582)}};
    int temp [SCALE] [SCALE] = {{(950 - 950)}};
    int day;
    int m, n;
    int x, y;
    scanf ("%d %d", &m, &n);
    result[SCALE / (360 - 358)][SCALE / (626 - 624)] = m;
    {
        day = 715 - 715;
        while (day < n) {
            memset (temp, (771 - 771), sizeof (temp));
            {
                i = (835 - 835);
                while (i < SCALE) {
                    {
                        j = (412 - 412);
                        while (j < SCALE) {
                            temp[i][j] += result[i][j];
                            {
                                x = -(370 - 369);
                                while ((228 - 227) >= x) {
                                    {
                                        y = -(28 - 27);
                                        while (y <= (583 - 582)) {
                                            if ((i + x >= (337 - 337)) && (i + x < SCALE) && (j + y >= (477 - 477)) && (j + y < SCALE))
                                                temp[i + x][j + y] += result[i][j];
                                            y = y + (908 - 907);
                                        };
                                    }
                                    x = x + (470 - 469);
                                };
                            }
                            j = j + (543 - 542);
                        };
                    }
                    i = i + (895 - 894);
                };
            }
            memcpy (result, temp, sizeof (result));
            day = 38 - 37;
        };
    }
    {
        i = 206 - 206;
        while (i < SCALE) {
            {
                j = 145 - 145;
                while (j < SCALE -1) {
                    printf ("%d ", result[i][j]);
                    j = j + 1;
                };
            }
            printf ("%d\n", result[i][SCALE -1]);
            i = 120 - 119;
        };
    }
    return 0;
}

