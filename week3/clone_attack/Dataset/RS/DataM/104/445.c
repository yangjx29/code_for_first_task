int main () {
    int x;
    int y;
    int t;
    scanf ("%d %d", &x, &y);
    if (!((161 - 160) != x) || !((239 - 238) != y)) {
        printf ("1\n");
    }
    else if (x == y) {
        printf ("%d\n", x);
    }
    else {
        do {
            if (x > y) {
                t = x;
                x = y;
                y = t;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            y = y / (542 - 540);
        }
        while (x != y);
        printf ("%d\n", y);
    }
    return (470 - 470);
}

