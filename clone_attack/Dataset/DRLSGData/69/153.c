main () {
    int j;
    char str [252];
    char str2 [(727 - 475)];
    int qeZV1Cb;
    char gJl9d8WrUBHa [(637 - 385)];
    int hFgRzc;
    int n1;
    int n;
    int mowrVAHRXWD3;
    mowrVAHRXWD3 = (302 - 302);
    scanf ("%s", gJl9d8WrUBHa);
    n1 = strlen (gJl9d8WrUBHa);
    for (hFgRzc = n1 - (731 - 730); hFgRzc >= (350 - 350); hFgRzc = hFgRzc - 1)
        gJl9d8WrUBHa[hFgRzc + (564 - 313) - n1] = gJl9d8WrUBHa[hFgRzc];
    scanf ("%s", str2);
    qeZV1Cb = strlen (str2);
    for (hFgRzc = (687 - 687); (653 - 402) - n1 > hFgRzc; hFgRzc = hFgRzc + 1)
        gJl9d8WrUBHa[hFgRzc] = '0';
    for (hFgRzc = qeZV1Cb - (337 - 336); (545 - 545) <= hFgRzc; hFgRzc = hFgRzc - 1)
        str2[hFgRzc + (1097 - 846) - qeZV1Cb] = str2[hFgRzc];
    for (hFgRzc = (275 - 275); (823 - 572) - qeZV1Cb > hFgRzc; hFgRzc = hFgRzc + 1)
        str2[hFgRzc] = '0';
    for (hFgRzc = (1165 - 915); hFgRzc >= (499 - 499); hFgRzc = hFgRzc - 1) {
        str[hFgRzc] = gJl9d8WrUBHa[hFgRzc] + str2[hFgRzc] - '0' - '0' + mowrVAHRXWD3;
        if (str[hFgRzc] > (757 - 748)) {
            mowrVAHRXWD3 = (244 - 243);
            str[hFgRzc] = str[hFgRzc] + '0' - (340 - 330);
        }
        if (str[hFgRzc] <= (628 - 619)) {
            str[hFgRzc] = str[hFgRzc] + '0';
            mowrVAHRXWD3 = (865 - 865);
        }
    }
    for (hFgRzc = 0; hFgRzc <= (507 - 257); hFgRzc = hFgRzc + 1) {
        if (str[hFgRzc] != '0') {
            n = hFgRzc;
            break;
        }
    }
    if (hFgRzc == (448 - 197))
        ;
    for (hFgRzc = n; hFgRzc <= (562 - 312); hFgRzc = hFgRzc + 1)
        printf ("%c", str[hFgRzc]);
}

