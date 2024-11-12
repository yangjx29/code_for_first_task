int main () {
    int ZfS762dH9s, wCrO79d6g, b, QrpdhlL, VXGcVptu;
    scanf ("%d", &ZfS762dH9s);
    wCrO79d6g = ZfS762dH9s % 10;
    b = ((ZfS762dH9s % 100) - wCrO79d6g) / 10;
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
    QrpdhlL = ((ZfS762dH9s % 1000) - (10 * b + wCrO79d6g)) / 100;
    VXGcVptu = (ZfS762dH9s -100 * QrpdhlL -10 * b - wCrO79d6g) / 1000;
    if (VXGcVptu)
        printf ("%d%d%d%d", wCrO79d6g, b, QrpdhlL, VXGcVptu);
    else if (QrpdhlL)
        printf ("%d%d%d", wCrO79d6g, b, QrpdhlL);
    else if (b)
        printf ("%d%d", wCrO79d6g, b);
    else
        printf ("%d", wCrO79d6g);
    return 0;
}

