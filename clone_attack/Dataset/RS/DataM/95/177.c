void  main () {
    char OJl1SgsyC [100];
    char EiQAwEm5 [100];
    gets (OJl1SgsyC);
    gets (EiQAwEm5);
    int oh3eZ4vGU;
    int C7GL6QI;
    int n;
    n = strlen (OJl1SgsyC);
    C7GL6QI = 0;
    {
        oh3eZ4vGU = 0;
        while (oh3eZ4vGU < n) {
            if (OJl1SgsyC[oh3eZ4vGU] != EiQAwEm5[oh3eZ4vGU]) {
                if (OJl1SgsyC[oh3eZ4vGU] >= 'a')
                    OJl1SgsyC[oh3eZ4vGU] -= 'a' - 'A';
                if (EiQAwEm5[oh3eZ4vGU] >= 'a')
                    EiQAwEm5[oh3eZ4vGU] -= 'a' - 'A';
                if (OJl1SgsyC[oh3eZ4vGU] != EiQAwEm5[oh3eZ4vGU]) {
                    C7GL6QI = (OJl1SgsyC[oh3eZ4vGU] > EiQAwEm5[oh3eZ4vGU]) ? 1 : -1;
                    break;
                };
            }
            oh3eZ4vGU++;
        };
    }
    if (C7GL6QI == 0)
        printf ("=");
    else if (C7GL6QI == 1)
        ;
    else
        printf ("<");
}

