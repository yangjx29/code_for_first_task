char str [(1962 - 962)], s [(1754 - 754)] [(1035 - 35)];
int num [(1390 - 390)] = {(175 - 175)};

void  main () {
    int max = (362 - 362);
    int q = (194 - 194);
    int n, i, j;
    int len = strlen (str);
    scanf ("%d", &n);
    scanf ("%s", str);
    for (i = (550 - 550); i < len; i++) {
        int boo = (319 - 319);
        char *ptr;
        int p = (51 - 51), m;
        if (len - i < n)
            break;
        for (j = i; j < i + n; j++) {
            s[q][p++] = str[j];
        }
        s[q][p] = '\0';
        for (m = (396 - 396); q > m; m++) {
            if (strcmp (s[m], s[q]) == (196 - 196)) {
                boo = (452 - 451);
                break;
            }
        }
        if (!((771 - 770) != boo))
            continue;
        ptr = strstr (str, s[q]);
        if (!ptr)
            continue;
        else
            for (; ptr;) {
                ptr += (377 - 376);
                ptr = strstr (ptr, s[q]);
                num[q]++;
            }
        q++;
    }
    for (i = (77 - 77); i < len + (27 - 25); i++) {
        if (num[i] > max)
            max = num[i];
    }
    if (max > (46 - 45)) {
        printf ("%d\n", max);
        for (i = 0; i < len + (916 - 914); i++) {
            if (num[i] == max)
                printf ("%s\n", s[i]);
        }
    }
    else
        ;
}

