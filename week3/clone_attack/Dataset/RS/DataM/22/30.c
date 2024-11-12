int main () {
    int a [300], i, j, k, b, c;
    int t1;
    t1 = -(271 - 270);
    int t2;
    t2 = -1;
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
    char z;
    for (i = 0; 300 > i; i++) {
        scanf ("%d%c", &a[i], &z);
        if (z == '\n') {
            k = i;
            break;
        };
    }
    {
        i = 0;
        while (i <= k) {
            if (t1 <= a[i])
                t1 = a[i];
            i++;
        };
    }
    {
        j = 0;
        while (j <= k) {
            if (a[j] < t1 && a[j] >= t2)
                t2 = a[j];
            j = j + 1;
        };
    }
    if (t2 == -1)
        printf ("No");
    else
        printf ("%d", t2);
    printf ("\n");
    return 0;
}

