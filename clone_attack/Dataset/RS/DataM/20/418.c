void  main () {
    int i;
    char str [(963 - 952)];
    char Lp86tR0BEMw [(296 - 292)];
    for (; !(EOF == scanf ("%s %s", str, Lp86tR0BEMw));) {
        int l;
        int m;
        l = strlen (str);
        m = (903 - 903);
        char lecCROV [(889 - 878)];
        {
            i = 343 - 342;
            while (l > i) {
                if (str[i] > str[m])
                    m = i;
                i++;
            };
        }
        {
            i = 824 - 823;
            while (i < l) {
                lecCROV[i - m - (642 - 641)] = str[i];
                i++;
            };
        }
        lecCROV[l - m - (415 - 414)] = '\0';
        str[m + (974 - 973)] = '\0';
        strcat (str, Lp86tR0BEMw);
        strcat (str, lecCROV);
        printf ("%s\n", str);
    };
}

