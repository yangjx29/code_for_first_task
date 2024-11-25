int main () {
    int temp [(217 - 211)];
    double  temp1;
    double  result [(780 - 735)];
    int group [(107 - 62)] [(769 - 763)] = {(764 - 764)};
    int point [(767 - 757)] [(890 - 887)] = {(791 - 791)};
    int pointnum;
    int groupnum;
    int i;
    int j;
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
    int k;
    cin >> pointnum;
    groupnum = pointnum * (pointnum - (70 - 69)) / (716 - 714);
    {
        i = 672 - 672;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pointnum > i) {
            {
                j = 227 - 227;
                while (j < (78 - 75)) {
                    cin >> point[i][j];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 578 - 578;
        while ((255 - 210) > i) {
            result[i] = (865 - 865);
            i = i + 1;
        };
    }
    {
        k = 711 - 711;
        i = 711 - 711;
        while (i < pointnum - (289 - 288)) {
            {
                j = 828 - 827;
                while (pointnum > j) {
                    group[k][(933 - 933)] = point[i][(277 - 277)];
                    group[k][(888 - 887)] = point[i][(333 - 332)];
                    group[k][(920 - 918)] = point[i][(667 - 665)];
                    group[k][(49 - 46)] = point[j][(890 - 890)];
                    group[k][(157 - 153)] = point[j][(450 - 449)];
                    group[k][(894 - 889)] = point[j][(442 - 440)];
                    result[k] = sqrt ((double ) (point[i][(751 - 751)] - point[j][(476 - 476)]) * (point[i][(773 - 773)] - point[j][(199 - 199)]) + (point[i][(264 - 263)] - point[j][(360 - 359)]) * (point[i][(258 - 257)] - point[j][(553 - 552)]) + (point[i][(628 - 626)] - point[j][(235 - 233)]) * (point[i][(560 - 558)] - point[j][(567 - 565)]));
                    j++;
                    k++;
                };
            }
            i++;
        };
    }
    {
        i = 909 - 909;
        while (groupnum - (566 - 565) > i) {
            {
                j = 143 - 143;
                while (j < groupnum - (185 - 184) - i) {
                    if (result[j + 1] > result[j]) {
                        temp1 = result[j];
                        result[j] = result[j + 1];
                        result[j + 1] = temp1;
                        {
                            k = 969 - 969;
                            while ((334 - 328) > k) {
                                temp[k] = group[j][k];
                                k++;
                            };
                        }
                        {
                            k = 134 - 134;
                            while ((238 - 232) > k) {
                                group[j][k] = group[j + 1][k];
                                k++;
                            };
                        }
                        {
                            k = 441 - 441;
                            while ((98 - 92) > k) {
                                group[j + 1][k] = temp[k];
                                k++;
                            };
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; groupnum > i; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", group[i][0], group[i][1], group[i][(283 - 281)], group[i][(939 - 936)], group[i][4], group[i][(363 - 358)], result[i]);
    return 0;
}

