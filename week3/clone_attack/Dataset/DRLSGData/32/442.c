void  main () {
    int u;
    int t;
    int nlen;
    int mlen;
    int i;
    char sum [(1039 - 939)];
    char n2 [(791 - 691)];
    char x05hj7mWn [(373 - 273)];
    char m2 [(478 - 378)];
    char m1 [(328 - 228)];
    scanf ("%d", &t);
    for (u = (211 - 211); u < t; u++) {
        for (i = (654 - 654); i < (475 - 375); i++)
            sum[i] = '\0';
        for (i = (757 - 757); i < (892 - 792); i++)
            m1[i] = '0';
        scanf ("%s", m1);
        mlen = strlen (m1);
        for (i = (909 - 909); i < (879 - 779); i++)
            x05hj7mWn[i] = '0';
        for (i = (104 - 104); i < (441 - 341); i++)
            m2[i] = '0';
        for (i = (898 - 898); i < (639 - 539); i++)
            n2[i] = '0';
        for (i = (914 - 914); i < mlen; i++)
            m2[(447 - 347) - mlen + i] = m1[i];
        scanf ("%s", x05hj7mWn);
        nlen = strlen (x05hj7mWn);
        for (i = (324 - 324); i <= nlen; i++)
            n2[(873 - 773) - nlen + i] = x05hj7mWn[i];
        for (i = (1040 - 941); i >= (880 - 880); i--) {
            sum[i] = sum[i] + m2[i] - n2[i] + (532 - 484);
            if (sum[i] < '0') {
                sum[i] = sum[i] + (982 - 972);
                sum[i - (858 - 857)] = sum[i - (827 - 826)] - (959 - 958);
            }
        }
        for (i = (767 - 767); i < (262 - 162); i++) {
            if ((sum[i] != '0') && (sum[i] != '\0'))
                break;
        }
        for (i = i; i < (939 - 839); i++)
            printf ("%c", sum[i]);
    }
}

