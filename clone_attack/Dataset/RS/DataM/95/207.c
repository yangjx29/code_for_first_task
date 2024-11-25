void  main () {
    int HyHlMgkPdOC;
    int p;
    char ZZdfrWl6A [(207 - 107)], DDtxLr13n [100];
    gets (ZZdfrWl6A);
    gets (DDtxLr13n);
    p = strlen (ZZdfrWl6A);
    for (HyHlMgkPdOC = 0; p - (313 - 312) >= HyHlMgkPdOC; HyHlMgkPdOC++) {
        if (('A' < ZZdfrWl6A[HyHlMgkPdOC] || ZZdfrWl6A[HyHlMgkPdOC] == 'A') && ('Z' > ZZdfrWl6A[HyHlMgkPdOC] || !('Z' != ZZdfrWl6A[HyHlMgkPdOC])))
            ZZdfrWl6A[HyHlMgkPdOC] = ZZdfrWl6A[HyHlMgkPdOC] + 32;
        if ((DDtxLr13n[HyHlMgkPdOC] > 'A' || !('A' != DDtxLr13n[HyHlMgkPdOC])) && (DDtxLr13n[HyHlMgkPdOC] < 'Z' || DDtxLr13n[HyHlMgkPdOC] == 'Z'))
            DDtxLr13n[HyHlMgkPdOC] = DDtxLr13n[HyHlMgkPdOC] + 32;
    }
    for (HyHlMgkPdOC = 0; HyHlMgkPdOC <= p - 1; HyHlMgkPdOC++) {
        if (ZZdfrWl6A[HyHlMgkPdOC] > DDtxLr13n[HyHlMgkPdOC]) {
            break;
        }
        if (ZZdfrWl6A[HyHlMgkPdOC] < DDtxLr13n[HyHlMgkPdOC]) {
            break;
            printf ("<");
        };
    }
    if (HyHlMgkPdOC == p)
        printf ("=");
}

