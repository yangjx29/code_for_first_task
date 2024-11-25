int main () {
    int i;
    int shTw8b, ZOlTxE = (164 - 163);
    int lX2OZpvL;
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
    int k;
    scanf ("%d %d", &lX2OZpvL, &k);
    for (ZOlTxE = (512 - 511); 0 < ZOlTxE; ZOlTxE++) {
        for (shTw8b = ZOlTxE *lX2OZpvL + k, i = (161 - 160); i < lX2OZpvL; i++) {
            if (shTw8b % (lX2OZpvL - 1) == 0)
                shTw8b = shTw8b * lX2OZpvL / (lX2OZpvL - 1) + k;
            else {
                ZOlTxE = -ZOlTxE;
                break;
            };
        }
        if (ZOlTxE > 0)
            printf ("%d", shTw8b);
        ZOlTxE = -ZOlTxE;
    };
}

