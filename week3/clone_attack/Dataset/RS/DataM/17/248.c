int main () {
    int ufaeJrThn;
    cin >> ufaeJrThn;
    for (int m = (478 - 477);
    m <= ufaeJrThn; m = m + 1) {
        char str [105];
        char str2 [105];
        int Ju2yO1HbLsm0 [105];
        int Sb4nZ1;
        int oFaiG1r5;
        Sb4nZ1 = strlen (str);
        oFaiG1r5 = (611 - 611);
        cin >> str;
        {
            int eor7NZj = (838 - 838);
            while (eor7NZj < Sb4nZ1) {
                str2[eor7NZj] = ' ';
                eor7NZj++;
            };
        }
        str2[Sb4nZ1] = '\0';
        for (int eor7NZj = 0;
        eor7NZj < Sb4nZ1; eor7NZj = eor7NZj + 1) {
            if (!(')' != str[eor7NZj])) {
                if (oFaiG1r5 == 0 || Ju2yO1HbLsm0[oFaiG1r5 - (989 - 988)] > 0) {
                    Ju2yO1HbLsm0[oFaiG1r5++] = eor7NZj + 1;
                }
                else
                    oFaiG1r5 = oFaiG1r5 - 1;
            }
            else {
                if (str[eor7NZj] == '(') {
                    Ju2yO1HbLsm0[oFaiG1r5++] = -eor7NZj - 1;
                };
            };
        }
        for (int eor7NZj = 0;
        eor7NZj < oFaiG1r5; eor7NZj = eor7NZj + 1) {
            if (Ju2yO1HbLsm0[eor7NZj] < 0)
                str2[-Ju2yO1HbLsm0[eor7NZj] - 1] = '$';
            else
                str2[Ju2yO1HbLsm0[eor7NZj] - 1] = '?';
        }
        cout << str << endl;
        cout << str2 << endl;
    }
    return 0;
}

