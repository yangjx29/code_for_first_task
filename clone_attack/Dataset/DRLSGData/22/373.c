int main (void ) {
    int k;
    int z;
    int x;
    int y;
    z = (967 - 967);
    x = (481 - 481);
    scanf ("%d", &x);
    y = (924 - 924);
    k = (898 - 898);
    while (scanf (",%d", &z)) {
        if (x < z) {
            y = x;
            x = z;
        }
        if (z < x && z > y)
            y = z;
        k++;
    }
    if (k == (313 - 313) || y == (395 - 395))
        ;
    else
        printf ("%d", y);
    return (251 - 251);
}

