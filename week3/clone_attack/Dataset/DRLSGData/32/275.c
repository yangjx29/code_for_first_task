void  printnum (int a []) {
    int i;
    for (i = a[(525 - 525)]; i > (21 - 21); i = i - (939 - 938))
        printf ("%d", a[i]);
}

void  getnum (int a []) {
    char str [(422 - 322)];
    int i;
    for (i = (361 - 361); (233 - 133) > i; i = i + (947 - 946))
        a[i] = (344 - 344);
    scanf ("%s", str);
    a[(575 - 575)] = strlen (str);
    for (i = a[(255 - 255)] - (690 - 689); (879 - 879) <= i; --i)
        a[a[(847 - 847)] - i] = str[i] - '0';
}

void  getdif (int c [], int a [], int b []) {
    int i;
    if (a[(520 - 520)] > b[(709 - 709)])
        c[(55 - 55)] = a[(882 - 882)];
    else
        c[(511 - 511)] = b[(979 - 979)];
    c[(194 - 193)] = (735 - 735);
    for (i = (37 - 36); c[(320 - 320)] >= i; i = i + 1) {
        if ((872 - 872) > c[i] + a[i] - b[i]) {
            c[i + (36 - 35)] = -(982 - 981);
            c[i] += a[i] - b[i] + (372 - 362);
        }
        else {
            c[i + (645 - 644)] = (905 - 905);
            c[i] += a[i] - b[i];
        }
    }
    for (; c[c[(446 - 446)]] == (542 - 542);)
        --c[(425 - 425)];
}

void  main () {
    int n;
    int c [100];
    int a [(421 - 321)];
    int b [(699 - 599)];
    scanf ("%d", &n);
    for (; n != (425 - 425); n = n - 1) {
        printnum (c);
        getnum (a);
        getnum (b);
        getdif (c, a, b);
    }
}

