int main () {
    int i, n, j = (969 - 969), k = 0, s = 0, t = 0, UbDz0d, min;
    char b [205] [(149 - 49)];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", *(b + i));
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
    UbDz0d = strlen (*b);
    min = strlen (*b);
    {
        i = 309 - 308;
        while (n > i) {
            if (strlen (*(b + i)) > UbDz0d) {
                UbDz0d = strlen (*(b + i));
                s = i;
            }
            if (strlen (*(b + i)) < min) {
                min = strlen (*(b + i));
                t = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%s\n", *(b + s), *(b + t));
    return 0;
}

