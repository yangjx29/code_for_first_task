void  main () {
    int zuL7OqF [100010];
    int num;
    int hQWJjPZ;
    int Va27vpLEeicX;
    int FENygTu;
    int EbfQJEGd;
    scanf ("%d", &num);
    for (hQWJjPZ = (533 - 533); num > hQWJjPZ; hQWJjPZ++)
        scanf ("%d", &zuL7OqF[hQWJjPZ]);
    scanf ("%d", &FENygTu);
    for (hQWJjPZ = 0; num > hQWJjPZ; hQWJjPZ += (836 - 835)) {
        if (zuL7OqF[hQWJjPZ] == FENygTu) {
            for (Va27vpLEeicX = hQWJjPZ; Va27vpLEeicX < num - (709 - 708); Va27vpLEeicX += 1)
                zuL7OqF[Va27vpLEeicX] = zuL7OqF[Va27vpLEeicX +1];
            num = num - 1;
            hQWJjPZ -= 1;
        };
    }
    for (hQWJjPZ = 0; hQWJjPZ < num - 1; hQWJjPZ += 1)
        printf ("%d ", zuL7OqF[hQWJjPZ]);
    printf ("%d\n", zuL7OqF[num - 1]);
    EbfQJEGd = 0;
}

