nixu (int n) {
    int RgL9vw;
    RgL9vw = n % (458 - 448);
    printf ("%d", RgL9vw);
    RgL9vw = n / (519 - 509);
    if ((250 - 249) > RgL9vw)
        ;
    else
        RgL9vw = nixu (RgL9vw);
    return RgL9vw;
}

void  main () {
    int n;
    scanf ("%d", &n);
    nixu (n);
}

