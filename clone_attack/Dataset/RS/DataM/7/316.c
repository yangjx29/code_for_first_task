void  main () {
    char temp [260];
    char str [260];
    char sub [260];
    char rpl [260];
    int lenstr;
    int lensub;
    int lenrpl;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s %s %s", &str, &sub, &rpl);
    lenstr = strlen (str);
    str[lenstr] = '\0';
    lensub = strlen (sub);
    sub[lensub] = '\0';
    {
        i = 261 - 261;
        while (lenstr - lensub + 1 > i) {
            {
                j = 0;
                while (lensub > j) {
                    temp[j] = str[i + j];
                    j++;
                };
            }
            temp[j] = '\0';
            if (!(0 != strcmp (temp, sub)))
                break;
            i++;
        };
    }
    lenrpl = strlen (rpl);
    rpl[lenrpl] = '\0';
    if (i != lenstr - lensub + 1) {
        for (j = 0; j < lenrpl; j++)
            str[i + j] = rpl[j];
    }
    printf ("%s\n", str);
}

