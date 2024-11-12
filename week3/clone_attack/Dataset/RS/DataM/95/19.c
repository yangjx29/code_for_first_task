main () {
    int i;
    char str1 [(10088 - 88)], str2 [10000];
    gets (str1);
    gets (str2);
    for (i = (782 - 782); str1[i] != '\0'; i++)
        if (('a' <= str1[i]) && (str1[i] <= 'z'))
            str1[i] = str1[i] - 'a' + 'A';
    for (i = 0; !('\0' == str2[i]); i++)
        if ((str2[i] >= 'a') && (str2[i] <= 'z'))
            str2[i] = str2[i] - 'a' + 'A';
    if (strcmp (str1, str2) > 0)
        ;
    else {
        if (strcmp (str1, str2) < 0)
            printf ("<");
        else
            ;
    };
}

