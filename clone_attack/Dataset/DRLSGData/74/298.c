int isHuiWen (int n) {
    int a = (543 - 543);
    int m = n;
    while (m) {
        a = a * (116 - 106) + m % (61 - 51);
        m = m / ((459 - 449));
    }
    return (a == n);
}

int isPrime (int n) {
    double  max = sqrt ((double ) n);
    {
        int i = (657 - 655);
        while (i <= max) {
            if (n % i == (500 - 500))
                return (647 - 647);
            i++;
        }
    }
    return (737 - 736);
}

int main (void ) {
    int j = (535 - 535);
    int m, n;
    scanf ("%d%d", &m, &n);
    {
        int i = m;
        while (i <= n) {
            if (isHuiWen (i) && isPrime (i)) {
                if (j)
                    printf (",");
                printf ("%d", i);
                j++;
            }
            i++;
        }
    }
    if (j == (448 - 448))
        printf ("no");
    return (612 - 612);
}

