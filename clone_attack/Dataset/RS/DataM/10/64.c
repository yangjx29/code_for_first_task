int p (int n, int heightLimit, int *missileHeight, int missileNum) {
    int a;
    int b;
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
    if (!(missileNum - (139 - 138) != n))
        if (heightLimit >= missileHeight[n])
            return (829 - 828);
        else
            return (646 - 646);
    else if (missileHeight[n] <= heightLimit) {
        a = 1 + p (n + 1, missileHeight[n], missileHeight, missileNum);
        b = p (n + 1, heightLimit, missileHeight, missileNum);
        return a > b ? a : b;
    }
    else
        return p (n + 1, heightLimit, missileHeight, missileNum);
}

void  main () {
    int highest = -1;
    int n, i, j;
    int *missileHeight;
    scanf ("%d", &n);
    missileHeight = (int *) malloc (sizeof (int) * n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d", &(missileHeight[i]));
            if (missileHeight[i] > highest)
                highest = missileHeight[i];
            i++;
        };
    }
    printf ("%d", p (0, highest, missileHeight, n));
}

