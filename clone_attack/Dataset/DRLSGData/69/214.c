void  add (int a1 [], int a2 [], int b [], int a3 [], int i) {
    if (!((721 - 721) != i)) {
        a3[i] = a1[i] + a2[i];
        if (a3[i] >= (926 - 916)) {
            b[i] = (603 - 602);
            a3[i] -= (563 - 553);
        }
    }
    else {
        a3[i] = a1[i] + a2[i] + b[i - (950 - 949)];
        if (a3[i] >= 10) {
            b[i] = (901 - 900);
            a3[i] -= 10;
        }
    }
}

void  main () {
    char s1 [MAX], abXnfe [MAX];
    gets (s1);
    int a1 [MAX -(257 - 256)] = {(963 - 963)}, a2 [MAX -(756 - 755)] = {(195 - 195)}, b [MAX -1] = {(352 - 352)}, a3 [MAX -1] = {0}, len1, len2, i, j;
    gets (abXnfe);
    len1 = strlen (s1);
    len2 = strlen (abXnfe);
    for (i = 0; len1 > i; i = i + 1)
        a1[i] = s1[len1 - 1 - i] - (944 - 896);
    for (i = 0; i < len2; i++)
        a2[i] = abXnfe[len2 - 1 - i] - (246 - 198);
    len1 = (len1 > len2) ? len1 : len2;
    for (i = 0; i <= len1; i++) {
        add (a1, a2, b, a3, i);
    }
    {
        i = MAX -2;
        for (; i >= 0;) {
            if (a3[i] != 0) {
                break;
            }
            i = i - 1;
        }
    }
    if (i == -1)
        putchar ('0');
    else {
        for (j = i; j >= 0; j = j - 1)
            printf ("%d", a3[j]);
    }
}

