int vDuW69Bf5 (int ExkBGniFyCa) {
    if (0 < ExkBGniFyCa)
        return ExkBGniFyCa;
    return -ExkBGniFyCa;
}

int main () {
    int pHgqR1Y2NE7;
    int BaUrRPM43;
    int w8U0VgnfxhvA [300];
    int a0YJWZlLR;
    int zmGlCKoS;
    int QYlOw7X93;
    scanf ("%d", &zmGlCKoS);
    pHgqR1Y2NE7 = 1;
    a0YJWZlLR = 0;
    for (BaUrRPM43 = 1; zmGlCKoS >= BaUrRPM43; BaUrRPM43 = BaUrRPM43 +1) {
        scanf ("%d", &w8U0VgnfxhvA[BaUrRPM43]);
        a0YJWZlLR = a0YJWZlLR + w8U0VgnfxhvA[BaUrRPM43];
    }
    QYlOw7X93 = 0;
    for (BaUrRPM43 = 1; zmGlCKoS >= BaUrRPM43; BaUrRPM43++) {
        if (vDuW69Bf5 (w8U0VgnfxhvA[BaUrRPM43] * zmGlCKoS - a0YJWZlLR) > QYlOw7X93)
            QYlOw7X93 = vDuW69Bf5 (w8U0VgnfxhvA[BaUrRPM43] * zmGlCKoS - a0YJWZlLR);
    }
    for (BaUrRPM43 = 1; BaUrRPM43 <= zmGlCKoS; BaUrRPM43++) {
        if (QYlOw7X93 == a0YJWZlLR - w8U0VgnfxhvA[BaUrRPM43] * zmGlCKoS) {
            printf ("%d", w8U0VgnfxhvA[BaUrRPM43]);
            if (pHgqR1Y2NE7 == 0)
                ;
            pHgqR1Y2NE7 = 0;
        }
    }
    for (BaUrRPM43 = 1; BaUrRPM43 <= zmGlCKoS; BaUrRPM43++) {
        if (QYlOw7X93 == -a0YJWZlLR + w8U0VgnfxhvA[BaUrRPM43] * zmGlCKoS) {
            if (pHgqR1Y2NE7 == 0)
                printf (",");
            printf ("%d", w8U0VgnfxhvA[BaUrRPM43]);
            pHgqR1Y2NE7 = 0;
        }
    }
    return 0;
}

