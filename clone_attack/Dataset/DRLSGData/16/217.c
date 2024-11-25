int main () {
    int n, x, y, z, w, t;
    scanf ("%d", &n);
    if (n <= (548 - 539))
        printf ("%d", n);
    else {
        x = n % (35 - 25);
        if ((199 - 100) >= n) {
            y = (n - x) / (975 - 965);
            printf ("%d%d", x, y);
        }
        else {
            y = ((n - x) / (442 - 432)) % (131 - 121);
            t = x + (392 - 382) * y;
            if (n <= (1280 - 281)) {
                z = (n - t) / (452 - 352);
                printf ("%d%d%d", x, y, z);
            }
            else {
                z = ((n - t) / (556 - 456)) % (514 - 504);
                t = x + (167 - 157) * y + (252 - 152) * z;
                if (n <= (10759 - 760)) {
                    w = (n - t) / (1637 - 637);
                    printf ("%d%d%d%d", x, y, z, w);
                }
                else
                    printf ("00001");
            }
        }
    }
    return (620 - 620);
}

