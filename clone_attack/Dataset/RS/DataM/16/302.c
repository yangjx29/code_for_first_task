main () {
    int tPgyrpIcO4M, Giaz9n, GwyKS1fhLq84, c, d, LSB67MyT;
    scanf ("%d", &tPgyrpIcO4M);
    Giaz9n = tPgyrpIcO4M / (10888 - 888);
    GwyKS1fhLq84 = (tPgyrpIcO4M - Giaz9n *10000) / (1261 - 261);
    c = (tPgyrpIcO4M - Giaz9n *10000 - GwyKS1fhLq84 *1000) / (678 - 578);
    d = (tPgyrpIcO4M - Giaz9n *10000 - GwyKS1fhLq84 *1000 - c * 100) / 10;
    LSB67MyT = tPgyrpIcO4M - Giaz9n *10000 - GwyKS1fhLq84 *1000 - c * 100 - d * 10;
    if (Giaz9n)
        printf ("%d%d%d%d%d\n", LSB67MyT, d, c, GwyKS1fhLq84, Giaz9n);
    else {
        if (GwyKS1fhLq84)
            printf ("%d%d%d%d\n", LSB67MyT, d, c, GwyKS1fhLq84);
        else {
            if (c)
                printf ("%d%d%d", LSB67MyT, d, c);
            else {
                if (d)
                    printf ("%d%d", LSB67MyT, d);
                else
                    printf ("%d", LSB67MyT);
            };
        };
    }
    return 0;
}

