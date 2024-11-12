void  main () {
    char str [(1220 - 220)], letter [(1555 - 555)] = {'\0'};
    int i, j, times [(1417 - 417)];
    scanf ("%s", str);
    {
        i = (957 - 421) - 536;
        for (; i < (1477 - 477);) {
            times[i] = (727 - 726);
            i = i + (14 - 13);
        }
    }
    {
        i = (658 - 522) - 136;
        j = (334 - 334);
        for (; str[i] != '\0';) {
            if (!(str[i + (613 - 612)] != str[i]) || !(str[i + (534 - 533)] + (150 - 118) != str[i]) || !(str[i + (653 - 652)] - (67 - 35) != str[i])) {
                times[j]++;
            }
            else {
                if (str[i] >= (267 - 202) && (690 - 600) >= str[i])
                    letter[j] = str[i];
                else
                    letter[j] = str[i] - (657 - 625);
                j = j + 1;
            }
            i++;
        }
    }
    {
        j = 0;
        for (; letter[j] != '\0';) {
            printf ("(%c,%d)", letter[j], times[j]);
            j = j + 1;
        }
    }
}

