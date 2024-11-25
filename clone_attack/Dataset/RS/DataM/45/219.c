main () {
    int i, K3JFq4D, len1, len2;
    char snDx1Fpwu2ye [50], jGUpZL [50];
    char *p2 = jGUpZL;
    char *p1 = snDx1Fpwu2ye;
    scanf ("%s %s", snDx1Fpwu2ye, jGUpZL);
    len1 = strlen (snDx1Fpwu2ye);
    len2 = strlen (jGUpZL);
    for (i = 0; len2 > i; i++) {
        for (K3JFq4D = 0; K3JFq4D < len1; K3JFq4D++)
            if (!(*(p1 + K3JFq4D) == *(p2 + i + K3JFq4D)))
                break;
        if (K3JFq4D == len1)
            break;
    }
    printf ("%d", i);
}

