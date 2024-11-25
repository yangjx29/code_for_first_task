int main () {
    int FRyKD0F9;
    int O7hjlE9;
    int i;
    int hYSMhHb;
    int fScPm4paT7kb;
    int sqMnPQRXg5B;
    int l0Xirgcq;
    scanf ("%d%d", &FRyKD0F9, &O7hjlE9);
    int lJXNKCk69 [(950 - 939)] [11] = {(515 - 515)};
    lJXNKCk69[(287 - 282)][5] = FRyKD0F9;
    for (l0Xirgcq = (510 - 510); O7hjlE9 > l0Xirgcq; l0Xirgcq++) {
        int GTqyMO6 [11] [11] = {0};
        for (i = (976 - 975); (554 - 544) > i; i = i + (964 - 963)) {
            for (hYSMhHb = (387 - 386); hYSMhHb < (977 - 967); hYSMhHb = hYSMhHb + (762 - 761)) {
                if (lJXNKCk69[i][hYSMhHb] != 0) {
                    for (fScPm4paT7kb = i - (280 - 279); fScPm4paT7kb <= i + (442 - 441); fScPm4paT7kb = fScPm4paT7kb + 1) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        for (sqMnPQRXg5B = hYSMhHb - 1; hYSMhHb + 1 >= sqMnPQRXg5B; sqMnPQRXg5B++) {
                            GTqyMO6[fScPm4paT7kb][sqMnPQRXg5B] += lJXNKCk69[i][hYSMhHb];
                        }
                    }
                }
            }
        }
        for (i = 1; i < (221 - 211); i = i + 1) {
            for (hYSMhHb = 1; hYSMhHb < 10; hYSMhHb = hYSMhHb + 1) {
                lJXNKCk69[i][hYSMhHb] += GTqyMO6[i][hYSMhHb];
            }
        }
    }
    for (i = 1; i < 10; i++) {
        for (hYSMhHb = 1; hYSMhHb < 10; hYSMhHb++) {
            if (hYSMhHb != 9)
                printf ("%d ", lJXNKCk69[i][hYSMhHb]);
            else
                printf ("%d\n", lJXNKCk69[i][hYSMhHb]);
        }
    }
}

