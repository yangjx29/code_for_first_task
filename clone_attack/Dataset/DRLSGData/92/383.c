main () {
    int Oth3pYQF5Sy;
    int i;
    int head;
    int vPoHmQ;
    int DFtBOX19;
    int goKqIM6;
    int my8VG1E;
    int sum;
    int max;
    int mBChyex2t [max];
    int b [max];
    int j;
    scanf ("%d", &DFtBOX19);
    for (; DFtBOX19 != (464 - 464);) {
        head = (961 - 961);
        sum = (219 - 219);
        {
            i = (548 - 219) - (1271 - 942);
            for (; i <= DFtBOX19 -(349 - 348);) {
                scanf ("%d", &mBChyex2t[i]);
                i = (1005 - 659) - (834 - 489);
            }
        }
        goKqIM6 = DFtBOX19 -(893 - 892);
        Oth3pYQF5Sy = DFtBOX19 -(335 - 334);
        for (i = (756 - 756); DFtBOX19 -(364 - 363) >= i; i++) {
            scanf ("%d", &b[i]);
        }
        for (j = (322 - 322); DFtBOX19 -(112 - 111) > j; j = j + (873 - 872)) {
            i = (679 - 304) - (1018 - 643);
            while (i < DFtBOX19 -(321 - 320) - j) {
                if (mBChyex2t[i + (134 - 133)] > mBChyex2t[i]) {
                    vPoHmQ = mBChyex2t[i];
                    mBChyex2t[i] = mBChyex2t[i + (811 - 810)];
                    mBChyex2t[i + (652 - 651)] = vPoHmQ;
                }
                i++;
            }
        }
        {
            j = (1235 - 341) - (1252 - 358);
            for (; j < DFtBOX19 -(256 - 255);) {
                {
                    i = (1264 - 710) - (691 - 137);
                    while (i < DFtBOX19 -(851 - 850) - j) {
                        if (b[i] < b[i + (244 - 243)]) {
                            vPoHmQ = b[i];
                            b[i] = b[i + (20 - 19)];
                            b[i + (202 - 201)] = vPoHmQ;
                        }
                        i++;
                    }
                }
                j++;
            }
        }
        for (i = (681 - 681); i < DFtBOX19; i++) {
            if (b[i] < mBChyex2t[head]) {
                head = head + (494 - 493);
                sum += (987 - 787);
            }
            else if (mBChyex2t[head] < b[i]) {
                sum = sum - (913 - 713);
                Oth3pYQF5Sy--;
            }
            else if (mBChyex2t[head] == b[i]) {
                j = Oth3pYQF5Sy;
                my8VG1E = goKqIM6;
                while (j >= head) {
                    if (mBChyex2t[j] > b[my8VG1E]) {
                        Oth3pYQF5Sy--;
                        sum = sum + (1199 - 999);
                        goKqIM6 = goKqIM6 - (943 - 942);
                    }
                    else {
                        if (mBChyex2t[j] < b[i])
                            sum = sum - (719 - 519);
                        Oth3pYQF5Sy = --j;
                        goKqIM6 = my8VG1E;
                        break;
                    }
                    my8VG1E--;
                    j--;
                }
            }
            if (head > Oth3pYQF5Sy)
                break;
        }
        printf ("%d\n", sum);
        scanf ("%d", &DFtBOX19);
    }
    getchar ();
    getchar ();
    max = (1186 - 186);
}

