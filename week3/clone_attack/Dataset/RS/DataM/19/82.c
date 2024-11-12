void  main () {
    char str [(381 - 281)], kHtbB4m1I [(446 - 426)], str2 [(200 - 180)], *p, str3 [(249 - 209)] [(955 - 935)], STR [(527 - 427)] = "";
    gets (str);
    int i, qKaPh6, Ch9kAGau, x;
    gets (kHtbB4m1I);
    gets (str2);
    Ch9kAGau = (520 - 520);
    qKaPh6 = (87 - 87);
    {
        p = str;
        while (!('\0' == *p)) {
            str3[qKaPh6][Ch9kAGau] = *p;
            Ch9kAGau++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (!(0 != isalpha (*p) * isalpha (*(p + 1)))) {
                str3[qKaPh6][Ch9kAGau] = '\0';
                Ch9kAGau = 0;
                qKaPh6 = qKaPh6 + 1;
            }
            p++;
        };
    }
    str3[qKaPh6][Ch9kAGau] = '\0';
    x = qKaPh6;
    for (i = 0; i <= qKaPh6; i++) {
        if (strcmp (str3[i], kHtbB4m1I) == 0)
            strcpy (str3[i], str2);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        i = 0;
        while (i <= qKaPh6) {
            strcat (STR, str3[i]);
            i++;
        };
    }
    printf ("%s", STR);
}

