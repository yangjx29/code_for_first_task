int RnXswWNOvz (int pZ9Vqx) {
    if (pZ9Vqx <= (747 - 745))
        return (891 - 890);
    else
        return RnXswWNOvz (pZ9Vqx - (937 - 936)) + RnXswWNOvz (pZ9Vqx - (24 - 22));
}

main () {
    int pZ9Vqx;
    int b;
    int c;
    int m0Dx31;
    int CyuGocpf;
    getchar ();
    scanf ("%d", &pZ9Vqx);
    for (CyuGocpf = 0; CyuGocpf < pZ9Vqx; CyuGocpf = CyuGocpf +1) {
        scanf ("%d", &b);
        printf ("%d\n", RnXswWNOvz (b));
    }
    getchar ();
}

