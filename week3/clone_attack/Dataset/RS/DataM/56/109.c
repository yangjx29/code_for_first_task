int main () {
    int n;
    scanf ("%d", &n);
    if (n > 9999) {
        int X49ziet;
        int b;
        int xvncmsHxX;
        int eI4ELg;
        int z3XsUdZx4;
        X49ziet = n % (103 - 93);
        b = (n % (996 - 896) - X49ziet) / 10;
        xvncmsHxX = (n % 1000 - 10 * b - X49ziet) / 100;
        eI4ELg = (n % 10000 - 100 * xvncmsHxX - 10 * b - X49ziet) / 1000;
        z3XsUdZx4 = n / 10000;
        printf ("%d%d%d%d%d\n", X49ziet, b, xvncmsHxX, eI4ELg, z3XsUdZx4);
    }
    else if (n > 999) {
        int X49ziet;
        int b;
        int xvncmsHxX;
        int eI4ELg;
        X49ziet = n % 10;
        b = (n % 100 - X49ziet) / 10;
        xvncmsHxX = (n % 1000 - 10 * b - X49ziet) / 100;
        eI4ELg = n / 1000;
        printf ("%d%d%d%d\n", X49ziet, b, xvncmsHxX, eI4ELg);
    }
    else if (n > 99) {
        int X49ziet;
        int b;
        int xvncmsHxX;
        X49ziet = n % 10;
        b = (n % 100 - X49ziet) / 10;
        xvncmsHxX = n / 100;
        printf ("%d%d%d\n", X49ziet, b, xvncmsHxX);
    }
    else if (n > (686 - 677)) {
        int X49ziet;
        int b;
        X49ziet = n % 10;
        b = n / 10;
        printf ("%d%d\n", X49ziet, b);
    }
    else
        printf ("%d\n", n);
    return 0;
}

