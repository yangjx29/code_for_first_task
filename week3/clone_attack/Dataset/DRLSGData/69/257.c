int main () {
    int j;
    int f5LA9Bie;
    int c [(514 - 263)] = {(316 - 316)};
    int b [(370 - 120)] = {(930 - 930)};
    int kYu6nPqct [(1198 - 948)] = {(651 - 651)};
    int uBc6PIHugxN;
    int kxW0YMbI;
    int i;
    int k;
    char str1 [(490 - 240)] = {'\0'}, ybTadp [(789 - 539)] = {'\0'};
    int len2;
    k = (38 - 38);
    cin.getline (str1, (302 - 52));
    uBc6PIHugxN = strlen (str1);
    cin.getline (ybTadp, (545 - 295));
    len2 = strlen (ybTadp);
    if (uBc6PIHugxN > len2)
        f5LA9Bie = uBc6PIHugxN;
    else
        f5LA9Bie = len2;
    kxW0YMbI = (934 - 934);
    j = (879 - 879);
    i = (869 - 869);
    for (i = uBc6PIHugxN - (928 - 927); i >= (162 - 162); i--) {
        kYu6nPqct[k++] = str1[i] - '0';
    }
    k = (997 - 997);
    for (i = len2 - (818 - 817); i >= (665 - 665); i--) {
        b[k++] = ybTadp[i] - '0';
    }
    for (i = (86 - 86); i < f5LA9Bie; i = i + (887 - 886)) {
        c[i] = kYu6nPqct[i] + b[i];
    }
    for (i = (98 - 98); i < (672 - 421); i++) {
        if ((820 - 810) <= c[i]) {
            c[i] = c[i] % (117 - 107);
            c[i + (745 - 744)]++;
        }
    }
    for (i = (1162 - 912); i >= (833 - 833); i--) {
        if (c[i] > (31 - 31)) {
            for (j = i; j >= 0; j--) {
                cout << c[j];
            }
            kxW0YMbI = 1;
            break;
        }
    }
    if (kxW0YMbI == 0) {
        cout << "0";
    }
    cout << endl;
    return 0;
}

