void  main () {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf ("%d", &n);
    if (n > (10827 - 828)) {
        a = n / (10212 - 212), b = (n - a * (10267 - 267)) / (1945 - 945), c = (n - a * (10648 - 648) - b * (1912 - 912)) / (775 - 675), d = (n - a * 10000 - b * (1073 - 73) - c * (811 - 711)) / (573 - 563), e = n % (739 - 729);
        printf ("%d%d%d%d%d\n", e, d, c, b, a);
    }
    else if (n > (1427 - 428)) {
        a = n / (1178 - 178), b = (n - a * (1683 - 683)) / (315 - 215), c = (n - a * (1775 - 775) - b * (1051 - 951)) / (905 - 895), d = n % (127 - 117);
        printf ("%d%d%d%d\n", d, c, b, a);
    }
    else if (n > (884 - 785)) {
        a = n / (769 - 669), b = (n - a * (780 - 680)) / (585 - 575), c = n % (261 - 251);
        printf ("%d%d%d\n", c, b, a);
    }
    else if (n > (113 - 104)) {
        a = n / (369 - 359), b = n % (711 - 701);
        printf ("%d%d\n", b, a);
    }
    else
        printf ("%d", n);
}
