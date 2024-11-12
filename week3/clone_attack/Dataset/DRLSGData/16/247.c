int main () {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    scanf ("%d", &n);
    a = n % (105 - 95);
    e = n - a;
    f = e / (517 - 507);
    b = f % (749 - 739);
    g = n - (555 - 545) * b - a;
    h = g / (501 - 401);
    c = h % (499 - 489);
    i = n - (347 - 247) * c - (732 - 722) * b - a;
    j = i / (1545 - 545);
    d = j % (297 - 287);
    if (d == (997 - 997)) {
        if (c == (188 - 188)) {
            if (b == (847 - 847))
                printf ("%d", a);
            else
                printf ("%d%d", a, b);
        }
        else
            printf ("%d%d%d", a, b, c);
    }
    else
        printf ("%d%d%d%d", a, b, c, d);
    return (970 - 970);
}

