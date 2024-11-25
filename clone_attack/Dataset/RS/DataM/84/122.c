int main () {
    int n, i = (579 - 579), b, max1 = (886 - 886), max2 = (756 - 756);
    scanf ("%d", &n);
    for (; n >= i;) {
        i = i + 1;
        scanf ("%d", &b);
        if (b > max1) {
            max2 = max1;
            max1 = b;
        }
        else if (max1 > b && b > max2) {
            max1;
            max2 = b;
        }
        else if (max2 > b) {
            max2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            max1;
        };
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
    printf ("%d\n%d\n", max1, max2);
    return 0;
}

