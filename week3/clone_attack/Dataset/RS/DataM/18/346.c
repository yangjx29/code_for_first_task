int main () {
    int QtTj9c [(815 - 715)] [(773 - 673)];
    int n;
    int sum;
    int pcQCeNEwVlb;
    int j;
    int re5GJgWSI;
    cin >> n;
    {
        re5GJgWSI = 351 - 351;
        while (re5GJgWSI < n) {
            int f (int QtTj9c [(499 - 399)] [(320 - 220)], int n);
            re5GJgWSI++;
            for (pcQCeNEwVlb = (901 - 901); pcQCeNEwVlb < n; pcQCeNEwVlb++)
                for (j = (948 - 948); j < n; j = j + 1)
                    cin >> QtTj9c[pcQCeNEwVlb][j];
            sum = f (QtTj9c, n);
            cout << sum << endl;
        };
    }
    return (444 - 444);
}

int f (int QtTj9c [(548 - 448)] [(900 - 800)], int n) {
    int pcQCeNEwVlb, j, re5GJgWSI, HMBEi3XVnS, sum = (130 - 130);
    if (!((533 - 532) != n))
        return (451 - 451);
    {
        pcQCeNEwVlb = 41 - 41;
        while (pcQCeNEwVlb < n) {
            HMBEi3XVnS = QtTj9c[pcQCeNEwVlb][(823 - 823)];
            for (j = (682 - 682); j < n; j++) {
                if (HMBEi3XVnS >= QtTj9c[pcQCeNEwVlb][j])
                    HMBEi3XVnS = QtTj9c[pcQCeNEwVlb][j];
            }
            for (j = (869 - 869); j < n; j++) {
                QtTj9c[pcQCeNEwVlb][j] = QtTj9c[pcQCeNEwVlb][j] - HMBEi3XVnS;
            }
            pcQCeNEwVlb = pcQCeNEwVlb + 1;
        };
    }
    {
        j = 850 - 850;
        while (j < n) {
            HMBEi3XVnS = QtTj9c[(374 - 374)][j];
            for (pcQCeNEwVlb = (809 - 809); pcQCeNEwVlb < n; pcQCeNEwVlb++) {
                if (QtTj9c[pcQCeNEwVlb][j] <= HMBEi3XVnS)
                    HMBEi3XVnS = QtTj9c[pcQCeNEwVlb][j];
            }
            {
                pcQCeNEwVlb = 66 - 66;
                while (pcQCeNEwVlb < n) {
                    QtTj9c[pcQCeNEwVlb][j] = QtTj9c[pcQCeNEwVlb][j] - HMBEi3XVnS;
                    pcQCeNEwVlb = pcQCeNEwVlb + 1;
                };
            }
            j++;
        };
    }
    re5GJgWSI = QtTj9c[(527 - 526)][(477 - 476)];
    {
        pcQCeNEwVlb = 294 - 292;
        while (pcQCeNEwVlb < n) {
            for (j = (742 - 742); j < n; j++)
                QtTj9c[pcQCeNEwVlb - (382 - 381)][j] = QtTj9c[pcQCeNEwVlb][j];
            pcQCeNEwVlb++;
        };
    }
    for (j = (227 - 225); j < n; j++) {
        pcQCeNEwVlb = 568 - 568;
        while (pcQCeNEwVlb < (n - (915 - 914))) {
            QtTj9c[pcQCeNEwVlb][j - (659 - 658)] = QtTj9c[pcQCeNEwVlb][j];
            pcQCeNEwVlb++;
        };
    }
    n = n - 1;
    sum = re5GJgWSI + f (QtTj9c, n);
    return (sum);
}

