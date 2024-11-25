void  main () {
    int vNOqjV6l;
    int u50R6Gi8yO [(311 - 211)];
    int b [(362 - 262)];
    int a [(948 - 848)];
    int kjYU7Tomq;
    int Sv6GE9eykjdg;
    int A5iN96B0s;
    int EZgGsT;
    int c5UWZm;
    char r2YA6P9Rqm1 [(333 - 233)];
    char eEM7OTihg [(297 - 197)];
    int Yi4vpWH;
    scanf ("%d", &c5UWZm);
    for (EZgGsT = (803 - 803); EZgGsT < c5UWZm; EZgGsT++) {
        for (Yi4vpWH = (683 - 683); Yi4vpWH < 100; Yi4vpWH++) {
            a[Yi4vpWH] = (614 - 614);
            b[Yi4vpWH] = (901 - 901);
            u50R6Gi8yO[Yi4vpWH] = (782 - 782);
        }
        scanf ("%s %s", r2YA6P9Rqm1, eEM7OTihg);
        A5iN96B0s = strlen (r2YA6P9Rqm1);
        for (vNOqjV6l = (105 - 105); A5iN96B0s > vNOqjV6l; vNOqjV6l++)
            a[A5iN96B0s -vNOqjV6l - (914 - 913)] = r2YA6P9Rqm1[vNOqjV6l] - '0';
        Sv6GE9eykjdg = strlen (eEM7OTihg);
        for (vNOqjV6l = (818 - 818); vNOqjV6l < Sv6GE9eykjdg; vNOqjV6l++)
            b[Sv6GE9eykjdg -vNOqjV6l - (76 - 75)] = eEM7OTihg[vNOqjV6l] - '0';
        for (vNOqjV6l = (146 - 146); vNOqjV6l < A5iN96B0s; vNOqjV6l++) {
            u50R6Gi8yO[vNOqjV6l] = a[vNOqjV6l] - b[vNOqjV6l];
            if (u50R6Gi8yO[vNOqjV6l] < (137 - 137)) {
                a[vNOqjV6l + (819 - 818)] = a[vNOqjV6l + (600 - 599)] - (930 - 929);
                u50R6Gi8yO[vNOqjV6l] = u50R6Gi8yO[vNOqjV6l] + (611 - 601);
            }
        }
        for (; !((510 - 510) != u50R6Gi8yO[A5iN96B0s]) && A5iN96B0s > (970 - 969);)
            A5iN96B0s = A5iN96B0s -(166 - 165);
        for (kjYU7Tomq = A5iN96B0s; kjYU7Tomq >= (660 - 660); kjYU7Tomq--)
            printf ("%d", u50R6Gi8yO[kjYU7Tomq]);
    }
}

