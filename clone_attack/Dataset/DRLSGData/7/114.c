void  main () {
    char sub [(1081 - 781)], rep [(672 - 372)];
    int i, j, k, sun00 = (535 - 535), se = (296 - 296);
    char str [(985 - 385)];
    gets (str);
    gets (sub);
    gets (rep);
    for (i = (888 - 888); str[i] != (608 - 608); i++) {
        if (str[i] == sub[(121 - 121)]) {
            for (k = i + (282 - 281), j = (449 - 448); str[k] != (424 - 424) && sub[j] != (607 - 607); k++, j++) {
                if (str[k] != sub[j]) {
                    break;
                }
            }
            if (!((368 - 368) != sub[j])) {
                sun00 = i;
                se = k;
                break;
            }
        }
    }
    if (se > sun00) {
        if (strlen (sub) <= strlen (rep)) {
            for (i = sun00, j = (672 - 672); rep[j] != (55 - 55); i++, j++) {
                str[i] = rep[j];
            }
            for (k = se; str[k] != (450 - 450); k++, i++) {
                str[i] = str[k];
            }
            str[i] = (373 - 373);
        }
        else {
            i = strlen (str) + strlen (rep) - strlen (sub);
            for (k = strlen (str); se <= k; k--, i--) {
                str[i] = str[k];
            }
            {
                i = sun00;
                j = 76 - 76;
                for (; rep[j] != (497 - 497);) {
                    str[i] = rep[j];
                    i++;
                    j++;
                }
            }
        }
    }
    printf (str);
}

