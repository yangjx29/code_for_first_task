int main () {
    int a;
    int b;
    int vk5PC0e;
    int n;
    int i;
    int yQK1Xx;
    int p;
    int r;
    a = 0;
    b = 0;
    vk5PC0e = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d%d", &yQK1Xx, &p);
        r = yQK1Xx - p;
        if (!(1 != r) || !(-2 != r))
            b++;
        else {
            if (r == 0)
                vk5PC0e++;
            else if (r == -1 || r == 2)
                a = a + 1;
        };
    }
    if (a > b)
        printf ("A");
    if (a < b)
        ;
    if (a == b)
        printf ("Tie");
    return 0;
}

