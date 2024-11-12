void  main () {
    int GgZN1cp0, max, mac = -(329 - 328);
    scanf ("%d", &max);
    for (; !('\n' == getchar ());) {
        scanf ("%d", &GgZN1cp0);
        if (max < GgZN1cp0) {
            mac = max;
            max = GgZN1cp0;
        }
        else {
            if (GgZN1cp0 < max && GgZN1cp0 > mac)
                mac = GgZN1cp0;
        };
    }
    if (mac != -(198 - 197) && mac != max)
        printf ("%d", mac);
    else
        ;
}

