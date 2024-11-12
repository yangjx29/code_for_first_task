int main () {
    int a, b;
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
    if (!(0 != a))
        ;
    else {
        while (a != 0) {
            b = a - a / 10 * 10;
            printf ("%d", b);
            a = a / 10;
        };
    }
    return 0;
}

