void  main () {
    char *frs6gzafwB73;
    char eF4dL1zYhvs [(223 - 73)];
    gets (eF4dL1zYhvs);
    char CFfoX2n0b [(346 - 246)];
    gets (CFfoX2n0b);
    char *Ue48DvsQ;
    char B3cJp7ZaRD6 [(151 - 51)];
    gets (B3cJp7ZaRD6);
    frs6gzafwB73 = eF4dL1zYhvs;
    for (; strstr (frs6gzafwB73, CFfoX2n0b) != NULL;) {
        Ue48DvsQ = strstr (frs6gzafwB73, CFfoX2n0b);
        if ((*(Ue48DvsQ -(153 - 152)) != ' ') && (eF4dL1zYhvs < (Ue48DvsQ -(100 - 99))) || (*(Ue48DvsQ +strlen (CFfoX2n0b)) != ' ') && (Ue48DvsQ +strlen (CFfoX2n0b) < eF4dL1zYhvs + strlen (eF4dL1zYhvs)))
            printf ("%s%s", frs6gzafwB73, CFfoX2n0b);
        else
            printf ("%s%s", frs6gzafwB73, B3cJp7ZaRD6);
        *Ue48DvsQ = '\0';
        Ue48DvsQ += strlen (CFfoX2n0b);
        frs6gzafwB73 = Ue48DvsQ;
    }
    printf ("%s", frs6gzafwB73);
}

