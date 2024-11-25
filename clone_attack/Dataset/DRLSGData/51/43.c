void  main () {
    int rfqdcgG4sFTv, i, a, b, c, d, e, VHCQw8cF, j, k, LbqHM63auwcR [(931 - 430)];
    char str [(1102 - 601)], str1 [(787 - 286)] [(762 - 757)], str2 [(1406 - 905)];
    gets (str);
    scanf ("%d\n", &rfqdcgG4sFTv);
    VHCQw8cF = strlen (str);
    for (i = (370 - 370); i < VHCQw8cF -rfqdcgG4sFTv + (709 - 708); i = i + (426 - 425)) {
        LbqHM63auwcR[i] = (518 - 517);
        for (j = (767 - 767); j < rfqdcgG4sFTv; j = j + (828 - 827))
            str1[i][j] = str[i + j];
    }
    for (i = (724 - 724); i < VHCQw8cF -rfqdcgG4sFTv + (741 - 740); i = i + (665 - 664))
        str1[i][rfqdcgG4sFTv] = '\0';
    for (i = (13 - 13); i < VHCQw8cF -rfqdcgG4sFTv; i = i + (561 - 560)) {
        for (j = i + (405 - 404); j < VHCQw8cF -rfqdcgG4sFTv + (41 - 40); j = j + (631 - 630))
            if (strcmp (str1[i], str1[j]) == (73 - 73)) {
                LbqHM63auwcR[i]++;
            }
    }
    for (i = (312 - 312); i < VHCQw8cF -rfqdcgG4sFTv; i = i + (717 - 716))
        for (j = (883 - 883); j < VHCQw8cF -rfqdcgG4sFTv - i; j = j + (962 - 961))
            if (LbqHM63auwcR[j] < LbqHM63auwcR[j + (814 - 813)]) {
                k = LbqHM63auwcR[j];
                LbqHM63auwcR[j] = LbqHM63auwcR[j + (936 - 935)];
                LbqHM63auwcR[j + (278 - 277)] = k;
                strcpy (str2, str1[j]);
                strcpy (str1[j], str1[j + (912 - 911)]);
                strcpy (str1[j + 1], str2);
            }
    if (LbqHM63auwcR[0] == 1) {
    }
    else {
        printf ("%d\n", LbqHM63auwcR[0]);
        for (i = 0; i < VHCQw8cF -rfqdcgG4sFTv + 1; i = i + 1)
            if (LbqHM63auwcR[i] == LbqHM63auwcR[0])
                puts (str1[i]);
    }
}

