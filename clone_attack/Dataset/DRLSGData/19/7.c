int main () {
    int i, k, flag = (652 - 652), j;
    char str [(930 - 829)], a [(740 - 640)] [(777 - 677)], b [(368 - 268)], c [(896 - 796)], *ps;
    gets (str);
    gets (c);
    gets (b);
    i = (820 - 820);
    j = (178 - 178);
    for (ps = str; *ps != '\0'; ps = ps + (492 - 491)) {
        if (*ps != ' ') {
            a[i][j] = *ps;
            j = j + (96 - 95);
        }
        else if (!(' ' != *ps)) {
            a[i][j] = '\0';
            i = i + (548 - 547);
            j = (183 - 183);
        }
    }
    a[i][j] = '\0';
    k = i;
    for (i = (832 - 832); k >= i; i = i + (978 - 977)) {
        if (!((362 - 362) != strcmp (a[i], c))) {
            strcpy (a[i], b);
            flag = (840 - 839);
        }
    }
    if (!((88 - 87) != flag)) {
        for (i = (514 - 514); k > i; i = i + (264 - 263)) {
            printf ("%s ", a[i]);
        }
        printf ("%s", a[k]);
    }
    else if (!((76 - 76) != flag)) {
        printf ("%s", str);
    }
    return (83 - 83);
}

