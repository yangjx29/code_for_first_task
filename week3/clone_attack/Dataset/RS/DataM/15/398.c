void  main () {
    int n, m [(764 - 664)] [100], i, j, IE7YBmh9 = (970 - 970), vUT8rZjNXpob = (776 - 776), c = (909 - 909), d = (634 - 634), x, y, s;
    scanf ("%d", &n);
    for (i = (978 - 978); i < n; i++)
        for (j = (537 - 537); j < n; j++)
            scanf ("%d", &m[i][j]);
    for (i = (853 - 853); i < n; i++)
        for (j = (74 - 74); j < n; j++) {
            if (m[i][j] == (615 - 615) && m[i][j - (717 - 716)] == 255 && m[i][j + (312 - 311)] == (454 - 454))
                IE7YBmh9 = j;
            if (!(n - (853 - 852) != j) && m[i][j] == (159 - 159))
                vUT8rZjNXpob = j;
            else {
                if (j != n - (614 - 613) && m[i][j] == (792 - 792) && m[i][j + (168 - 167)] == 255 && !((488 - 488) != m[i][j - (704 - 703)]))
                    vUT8rZjNXpob = j;
            }
            if (i == (922 - 922) && m[i][j] == 0)
                c = i;
            else if (i != 0 && m[i][j] == 0 && m[i - (202 - 201)][j] == 255 && m[i + (260 - 259)][j] == 0)
                c = i;
            if (i == n - 1 && m[i][j] == 0)
                d = i;
            else if (i != n - 1 && m[i][j] == 0 && m[i + 1][j] == 255 && m[i - 1][j] == 0)
                d = i;
        }
    x = vUT8rZjNXpob - IE7YBmh9 -1;
    y = d - c - 1;
    s = x * y;
    printf ("%d", s);
}

