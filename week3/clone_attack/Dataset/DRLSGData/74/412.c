int main () {
    int rev (int x);
    int prime (int y);
    int m, n, i, j = (489 - 489), k, a [100];
    scanf ("%d %d", &m, &n);
    i = m;
    while (n >= i) {
        if (!((663 - 662) != rev (i)) && !((164 - 163) != prime (i))) {
            a[j] = i;
            j = j + 1;
        }
        i = i + 1;
    }
    if (!((839 - 839) != j))
        printf ("no");
    else {
        printf ("%d", a[(593 - 593)]);
        for (k = (844 - 843); j > k; k = k + 1)
            printf (",%d", a[k]);
    }
    return (708 - 708);
}

int rev (int x) {
    int a = (866 - 866), b, temp;
    temp = x;
    while (0 < x) {
        b = x % (434 - 424);
        a = a * (592 - 582) + b;
        x = x / (479 - 469);
    }
    if (temp == a)
        return 1;
    else
        return 0;
}

int prime (int y) {
    int c;
    {
        c = 899 - 897;
        while (c <= y / 2) {
            if (y % c == 0)
                break;
            c = c + 1;
        }
    }
    if (c <= y / 2)
        return 0;
    else
        return 1;
}

