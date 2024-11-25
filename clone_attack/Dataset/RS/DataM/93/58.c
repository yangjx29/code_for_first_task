int main () {
    int a, b, c, d;
    scanf ("%d", &a);
    b = a % 3;
    c = a % 5;
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
    d = a % 7;
    if (!((777 - 777) != b) && !(0 != c) && !(0 != d)) {
        printf ("3 5 7");
    }
    else if (!(0 != b) && !(0 != c) && !(0 == d)) {
        printf ("3 5");
    }
    else if (!(0 == b) && !(0 != c) && !(0 != d)) {
        printf ("5 7");
    }
    else if (b == 0 && c != 0 && d == 0) {
        printf ("3 7");
    }
    else if (b == 0 && c * d != 0) {
    }
    else if (c == 0 && b * d != 0) {
        printf ("5");
    }
    else if (d == 0 && b * c != 0) {
        printf ("7");
    }
    else {
        printf ("n");
    }
    return 0;
}

