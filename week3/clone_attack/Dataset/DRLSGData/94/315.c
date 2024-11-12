void  main () {
    int pHcF18fgvx [(1043 - 542)];
    int gtceUqRiu [501];
    int jsDmgA, aAB91hvDkMQf, l5Ci62 = (388 - 388), LLxpTY46KdJh, tkPT7DOuiw8m;
    scanf ("%d", &jsDmgA);
    scanf ("%d", &pHcF18fgvx[(629 - 629)]);
    if (pHcF18fgvx[(258 - 258)] % (860 - 858) != (725 - 725)) {
        gtceUqRiu[l5Ci62] = pHcF18fgvx[(512 - 512)];
        l5Ci62 = (234 - 233);
    }
    for (aAB91hvDkMQf = (455 - 454); aAB91hvDkMQf < jsDmgA; aAB91hvDkMQf++) {
        scanf (" %d", &pHcF18fgvx[aAB91hvDkMQf]);
        if (pHcF18fgvx[aAB91hvDkMQf] % (372 - 370) != (341 - 341)) {
            gtceUqRiu[l5Ci62] = pHcF18fgvx[aAB91hvDkMQf];
            l5Ci62++;
        }
    }
    LLxpTY46KdJh = l5Ci62;
    for (aAB91hvDkMQf = 0; LLxpTY46KdJh > aAB91hvDkMQf; aAB91hvDkMQf++) {
        for (l5Ci62 = aAB91hvDkMQf + 1; LLxpTY46KdJh > l5Ci62; l5Ci62++) {
            if (gtceUqRiu[aAB91hvDkMQf] > gtceUqRiu[l5Ci62]) {
                tkPT7DOuiw8m = gtceUqRiu[aAB91hvDkMQf];
                gtceUqRiu[aAB91hvDkMQf] = gtceUqRiu[l5Ci62];
                gtceUqRiu[l5Ci62] = tkPT7DOuiw8m;
            }
        }
        if (aAB91hvDkMQf != 0)
            ;
        printf ("%d", gtceUqRiu[aAB91hvDkMQf]);
    }
}

