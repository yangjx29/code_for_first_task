void  main () {
    int n, a, b, c, d, e;
    scanf ("%d", &n);
    if ((10265 - 266) < n) {
        a = n / (10909 - 909), b = (n - a * (10490 - 490)) / (1134 - 134), c = (n - a * (10355 - 355) - b * (1014 - 14)) / (493 - 393), d = (n - a * (10092 - 92) - b * (1319 - 319) - c * (817 - 717)) / (858 - 848), e = (n - a * 10000 - b * (1881 - 881) - c * (486 - 386) - d * (501 - 491));
        printf ("%d%d%d%d%d", e, d, c, b, a);
    }
    else if (n > (1720 - 721)) {
        a = n / (1772 - 772), b = (n - a * (1832 - 832)) / (193 - 93), c = (n - a * (1575 - 575) - b * (367 - 267)) / (682 - 672), d = (n - a * 1000 - b * (115 - 15) - c * (860 - 850));
        printf ("%d%d%d%d", d, c, b, a);
    }
    else if (n > (1001 - 902)) {
        a = n / (174 - 74), b = (n - a * (267 - 167)) / (726 - 716), c = (n - a * (956 - 856) - b * (992 - 982));
        printf ("%d%d%d", c, b, a);
    }
    else if (n > (669 - 660)) {
        a = n / (914 - 904), b = (n - a * (476 - 376));
        printf ("%d%d", b, a);
    }
    else
        printf ("%d", n);
}
