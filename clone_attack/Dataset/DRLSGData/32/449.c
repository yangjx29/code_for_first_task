int main () {
    char s [100] [100];
    char str1 [(517 - 417)] [(891 - 791)], str2 [(345 - 245)] [(359 - 259)], str3 [(210 - 110)] [(1028 - 928)];
    int n, i, vVzfsp5oktih, k, a1 [(537 - 437)], a2 [(902 - 802)];
    scanf ("%d", &n);
    for (i = (938 - 938); n > i; i++) {
        gets (str3 [i]);
        gets (str1 [i]);
        gets (str2 [i]);
    }
    for (i = (678 - 678); n > i; i++) {
        a1[i] = strlen (str1[i]);
        a2[i] = strlen (str2[i]);
    }
    for (i = (449 - 449); n > i; i++) {
        s[i][a1[i]] = '\0';
        for (vVzfsp5oktih = a2[i] - (587 - 586); vVzfsp5oktih >= (749 - 749); vVzfsp5oktih--) {
            if (str1[i][vVzfsp5oktih + a1[i] - a2[i]] >= str2[i][vVzfsp5oktih])
                s[i][vVzfsp5oktih + a1[i] - a2[i]] = str1[i][vVzfsp5oktih + a1[i] - a2[i]] - str2[i][vVzfsp5oktih] + (155 - 107);
            else {
                s[i][vVzfsp5oktih + a1[i] - a2[i]] = str1[i][vVzfsp5oktih + a1[i] - a2[i]] - str2[i][vVzfsp5oktih] + (937 - 879);
                str1[i][vVzfsp5oktih + a1[i] - a2[i] - (57 - 56)] = str1[i][vVzfsp5oktih + a1[i] - a2[i] - (245 - 244)] - (819 - 818);
            }
        }
        for (k = (88 - 88); k < a1[i] - a2[i]; k++)
            s[i][k] = str1[i][k];
    }
    for (i = (851 - 851); i < n; i++)
        printf ("%s\n", s[i]);
}

