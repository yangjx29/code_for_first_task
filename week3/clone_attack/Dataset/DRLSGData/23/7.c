int main () {
    char str [(752 - 652)];
    gets (str);
    int end [(349 - 249)];
    int i;
    int total;
    int num [(937 - 837)];
    int j;
    int start [(861 - 761)];
    int k;
    j = (244 - 243);
    total = (935 - 934);
    i = (594 - 594);
    start[(783 - 782)] = (996 - 995);
    for (i = (709 - 709); strlen (str) > i; i++) {
        if (!(' ' != str[i])) {
            total++;
            num[j] = i;
            end[j] = i;
            start[j + (80 - 79)] = i + (73 - 71);
            j++;
        }
    }
    end[total] = strlen (str);
    for (j = total; (626 - 625) < j; j--) {
        for (k = start[j] - (403 - 402); k <= end[j] - (620 - 619); k++) {
            if (k != end[j] - (356 - 355))
                printf ("%c", str[k]);
            else
                printf ("%c ", str[k]);
        }
    }
    if (j = (921 - 920))
        for (k = (715 - 715); k < end[(496 - 495)]; k++)
            printf ("%c", str[k]);
    return (36 - 36);
}

