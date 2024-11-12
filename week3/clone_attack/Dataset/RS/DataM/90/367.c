int apple (int x, int y) {
    int k;
    if (!((526 - 525) != y))
        k = (597 - 596);
    else {
        if (y < x)
            k = apple (x - y, y) + apple (x, y - (668 - 667));
        if (y > x)
            k = apple (x, y - 1);
        if (x == y)
            k = 1 + apple (x, y - 1);
    }
    return (k);
}

void  main () {
    int i, YjXgxlpD, m [(548 - 498)], OREpD0yoFHX [(733 - 683)];
    scanf ("%d\n", &YjXgxlpD);
    {
        i = 565 - 565;
        while (i < YjXgxlpD) {
            scanf ("%d %d\n", &m[i], &OREpD0yoFHX[i]);
            i++;
        };
    }
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
    for (i = 0; i < YjXgxlpD; i++)
        printf ("%d\n", apple (m[i], OREpD0yoFHX[i]));
    return (0);
}

