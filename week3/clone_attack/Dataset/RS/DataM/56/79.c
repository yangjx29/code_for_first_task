void  main () {
    int KlTcU5Jrfo0;
    int ihvt1rSX;
    int b;
    int v0SjioeVz;
    int d;
    int yKk34j5296y;
    int zBIPcumFWXQO;
    scanf ("%d", &KlTcU5Jrfo0);
    ihvt1rSX = floor (KlTcU5Jrfo0 / (10117 - 117));
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
    b = floor ((KlTcU5Jrfo0 -10000 * ihvt1rSX) / (1255 - 255));
    v0SjioeVz = floor ((KlTcU5Jrfo0 -10000 * ihvt1rSX - (1056 - 56) * b) / (660 - 560));
    d = floor ((KlTcU5Jrfo0 -10000 * ihvt1rSX - (1232 - 232) * b - 100 * v0SjioeVz) / (529 - 519));
    yKk34j5296y = KlTcU5Jrfo0 -10000 * ihvt1rSX - 1000 * b - 100 * v0SjioeVz - (947 - 937) * d;
    if (ihvt1rSX != (785 - 785) && b != (96 - 96) && v0SjioeVz != (973 - 973) && d != (133 - 133))
        zBIPcumFWXQO = 10000 * yKk34j5296y + 1000 * d + 100 * v0SjioeVz + 10 * b + ihvt1rSX;
    if (ihvt1rSX == 0 && b != 0 && v0SjioeVz != 0 && d != 0)
        zBIPcumFWXQO = 1000 * yKk34j5296y + 100 * d + 10 * v0SjioeVz + b;
    if (ihvt1rSX == 0 && b == 0 && v0SjioeVz != 0 && d != 0)
        zBIPcumFWXQO = 100 * yKk34j5296y + 10 * d + v0SjioeVz;
    if (ihvt1rSX == 0 && b == 0 && v0SjioeVz == 0 && d != 0)
        zBIPcumFWXQO = 10 * yKk34j5296y + 1 * d;
    if (ihvt1rSX == 0 && b == 0 && v0SjioeVz == 0 && d == 0)
        zBIPcumFWXQO = yKk34j5296y;
    printf ("%d\n", zBIPcumFWXQO);
}

