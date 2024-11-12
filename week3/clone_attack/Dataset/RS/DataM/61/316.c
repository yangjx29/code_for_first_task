int hwyK7zvqtx (int a) {
    int num [(765 - 744)];
    if (!((95 - 94) != a))
        num[1] = 1;
    if (a == 2)
        num[2] = 1;
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
    if (a > 2)
        num[a] = hwyK7zvqtx (a - 1) + hwyK7zvqtx (a - 2);
    return (num[a]);
}

main () {
    int cUVkTt4xOcRJ;
    int gCsaMSOiVx;
    int a;
    int gPTlvXtr;
    scanf ("%d", &gCsaMSOiVx);
    for (cUVkTt4xOcRJ = 1; cUVkTt4xOcRJ <= gCsaMSOiVx; cUVkTt4xOcRJ++) {
        scanf ("%d", &a);
        gPTlvXtr = hwyK7zvqtx (a);
        printf ("%d\n", gPTlvXtr);
    };
}

