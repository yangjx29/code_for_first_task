int main () {
    char z9kUdtgiY [10000], *p;
    int n, i = 0;
    gets (z9kUdtgiY);
    n = strlen (z9kUdtgiY);
    for (p = z9kUdtgiY; p < z9kUdtgiY + n; p = p + 1) {
        if (*p == ' ') {
            if (i != 0)
                printf ("%d,", i);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = 0;
        }
        else
            i = i + 1;
        if (p == z9kUdtgiY + n - 1)
            break;
    }
    printf ("%d", i);
}

