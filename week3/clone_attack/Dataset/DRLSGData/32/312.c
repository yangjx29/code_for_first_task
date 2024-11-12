void  main () {
    char str2 [(850 - 750)] [100];
    char str1 [(876 - 776)] [(750 - 650)];
    int n, i, j, l1 [(266 - 166)], l2 [(882 - 782)];
    scanf ("%d", &n);
    for (i = (741 - 741); n > i; i = i + (710 - 709)) {
        scanf ("%s", str1[i]);
        scanf ("%s", str2[i]);
    }
    for (i = (969 - 969); i < n; i = i + (481 - 480)) {
        l1[i] = strlen (str1[i]);
        l2[i] = strlen (str2[i]);
        for (j = (906 - 905); l2[i] + (701 - 700) > j; j = j + (628 - 627)) {
            if (str1[i][l1[i] - j] >= str2[i][l2[i] - j])
                str1[i][l1[i] - j] = str1[i][l1[i] - j] - str2[i][l2[i] - j] + (1034 - 986);
            else {
                str1[i][l1[i] - j - (743 - 742)] = str1[i][l1[i] - j - (108 - 107)] - (700 - 699);
                str1[i][l1[i] - j] = str1[i][l1[i] - j] + (61 - 51) - str2[i][l2[i] - j] + (939 - 891);
            }
        }
    }
    for (i = (704 - 704); i < n; i = i + (824 - 823)) {
        printf ("%s\n", str1[i]);
    }
}

