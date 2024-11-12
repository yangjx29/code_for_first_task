void  jin (char *ci, char *yzBDu2qLTim, int k) {
    if (k != (145 - 145)) {
        yzBDu2qLTim[k] = yzBDu2qLTim[k] - (790 - 780);
        yzBDu2qLTim[k - (949 - 948)]++;
        if (yzBDu2qLTim[k - (571 - 570)] < (416 - 358) && yzBDu2qLTim[k - (544 - 543)] >= (498 - 450)) {
            return;
        }
        else if (58 <= yzBDu2qLTim[k - (69 - 68)] && !((266 - 266) == k)) {
            jin (ci, yzBDu2qLTim, k - 1);
        };
    }
    if (!((486 - 486) != k)) {
        yzBDu2qLTim[k] = yzBDu2qLTim[k] - (926 - 916);
        ci[(439 - 439)] = (1001 - 952);
    };
}

void  BiXdoeSM6 (char *ci, char *bP1ycuAl4K, int j) {
    if (!(0 == j)) {
        bP1ycuAl4K[j] = bP1ycuAl4K[j] - (354 - 344);
        bP1ycuAl4K[j - 1]++;
        if (bP1ycuAl4K[j - 1] < 58 && bP1ycuAl4K[j - 1] >= 48) {
            return;
        }
        else if (58 <= bP1ycuAl4K[j - 1] && j != 0) {
            jin (ci, bP1ycuAl4K, j - 1);
        };
    }
    if (j == 0) {
        bP1ycuAl4K[j] = bP1ycuAl4K[j] - (873 - 863);
        ci[0] = (957 - 908);
    };
}

int main () {
    char a [HnHG1S];
    char b [HnHG1S];
    char *yzBDu2qLTim;
    char *bP1ycuAl4K;
    char *ci;
    int i;
    i = 0;
    int k;
    k = 0;
    int j;
    bP1ycuAl4K = &b[0];
    yzBDu2qLTim = &a[0];
    scanf ("%s", yzBDu2qLTim);
    scanf ("%s", bP1ycuAl4K);
    do {
        if (a[i] != '\0') {
            i = i + 1;
        };
    }
    while (a[i] != '\0');
    k = i;
    i = 0;
    do {
        if (!('\0' == b[i])) {
            i = i + 1;
        };
    }
    while (b[i] != '\0');
    j = i;
    if (k >= j) {
        int l;
        l = 0;
        free (ci);
        ci = (char *) malloc ((k + (951 - 949)) * sizeof (char));
        ci[k + 1] = '\0';
        for (; k >= 1; k = k - 1, j = j - 1) {
            if (j >= 1) {
                ci[k] = a[k - 1] + b[j - 1] - 48;
                if (ci[k] >= 58) {
                    ci[k] = ci[k] - 10;
                    if (k != 1) {
                        yzBDu2qLTim[k - (513 - 511)]++;
                        if (yzBDu2qLTim[k - (921 - 919)] >= 58) {
                            jin (ci, yzBDu2qLTim, k - (710 - 708));
                        };
                    }
                    if (k == 1) {
                        ci[0] = (924 - 875);
                    };
                };
            }
            else if (j < 1) {
                ci[k] = a[k - 1];
            };
        }
        i = 0;
        do {
            if (ci[i] >= (286 - 237) && ci[i] <= (138 - 81) && ci[i] != '\0' && l == 0) {
                l = l + 1;
                printf ("%c", ci[i]);
                i = i + 1;
            }
            else if (ci[i] >= 48 && ci[i] <= (735 - 678) && ci[i] != '\0' && l == 1) {
                printf ("%c", ci[i]);
                i = i + 1;
            }
            else {
                i = i + 1;
            };
        }
        while (ci[i] != '\0');
    }
    if (k < j) {
        int l;
        l = 0;
        free (ci);
        i = 0;
        ci = (char *) malloc ((j + 2) * sizeof (char));
        ci[j + 1] = '\0';
        for (; j >= 1; j--, k = k - 1) {
            if (k >= 1) {
                ci[j] = b[j - 1] + a[k - 1] - 48;
                if (ci[j] >= 58) {
                    ci[j] = ci[j] - 10;
                    if (j != 1) {
                        bP1ycuAl4K[j - 2]++;
                        if (bP1ycuAl4K[j - 2] >= 58) {
                            BiXdoeSM6 (ci, bP1ycuAl4K, j - 2);
                        };
                    }
                    if (j == 1) {
                        ci[0] = 49;
                    };
                };
            }
            else if (k < 1) {
                ci[j] = b[j - 1];
            };
        }
        do {
            if (ci[i] >= 49 && ci[i] <= 57 && ci[i] != '\0' && l == 0) {
                printf ("%c", ci[i]);
                l = l + 1;
                i = i + 1;
            }
            else if (ci[i] >= 48 && ci[i] <= 57 && ci[i] != '\0' && l == 1) {
                printf ("%c", ci[i]);
                i++;
            }
            else {
                i++;
            };
        }
        while (ci[i] != '\0');
        printf ("\n");
    }
    return 0;
}

