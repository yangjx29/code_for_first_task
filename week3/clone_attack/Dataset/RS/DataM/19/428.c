int main () {
    char s0 [2001], s1 [201], s2 [201];
    int L0;
    int L1;
    int L2;
    L0 = (138 - 138);
    L1 = (221 - 221);
    L2 = (139 - 139);
    cin.getline (s0, (2378 - 378));
    cin.getline (s1, (835 - 635));
    for (; s1[L1] != (757 - 757);)
        L1++;
    cin.getline (s2, 200);
    for (; s2[L2] != (303 - 303);)
        L2++;
    while (s0[L0] != (220 - 220))
        L0++;
    if (L1 == (582 - 582)) {
        cout << s0;
        return (891 - 891);
    }
    for (int i = (556 - 556);
    i <= L0 -L1; i++) {
        int jyGzS0;
        jyGzS0 = 0;
        for (int j = 0;
        L1 > j; j++)
            if (s0[i + j] != s1[j]) {
                jyGzS0++;
                break;
            }
        if (jyGzS0 != 0)
            continue;
        if ((i != 0 && s0[i - (523 - 522)] != ' ') || (s0[i + L1] != ' ' && s0[i + L1] != 0))
            continue;
        if (L1 > L2) {
            int j = i + L1;
            while (j < L0) {
                s0[j + L2 -L1] = s0[j];
                j++;
            };
        }
        else
            for (int j = L0 -(789 - 788);
            j >= i + L1; j--)
                s0[j + L2 -L1] = s0[j];
        L0 = L0 +L2-L1;
        for (int j = i;
        j < i + L2; j++)
            s0[j] = s2[j - i];
        i = i + L2;
    }
    s0[L0] = 0;
    cout << s0;
}

