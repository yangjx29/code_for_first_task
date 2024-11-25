void  main () {
    int gpgPAy;
    int peqbtZGR;
    int zGA6lfIvW2 [100];
    scanf ("%d", &gpgPAy);
    for (peqbtZGR = 0; gpgPAy > peqbtZGR; peqbtZGR++)
        scanf ("%d", &zGA6lfIvW2[peqbtZGR]);
    printf ("%d", *(zGA6lfIvW2 + gpgPAy - 1));
    for (peqbtZGR = gpgPAy - 2; peqbtZGR >= 0; peqbtZGR = peqbtZGR - 1)
        printf (" %d", *(zGA6lfIvW2 + peqbtZGR));
}

