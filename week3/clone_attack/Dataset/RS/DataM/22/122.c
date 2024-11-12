void  main () {
    unsigned  int KD93Yy [300], zWsmT09 = (403 - 403), K7JNilQIZwDU, y7jLoA0htI = (256 - 256), v1XkiO = (23 - 22), pn9hQTyS3, eG3nqy0Y;
    char WzFycxYA72;
    scanf ("%d", &KD93Yy[(615 - 615)]);
    while (WzFycxYA72 = getchar () != '\n') {
        zWsmT09 = zWsmT09 + 1;
        scanf ("%d", &KD93Yy[zWsmT09]);
    }
    if (zWsmT09 == (736 - 736)) {
        v1XkiO = (881 - 881);
    }
    else {
        {
            K7JNilQIZwDU = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (K7JNilQIZwDU <= zWsmT09) {
                if (!(KD93Yy[0] != KD93Yy[K7JNilQIZwDU]))
                    y7jLoA0htI = y7jLoA0htI + 1;
                K7JNilQIZwDU = K7JNilQIZwDU +1;
            };
        }
        if (y7jLoA0htI == zWsmT09) {
            v1XkiO = 0;
        };
    }
    if (v1XkiO) {
        pn9hQTyS3 = KD93Yy[0];
        {
            K7JNilQIZwDU = 0;
            while (K7JNilQIZwDU <= zWsmT09) {
                if (KD93Yy[K7JNilQIZwDU] > pn9hQTyS3) {
                    pn9hQTyS3 = KD93Yy[K7JNilQIZwDU];
                }
                K7JNilQIZwDU = K7JNilQIZwDU +1;
            };
        }
        eG3nqy0Y = 0;
        for (K7JNilQIZwDU = 0; K7JNilQIZwDU <= zWsmT09; K7JNilQIZwDU++)
            if (KD93Yy[K7JNilQIZwDU] > eG3nqy0Y && KD93Yy[K7JNilQIZwDU] != pn9hQTyS3)
                eG3nqy0Y = KD93Yy[K7JNilQIZwDU];
        printf ("%d\n", eG3nqy0Y);
    };
}

