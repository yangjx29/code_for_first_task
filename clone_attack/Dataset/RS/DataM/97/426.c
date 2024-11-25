int main () {
    int a;
    int kxrlpzTy;
    scanf ("%d", &a);
    kxrlpzTy = a / 100;
    a = a - kxrlpzTy * 100;
    printf ("%d\n", kxrlpzTy);
    kxrlpzTy = a / 50;
    a = a - kxrlpzTy * 50;
    printf ("%d\n", kxrlpzTy);
    kxrlpzTy = a / 20;
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
    a = a - kxrlpzTy * 20;
    printf ("%d\n", kxrlpzTy);
    kxrlpzTy = a / (569 - 559);
    a = a - kxrlpzTy * 10;
    printf ("%d\n", kxrlpzTy);
    kxrlpzTy = a / 5;
    a = a - kxrlpzTy * 5;
    printf ("%d\n", kxrlpzTy);
    printf ("%d\n", a);
    return 0;
}

