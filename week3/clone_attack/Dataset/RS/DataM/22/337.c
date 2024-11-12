int main () {
    int U2zlyA, x1, K5wDGMau = (364 - 364), QyieTbgLX = -(538 - 537), flag = 0;
    scanf ("%d", &x1);
    K5wDGMau = x1;
    while ((scanf (",%d", &U2zlyA)) == 1) {
        if (U2zlyA > K5wDGMau) {
            QyieTbgLX = K5wDGMau;
            K5wDGMau = U2zlyA;
        }
        if (K5wDGMau > U2zlyA &&QyieTbgLX < U2zlyA)
            QyieTbgLX = U2zlyA;
        flag = 1;
    }
    if (K5wDGMau > QyieTbgLX &&QyieTbgLX != -1)
        printf ("%d", QyieTbgLX);
    if (flag = 0 || QyieTbgLX == K5wDGMau || QyieTbgLX == -1)
        ;
    return 0;
}

