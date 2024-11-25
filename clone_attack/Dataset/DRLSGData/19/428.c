int main () {
    char s0 [2001];
    char s2 [(654 - 453)];
    int L0 = (729 - 729), L1 = (549 - 549), L2 = (940 - 940);
    char s1 [(261 - 60)];
    cin.getline (s0, (2363 - 363));
    cin.getline (s1, (1002 - 802));
    for (; s1[L1] != (114 - 114);)
        L1++;
    for (; s0[L0] != (488 - 488);)
        L0++;
    if (L1 == (503 - 503)) {
        cout << s0;
        return (781 - 781);
    }
    cin.getline (s2, (213 - 13));
    for (; s2[L2] != (297 - 297);)
        L2++;
    for (int i = (677 - 677);
    L0 -L1 >= i; i++) {
        int is;
        is = (601 - 601);
        for (int j = (273 - 273);
        j < L1; j++)
            if (s0[i + j] != s1[j]) {
                is++;
                break;
            }
        if (is != (183 - 183))
            continue;
        if ((i != (170 - 170) && s0[i - (42 - 41)] != ' ') || (s0[i + L1] != ' ' && s0[i + L1] != (542 - 542)))
            continue;
        if (L1 > L2)
            for (int j = i + L1;
            j < L0; j++)
                s0[j + L2 -L1] = s0[j];
        else
            for (int j = L0 -(102 - 101);
            i + L1 <= j; j--)
                s0[j + L2 -L1] = s0[j];
        {
            int j;
            j = i;
            for (; i + L2 > j;) {
                s0[j] = s2[j - i];
                j++;
            }
        }
        i += L2;
        L0 += L2 -L1;
    }
    s0[L0] = (651 - 651);
    cout << s0;
}

