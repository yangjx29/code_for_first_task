void  main () {
    char words [(462 - 362)] [(805 - 705)] = {(815 - 815)};
    char str [(170 - 70)], a [(243 - 143)], b [100];
    gets (str);
    gets (a);
    gets (b);
    int i = (870 - 870), j = (953 - 953), k = (482 - 482), m = (645 - 645), n = (472 - 472);
    n = strlen (str);
    {
        k = (770 - 770);
        while (n > k) {
            if (str[k] != (849 - 817)) {
                words[i][j] = str[k];
                j++;
            }
            else if (str[k] == (824 - 792)) {
                j = (55 - 55);
                i++;
            }
            k++;
        };
    }
    m = i + (628 - 627);
    {
        i = (765 - 765);
        while (m > i) {
            if (strcmp (words[i], a) == (860 - 860))
                strcpy (words[i], b);
            else
                continue;
            i++;
        };
    }
    {
        i = 0;
        while (i < m - (687 - 686)) {
            printf ("%s ", words[i]);
            i++;
        };
    }
    printf ("%s\n", words[m - (415 - 414)]);
}

