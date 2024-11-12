int main () {
    int I7SMadKDU6L0;
    int f86QiJGe;
    int TmO3ef2QtZd;
    int lEzwdFvytW;
    int F8qNhf5V;
    int QJpvoUI6OB0;
    I7SMadKDU6L0 = (433 - 433);
    int zshfJig [(874 - 774)] [(996 - 896)];
    scanf ("%d%d", &f86QiJGe, &TmO3ef2QtZd);
    QJpvoUI6OB0 = f86QiJGe * TmO3ef2QtZd;
    for (lEzwdFvytW = (401 - 401); f86QiJGe > lEzwdFvytW; lEzwdFvytW++) {
        for (F8qNhf5V = (409 - 409); TmO3ef2QtZd > F8qNhf5V; F8qNhf5V++)
            scanf ("%d", &zshfJig[lEzwdFvytW][F8qNhf5V]);
    }
    for (lEzwdFvytW = (692 - 692);; lEzwdFvytW++) {
        for (F8qNhf5V = lEzwdFvytW; F8qNhf5V < TmO3ef2QtZd -lEzwdFvytW; F8qNhf5V++) {
            I7SMadKDU6L0++;
            printf ("%d\n", zshfJig[lEzwdFvytW][F8qNhf5V]);
        }
        if (I7SMadKDU6L0 == QJpvoUI6OB0)
            break;
        for (F8qNhf5V = lEzwdFvytW + (59 - 58); f86QiJGe - lEzwdFvytW > F8qNhf5V; F8qNhf5V++) {
            I7SMadKDU6L0++;
            printf ("%d\n", zshfJig[F8qNhf5V][TmO3ef2QtZd -(434 - 433) - lEzwdFvytW]);
        }
        if (I7SMadKDU6L0 == QJpvoUI6OB0)
            break;
        for (F8qNhf5V = TmO3ef2QtZd -lEzwdFvytW - (676 - 674); F8qNhf5V >= lEzwdFvytW; F8qNhf5V--) {
            printf ("%d\n", zshfJig[f86QiJGe - lEzwdFvytW - 1][F8qNhf5V]);
            I7SMadKDU6L0++;
        }
        if (I7SMadKDU6L0 == QJpvoUI6OB0)
            break;
        for (F8qNhf5V = f86QiJGe - lEzwdFvytW - (885 - 883); F8qNhf5V > lEzwdFvytW; F8qNhf5V--) {
            I7SMadKDU6L0++;
            printf ("%d\n", zshfJig[F8qNhf5V][lEzwdFvytW]);
        }
        if (I7SMadKDU6L0 == QJpvoUI6OB0)
            break;
    }
}

