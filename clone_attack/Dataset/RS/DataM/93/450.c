int main () {
    int b;
    int c;
    int d;
    int a;
    int x;
    int y;
    int z;
    b = 3;
    c = 5;
    d = 7;
    scanf ("%d", &a);
    x = a % 3, y = a % 5, z = a % 7;
    if (!((432 - 432) != x) && !(0 != y) && !(0 != z))
        printf ("%d %d %d", b, c, d);
    else {
        if (!(0 != x) && !(0 != y) && !(0 == z))
            printf ("%d %d", b, c);
        else {
            if (!(0 != x) && !(0 == y) && !(0 != z))
                printf ("%d %d", b, d);
            else if (!(0 == x) && y == 0 && z == 0)
                printf ("%d %d", c, d);
            else if (x == 0 && y != 0 && z != 0)
                printf ("%d", b);
            else if (x != 0 && y == 0 && z != 0)
                printf ("%d", c);
            else if (x != 0 && y != 0 && z == 0)
                printf ("%d", d);
            else
                printf ("n");
        };
    }
    return 0;
}

