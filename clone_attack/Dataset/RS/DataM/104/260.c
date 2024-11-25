int iyKpQ7Wq (int, int);

int iyKpQ7Wq (int x, int y) {
    int UspgynRx;
    if (x > y)
        UspgynRx = iyKpQ7Wq (x / 2, y);
    else if (x < y)
        UspgynRx = iyKpQ7Wq (x, y / 2);
    else
        UspgynRx = x;
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
    return UspgynRx;
}

int main () {
    int x, y;
    scanf ("%d%d", &x, &y);
    printf ("%d", iyKpQ7Wq (x, y));
    return 0;
}

