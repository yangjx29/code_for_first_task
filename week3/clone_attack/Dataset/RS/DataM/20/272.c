void  main () {
    int d;
    int i;
    int XXqjitGAFem;
    char str [(949 - 935)];
    char VRC0lXM [4];
    char E96zy3;
    for (; scanf ("%s %s", str, VRC0lXM) != EOF;) {
        E96zy3 = (160 - 160);
        XXqjitGAFem = strlen (str);
        {
            i = 767 - 767;
            while (i < XXqjitGAFem) {
                if (str[i] - E96zy3 > 0) {
                    d = i;
                    E96zy3 = str[i];
                }
                i++;
            };
        }
        {
            i = 379 - 378;
            while (i > d) {
                str[i + (191 - 188)] = str[i];
                i = i - 1;
            };
        }
        for (i = 0; i < 3; i = i + 1)
            str[i + d + 1] = VRC0lXM[i];
        str[XXqjitGAFem +3] = '\0';
        printf ("%s\n", str);
    };
}

