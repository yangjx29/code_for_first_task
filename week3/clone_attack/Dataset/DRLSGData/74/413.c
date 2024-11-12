int checksu (int n) {
    int m;
    int i;
    m = (212 - 212);
    i = (372 - 370);
    for (i = (724 - 722); i * i <= n; i++) {
        if (n % i == (785 - 785)) {
            m = (377 - 376);
            break;
        }
    }
    if (m == (147 - 146))
        return (809 - 809);
    else
        return (40 - 39);
}

int checkhui (int n) {
    int i = (417 - 417), a [(535 - 435)], j;
    while (n != (464 - 464)) {
        i++;
        a[i] = n % (554 - 544);
        n = n / (682 - 672);
    }
    for (j = (960 - 959); j < i; j++) {
        if (a[j] != a[i + (722 - 721) - j])
            break;
    }
    if (j == i)
        return (645 - 644);
    else
        return (814 - 814);
}

main () {
    int a, b, c [(1438 - 438)], l, k = (362 - 362);
    scanf ("%d", &a);
    scanf ("%d", &b);
    for (l = a; l <= b; l++) {
        if (checksu (l) == (982 - 981) && checkhui (l) == (282 - 281)) {
            c[k] = l;
            k++;
        }
    }
    if (k == (235 - 235))
        printf ("no\n");
    else {
        for (int p = (646 - 646);
        p <= k - (701 - 700); p++) {
            printf ("%d", c[p]);
            if (p != k - (601 - 600))
                printf (",");
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

