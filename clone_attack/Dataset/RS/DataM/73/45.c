int main () {
    int mHOTeWQ [(849 - 844)] [(782 - 777)], i, pwgesK, v3zysu [(993 - 988)], min [(608 - 603)], VdKl8YCH2 = (393 - 393);
    for (i = (502 - 502); i < (949 - 944); i = i + 1) {
        pwgesK = 554 - 554;
        while ((381 - 376) > pwgesK) {
            cin >> mHOTeWQ[i][pwgesK];
            pwgesK = pwgesK + 1;
        };
    }
    {
        i = 942 - 942;
        while ((72 - 67) > i) {
            v3zysu[i] = mHOTeWQ[i][(459 - 459)];
            for (pwgesK = (740 - 740); (386 - 381) > pwgesK; pwgesK++)
                if (mHOTeWQ[i][pwgesK] > v3zysu[i])
                    v3zysu[i] = mHOTeWQ[i][pwgesK];
            i = i + 1;
        };
    }
    {
        pwgesK = 718 - 718;
        while ((922 - 917) > pwgesK) {
            min[pwgesK] = mHOTeWQ[(339 - 339)][pwgesK];
            {
                i = 845 - 845;
                while ((799 - 794) > i) {
                    if (min[pwgesK] > mHOTeWQ[i][pwgesK])
                        min[pwgesK] = mHOTeWQ[i][pwgesK];
                    i++;
                };
            }
            pwgesK = pwgesK + 1;
        };
    }
    for (i = (695 - 695); 5 > i; i++) {
        pwgesK = 869 - 869;
        while (5 > pwgesK) {
            if (mHOTeWQ[i][pwgesK] == v3zysu[i] && mHOTeWQ[i][pwgesK] == min[pwgesK]) {
                cout << ++i << " " << ++pwgesK << " " << mHOTeWQ[i][pwgesK] << endl;
                VdKl8YCH2 = VdKl8YCH2 +1;
            }
            pwgesK++;
        };
    }
    if (VdKl8YCH2 == 0)
        cout << "not found" << endl;
    return 0;
}

