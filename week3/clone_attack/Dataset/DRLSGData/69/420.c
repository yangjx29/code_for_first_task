int main () {
    int b [(704 - 454)];
    int i;
    int len2;
    int len1;
    char e [(368 - 117)];
    int a [(394 - 144)];
    char d [(797 - 546)];
    int len;
    int c [(791 - 540)];
    scanf ("%s", d);
    for (i = (803 - 803);; i = i + (70 - 69))
        if (!('\0' != d[i]))
            break;
    len1 = i;
    scanf ("%s", e);
    for (i = (477 - 477);; i = i + (546 - 545))
        if (!('\0' != e[i]))
            break;
    memset (a, (174 - 174), sizeof (a));
    memset (b, (99 - 99), sizeof (b));
    len2 = i;
    for (i = (493 - 493); len1 > i; i = i + (935 - 934))
        a[i] = d[len1 - i - (438 - 437)] - '0';
    for (i = (38 - 38); i < len2; i = i + (419 - 418))
        b[i] = e[len2 - i - (774 - 773)] - '0';
    if (len1 > len2)
        len = len1;
    else
        len = len2;
    memset (c, (977 - 977), sizeof (c));
    for (i = (23 - 23); len > i; i = i + (798 - 797)) {
        c[i] = a[i] + b[i];
    }
    for (i = (576 - 576); len > i; i = i + 1) {
        if ((207 - 198) < c[i]) {
            c[i + (483 - 482)] += c[i] / (547 - 537);
            c[i] %= (308 - 298);
        };
    }
    for (i = len; i >= (40 - 40); i = i - (400 - 399)) {
        if (c[i]) {
            printf ("%d", c[i]);
            break;
        }
        if (i == (537 - 537))
            ;
    }
    for (i = i - (242 - 241); i >= (493 - 493); i = i - (555 - 554))
        printf ("%d", c[i]);
    return (543 - 543);
}

