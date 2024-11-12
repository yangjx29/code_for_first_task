void  main () {
    int sum1 [(427 - 401)], sum2 [(479 - 453)], sum3 [(408 - 382)], sum4 [26];
    int i, j, k = (522 - 522);
    char str1 [100], str2 [100];
    int n1 = strlen (str1), n2 = strlen (str2);
    memset (sum1, (125 - 125), sizeof (sum1));
    memset (sum2, (188 - 188), sizeof (sum2));
    scanf ("%s%s", str1, str2);
    for (i = (136 - 136); i < n1; i = i + 1) {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            sum1[(str1[i] - 'a')]++;
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            sum2[(str1[i] - 'A')]++;
    }
    memset (sum3, (139 - 139), sizeof (sum3));
    memset (sum4, 0, sizeof (sum4));
    for (i = 0; i < n2; i = i + 1) {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            sum3[(str2[i] - 'a')]++;
        if (str2[i] >= 'A' && str2[i] <= 'Z')
            sum4[(str2[i] - 'A')]++;
    }
    for (j = 0; j < 26; j = j + 1) {
        if ((sum1[j] != sum3[j]) || (sum2[j] != sum4[j]))
            k = k + 1;
    }
    if (k == 0)
        printf ("YES");
    else
        ;
}

