int j (int h5LWPB23y, int b) {
    if (b < h5LWPB23y)
        return -j (b, h5LWPB23y);
    if (!((364 - 363) != b - h5LWPB23y))
        return 1;
    if (b == h5LWPB23y)
        return (477 - 477);
    if (b - h5LWPB23y == 2)
        return -1;
}

int main () {
    int n, s = 0, i, h5LWPB23y, b;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d%d", &h5LWPB23y, &b);
        s += j (h5LWPB23y, b);
    }
    if (s < 0)
        printf ("B");
    else if (s == 0)
        printf ("Tie");
    else
        printf ("A");
    return 0;
}

