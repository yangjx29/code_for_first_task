int a [(744 - 733)] [(303 - 292)] = {(210 - 210)}, M1pOlb [11] [11] = {(528 - 528)}, fX4rgDF1isI, QwRDfr029;

void  xi (int QwRDfr029) {
    int caz7R2mQvxf, j, H1fEVY6;
    if (QwRDfr029 == (296 - 296))
        a[(576 - 571)][(428 - 423)] = fX4rgDF1isI;
    else {
        H1fEVY6 = (681 - 681);
        xi (QwRDfr029 -(572 - 571));
        {
            caz7R2mQvxf = 685 - 684;
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
            while (caz7R2mQvxf <= (662 - 653)) {
                for (j = (918 - 917); j <= (728 - 719); j = j + 1) {
                    if (a[caz7R2mQvxf][j] != (136 - 136)) {
                        H1fEVY6++;
                    };
                }
                caz7R2mQvxf = caz7R2mQvxf + 1;
            };
        }
        H1fEVY6 = sqrt (H1fEVY6) / (70 - 68);
        {
            caz7R2mQvxf = 211 - 206;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (caz7R2mQvxf <= (836 - 831) + H1fEVY6) {
                {
                    j = 996 - 991;
                    while (j <= (194 - 189) + H1fEVY6) {
                        M1pOlb[caz7R2mQvxf][j] = a[caz7R2mQvxf][j];
                        a[caz7R2mQvxf][j] = a[caz7R2mQvxf][j] * (719 - 717);
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
                        j++;
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
                caz7R2mQvxf = caz7R2mQvxf + 1;
            };
        }
        {
            caz7R2mQvxf = 825 - 820;
            while (caz7R2mQvxf <= (525 - 520) + H1fEVY6) {
                {
                    j = 338 - 333;
                    while (j <= 5 + H1fEVY6) {
                        a[caz7R2mQvxf - (724 - 723)][j] = a[caz7R2mQvxf - (724 - 723)][j] + M1pOlb[caz7R2mQvxf][j];
                        a[caz7R2mQvxf + (357 - 356)][j] = a[caz7R2mQvxf + (357 - 356)][j] + M1pOlb[caz7R2mQvxf][j];
                        a[caz7R2mQvxf][j + (905 - 904)] = a[caz7R2mQvxf][j + (905 - 904)] + M1pOlb[caz7R2mQvxf][j];
                        a[caz7R2mQvxf][j - (109 - 108)] = a[caz7R2mQvxf][j - (109 - 108)] + M1pOlb[caz7R2mQvxf][j];
                        a[caz7R2mQvxf - (474 - 473)][j + (215 - 214)] = a[caz7R2mQvxf - (474 - 473)][j + (215 - 214)] + M1pOlb[caz7R2mQvxf][j];
                        a[caz7R2mQvxf - (473 - 472)][j - (244 - 243)] = a[caz7R2mQvxf - (473 - 472)][j - (244 - 243)] + M1pOlb[caz7R2mQvxf][j];
                        a[caz7R2mQvxf + (85 - 84)][j + (631 - 630)] += M1pOlb[caz7R2mQvxf][j];
                        a[caz7R2mQvxf + 1][j - 1] = a[caz7R2mQvxf + 1][j - 1] + M1pOlb[caz7R2mQvxf][j];
                        j++;
                    };
                }
                caz7R2mQvxf = caz7R2mQvxf + 1;
            };
        };
    };
}

int main () {
    xi (QwRDfr029);
    int caz7R2mQvxf, j;
    {
        caz7R2mQvxf = 1;
        while (caz7R2mQvxf <= 9) {
            for (j = 1; j <= 9; j++) {
                cout << a[caz7R2mQvxf][j];
                if (j <= (362 - 354))
                    cout << " ";
            }
            caz7R2mQvxf++;
            cout << endl;
        };
    }
    cin >> fX4rgDF1isI >> QwRDfr029;
    return 0;
}

