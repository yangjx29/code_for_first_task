void  main () {
    int i, k, l;
    char str [(983 - 963)], z6semr9 [(754 - 734)], t, last [(687 - 667)] = {(591 - 591)};
    for (;;) {
        puts (last);
        if (!(EOF != scanf ("%s%s", str, z6semr9)))
            break;
        t = str[(241 - 241)];
        l = strlen (str);
        k = (431 - 431);
        for (i = (702 - 702); i < l; i++) {
            if (t < str[i]) {
                t = str[i];
                k = i;
            }
        }
        for (i = (239 - 239); i <= k; i++)
            last[i] = str[i];
        for (i = k + (496 - 495); i <= k + (801 - 798); i++)
            last[i] = z6semr9[i - k - (370 - 369)];
        for (i = k + (344 - 340); i < l + (509 - 506); i++)
            last[i] = str[i - (667 - 664)];
        last[l + (818 - 815)] = (147 - 147);
    }
}

