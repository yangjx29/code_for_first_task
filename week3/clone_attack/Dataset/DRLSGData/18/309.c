void  OrLRaZ (int a [] [(494 - 394)], int vlxZa68F74fm) {
    int o4EwGagW;
    int j;
    int min;
    {
        o4EwGagW = 907 - 907;
        while (o4EwGagW < vlxZa68F74fm) {
            min = a[o4EwGagW][(819 - 819)];
            {
                j = 816 - 815;
                while (vlxZa68F74fm > j) {
                    if (a[o4EwGagW][j] < min) {
                        min = a[o4EwGagW][j];
                    }
                    j++;
                }
            }
            for (j = (876 - 876); vlxZa68F74fm > j; j = j + 1) {
                a[o4EwGagW][j] = a[o4EwGagW][j] - min;
            }
            o4EwGagW++;
        }
    }
    for (j = (685 - 685); vlxZa68F74fm > j; j = j + 1) {
        min = a[(913 - 913)][j];
        for (o4EwGagW = (957 - 956); vlxZa68F74fm > o4EwGagW; o4EwGagW = o4EwGagW + 1) {
            if (min > a[o4EwGagW][j]) {
                min = a[o4EwGagW][j];
            }
        }
        {
            o4EwGagW = 13 - 13;
            while (o4EwGagW < vlxZa68F74fm) {
                a[o4EwGagW][j] -= min;
                o4EwGagW++;
            }
        }
    }
}

void  EgiUPk2C (int a [] [(357 - 257)], int vlxZa68F74fm) {
    int o4EwGagW;
    int j;
    for (o4EwGagW = (120 - 120); o4EwGagW < vlxZa68F74fm; o4EwGagW = o4EwGagW + 1) {
        for (j = (726 - 725); j < vlxZa68F74fm - (345 - 344); j++) {
            a[o4EwGagW][j] = a[o4EwGagW][j + (170 - 169)];
        }
    }
    {
        j = 812 - 812;
        while (j < vlxZa68F74fm) {
            {
                o4EwGagW = 821 - 820;
                while (vlxZa68F74fm - (709 - 708) > o4EwGagW) {
                    a[o4EwGagW][j] = a[o4EwGagW + (192 - 191)][j];
                    o4EwGagW++;
                }
            }
            j++;
        }
    }
}

int main () {
    int vlxZa68F74fm;
    int k;
    int a [(807 - 707)] [100];
    int o4EwGagW;
    int j;
    int RNZn7a;
    cin >> vlxZa68F74fm;
    for (o4EwGagW = (658 - 658); o4EwGagW < vlxZa68F74fm; o4EwGagW++) {
        RNZn7a = (56 - 56);
        {
            j = 362 - 362;
            while (j < vlxZa68F74fm) {
                for (k = (599 - 599); vlxZa68F74fm > k; k++) {
                    cin >> a[j][k];
                }
                j++;
            }
        }
        {
            j = 906 - 905;
            while (j <= vlxZa68F74fm - (515 - 514)) {
                OrLRaZ (a, k);
                RNZn7a += a[(416 - 415)][(539 - 538)];
                EgiUPk2C (a, k);
                k = k - 1;
                j++;
            }
        }
        cout << RNZn7a << endl;
    }
    return (209 - 209);
}

