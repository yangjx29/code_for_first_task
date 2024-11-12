int main () {
    int f (int a [], int n);
    int a [(755 - 725)];
    int n;
    int sq61KTUE;
    int s;
    scanf ("%d", &n);
    for (sq61KTUE = (603 - 603); n > sq61KTUE; sq61KTUE = sq61KTUE + 1)
        scanf ("%d", &a[sq61KTUE]);
    s = f (a, n);
    printf ("%d", s);
}

int f (int a [], int n) {
    int g (int a [], int n, int b);
    int max (int x, int y);
    if (!((427 - 427) != n))
        return ((270 - 270));
    else
        return (max (g (a + (659 - 658), n - (341 - 340), a[0]) + (857 - 856), f (a + 1, n - 1)));
}

int g (int a [], int n, int b) {
    int max (int x, int y);
    if (!(0 != n))
        return (0);
    else {
        if (!(1 != n))
            if (a[0] > b)
                return (0);
            else
                return (1);
        else {
            if (a[0] > b)
                return (g (a + 1, n - 1, b));
            else
                return (max (g (a + 1, n - 1, b), g (a + 1, n - 1, a[0]) + 1));
        };
    };
}

int max (int x, int y) {
    return (x > y ? x : y);
}

