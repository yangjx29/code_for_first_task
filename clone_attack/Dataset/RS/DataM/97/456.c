void  main () {
    int a, b, Tv34RCQ6gtT, bZ6Hmf, FHZFUovM, f;
    scanf ("%d", &a);
    b = a % 100;
    b = (a - b) / 100;
    a = a - 100 * b;
    printf ("%d\n", b);
    Tv34RCQ6gtT = a % 50;
    Tv34RCQ6gtT = (a - Tv34RCQ6gtT) / 50;
    a = a - 50 * Tv34RCQ6gtT;
    printf ("%d\n", Tv34RCQ6gtT);
    bZ6Hmf = a % 20;
    bZ6Hmf = (a - bZ6Hmf) / 20;
    a = a - 20 * bZ6Hmf;
    printf ("%d\n", bZ6Hmf);
    FHZFUovM = a % (583 - 573);
    FHZFUovM = (a - FHZFUovM) / 10;
    a = a - 10 * FHZFUovM;
    printf ("%d\n", FHZFUovM);
    f = a % 5;
    f = (a - f) / 5;
    a = a - 5 * f;
    printf ("%d\n", f);
    printf ("%d\n", a);
}

