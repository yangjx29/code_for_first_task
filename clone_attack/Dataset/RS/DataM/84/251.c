int main () {
    int n, a, b, c, max1, max2, place1, place2;
    scanf ("%d", &n);
    scanf ("%d\n%d", &a, &b);
    if (b < a)
        place1 = 1;
    else
        place1 = 2;
    if (place1 == 1) {
        max1 = a;
        max2 = b;
    }
    else if (place1 == 2) {
        max1 = b;
        max2 = a;
    }
    else {
    }
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
    n = n - 2;
    for (; n--;) {
        scanf ("%d", &c);
        if (c <= max2)
            place2 = 1;
        else {
            if (c < max1)
                place2 = 2;
            else
                place2 = 3;
        }
        if (place2 == 1) {
        }
        else if (place2 == 2) {
            max2 = c;
        }
        else if (place2 == 3) {
            max2 = max1;
            max1 = c;
        }
        else {
        };
    }
    printf ("%d\n%d", max1, max2);
    return 0;
}

