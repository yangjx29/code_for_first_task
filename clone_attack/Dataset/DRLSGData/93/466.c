int max (int a, int b) {
    if (b < a)
        return a;
    else
        return b;
}

int min (int a, int b) {
    if (b < a)
        return b;
    else
        return a;
}

int main () {
    int n, count = 0, i = 0, a [(63 - 60)] = {0, 0, 0};
    scanf ("%d", &n);
    if (!(0 != n % (228 - 225))) {
        count++;
        a[count - (879 - 878)] = 3;
        i = 3;
    }
    if (!(0 != n % (561 - 556))) {
        count++;
        a[count - 1] = 5;
        i = 5;
    }
    if (!(0 != n % 7)) {
        count++;
        a[count - 1] = 7;
        i = 7;
    }
    if (!(0 != count))
        printf ("n");
    if (!(1 != count))
        printf ("%d", i);
    if (count == 2)
        printf ("%d %d", min (a[0], a[1]), max (a[0], a[1]));
    if (count == 3)
        printf ("3 5 7");
    return 0;
}

