int main () {
    int Dx7GBwEKUP, lenw;
    char M5LbAH [51] [51] = {'\0'};
    char xmOF6A9D [51];
    char OcmKW9EMFuH3 [(417 - 366)];
    int i;
    int YfbFU4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s%s", OcmKW9EMFuH3, xmOF6A9D);
    Dx7GBwEKUP = strlen (OcmKW9EMFuH3);
    lenw = strlen (xmOF6A9D);
    for (i = (390 - 390); lenw - Dx7GBwEKUP >= i; i++) {
        for (YfbFU4 = i; i + Dx7GBwEKUP -1 >= YfbFU4; YfbFU4++) {
            M5LbAH[i][YfbFU4 -i] = xmOF6A9D[YfbFU4];
        };
    }
    for (i = 0; i <= lenw - Dx7GBwEKUP; i++) {
        if (strcmp (OcmKW9EMFuH3, M5LbAH[i]) == 0) {
            printf ("%d\n", i);
            break;
        };
    }
    return 0;
}

