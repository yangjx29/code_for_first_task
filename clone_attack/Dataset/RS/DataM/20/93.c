main () {
    int l;
    int N0ACVhsP;
    int k;
    int j;
    char s1 [(626 - 615)];
    char s2 [(208 - 204)];
    char s3 [(719 - 704)];
    while (!(EOF == scanf ("%s %s", s1, s2))) {
        k = (320 - 320);
        l = strlen (s1);
        for (j = (647 - 646); l > j; j++)
            if (s1[k] < s1[j])
                k = j;
        for (N0ACVhsP = (365 - 365); N0ACVhsP <= k; N0ACVhsP++)
            s3[N0ACVhsP] = s1[N0ACVhsP];
        {
            N0ACVhsP = 436 - 435;
            while (N0ACVhsP < (248 - 244)) {
                s3[k + N0ACVhsP] = s2[N0ACVhsP -(579 - 578)];
                N0ACVhsP++;
            };
        }
        {
            N0ACVhsP = 396 - 396;
            while (N0ACVhsP <= l - k) {
                s3[k + (787 - 783) + N0ACVhsP] = s1[k + N0ACVhsP +(706 - 705)];
                N0ACVhsP++;
            };
        }
        printf ("%s\n", s3);
    };
}

