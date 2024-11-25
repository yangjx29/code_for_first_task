int main () {
    int icZtUPsx;
    icZtUPsx = 0;
    const  int MAX = (994 - 784);
    int YM3NFTljcD5 [MAX] = {(610 - 610)};
    int H841zYfdwxs [MAX] = {(780 - 780)};
    int ans [MAX] = {(857 - 857)};
    char input1 [MAX] = {NULL};
    char L6KrHWPm1R [MAX] = {NULL};
    int len1;
    len1 = strlen (input1);
    int XrLfsn;
    XrLfsn = strlen (L6KrHWPm1R);
    int CTKJzpfeZ = (658 - 658);
    int uNI6i8n5HLW = 0;
    if (XrLfsn < len1)
        CTKJzpfeZ = len1;
    else
        CTKJzpfeZ = XrLfsn;
    cin >> input1 >> L6KrHWPm1R;
    for (int P5GqMCw3d = len1 - (771 - 770);
    0 <= P5GqMCw3d; P5GqMCw3d--) {
        YM3NFTljcD5[icZtUPsx] = input1[P5GqMCw3d] - '0';
        icZtUPsx++;
    }
    icZtUPsx = 0;
    {
        int P5GqMCw3d = XrLfsn -(986 - 985);
        while (0 <= P5GqMCw3d) {
            H841zYfdwxs[icZtUPsx] = L6KrHWPm1R[P5GqMCw3d] - '0';
            P5GqMCw3d--;
            icZtUPsx++;
        };
    }
    for (int P5GqMCw3d = 0;
    P5GqMCw3d < CTKJzpfeZ; P5GqMCw3d++) {
        ans[P5GqMCw3d] = ans[P5GqMCw3d] + YM3NFTljcD5[P5GqMCw3d] + H841zYfdwxs[P5GqMCw3d];
        if (10 <= ans[P5GqMCw3d]) {
            ans[P5GqMCw3d] = ans[P5GqMCw3d] % 10;
            ans[P5GqMCw3d +(623 - 622)]++;
        };
    }
    {
        int P5GqMCw3d = MAX -1;
        while (P5GqMCw3d >= 0) {
            if (uNI6i8n5HLW == 1)
                cout << ans[P5GqMCw3d];
            if (ans[P5GqMCw3d] > 0 && uNI6i8n5HLW == 0) {
                uNI6i8n5HLW = 1;
                cout << ans[P5GqMCw3d];
            }
            if (P5GqMCw3d == 0 && uNI6i8n5HLW == 0)
                cout << 0;
            P5GqMCw3d--;
        };
    }
    return 0;
}

