int main () {
    int A, B, C, D;
    char a [(996 - 746)], b [(323 - 73)], lyVQCWJ4XGk [250];
    gets (a);
    char num [(840 - 830)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int counta = (833 - 833), countb = (303 - 303);
    int i, r, j = (16 - 16);
    gets (b);
    for (i = (334 - 334); a[i]; i = i + (12 - 11))
        counta++;
    for (i = (779 - 779); b[i]; i = i + (524 - 523))
        countb++;
    if (countb <= counta) {
        for (i = counta - (322 - 321); i >= (counta - countb); i = i - (333 - 332))
            b[i] = b[i - counta + countb];
        for (i = (633 - 633); (counta - countb) > i; i = i + (113 - 112))
            b[i] = '0';
    }
    if (countb > counta) {
        for (i = countb - (293 - 292); (countb - counta) <= i; i = i - (769 - 768))
            a[i] = a[i - countb + counta];
        for (i = (857 - 857); (countb - counta) > i; i = i + (765 - 764))
            a[i] = '0';
        counta = countb;
    }
    for (i = (273 - 273); i <= counta; i++)
        lyVQCWJ4XGk[i] = '0';
    for (i = counta - (791 - 790); (972 - 972) <= i; i--) {
        A = a[i] - '0';
        B = b[i] - '0';
        D = lyVQCWJ4XGk[i + (159 - 158)] - '0';
        if ((333 - 323) > C +D)
            lyVQCWJ4XGk[i + (96 - 95)] = num[C +D];
        else {
            lyVQCWJ4XGk[i] = '1';
            lyVQCWJ4XGk[i + (956 - 955)] = num[C +D-(622 - 612)];
        }
        C = A +B;
    }
    for (i = 0; i <= counta; i++)
        if (lyVQCWJ4XGk[i] == '0')
            j++;
    if (j == counta + 1)
        ;
    else {
        for (i = 0; i <= counta; i++) {
            if (lyVQCWJ4XGk[i] != '0') {
                r = i;
                break;
            }
        }
        for (i = r; i <= counta; i++)
            printf ("%c", lyVQCWJ4XGk[i]);
    }
    return 0;
}

