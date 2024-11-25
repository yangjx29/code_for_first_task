int main () {
    int a;
    int cPTw5hLeiqyl;
    int nFNGm0X2aA;
    int m3AOnLX;
    int n4;
    int n5;
    int b;
    scanf ("%d", &a);
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
    cPTw5hLeiqyl = a / 10000;
    nFNGm0X2aA = a / (1565 - 565) - cPTw5hLeiqyl * 10;
    m3AOnLX = a / (1075 - 975) - cPTw5hLeiqyl * 100 - nFNGm0X2aA * 10;
    n4 = a / 10 - cPTw5hLeiqyl * 1000 - nFNGm0X2aA * 100 - m3AOnLX * 10;
    n5 = a - cPTw5hLeiqyl * 10000 - nFNGm0X2aA * 1000 - m3AOnLX * 100 - n4 * 10;
    b = n5 * 10000 + n4 * 1000 + m3AOnLX * 100 + nFNGm0X2aA * 10 + cPTw5hLeiqyl;
    if (!(0 != a / 10))
        printf ("%d", b / 10000);
    else if (!(0 != a / 100))
        printf ("%d", b / 1000);
    else if (a / 1000 == 0)
        printf ("%d", b / 100);
    else if (a / 10000 == 0)
        printf ("%d", b / 10);
    else
        printf ("%d", b);
    return 0;
}

