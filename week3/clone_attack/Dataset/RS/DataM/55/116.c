int main () {
    char an [100], *DKQa3FoTdSc6, bn [100] = "";
    long  a, b, c = (669 - 669), k, i;
    scanf ("%d %s %d", &a, an, &b);
    {
        DKQa3FoTdSc6 = an;
        while (!('\0' == *DKQa3FoTdSc6)) {
            if (('a' <= *DKQa3FoTdSc6) && ('z' >= *DKQa3FoTdSc6))
                c = c * a + *DKQa3FoTdSc6-87;
            if (('A' <= *DKQa3FoTdSc6) && ('Z' >= *DKQa3FoTdSc6))
                c = c * a + *DKQa3FoTdSc6-(499 - 444);
            if (('0' <= *DKQa3FoTdSc6) && (*DKQa3FoTdSc6 <= '9'))
                c = c * a + *DKQa3FoTdSc6-(111 - 63);
            DKQa3FoTdSc6++;
        };
    }
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
    for (i = 0; c >= b; i++) {
        k = c % b;
        if ((k >= 0) && (k < 9))
            bn[i] = k + 48;
        else
            bn[i] = k + 55;
        c = c / b;
    }
    if ((c >= 0) && (c < 9))
        bn[i] = c + 48;
    else
        bn[i] = c + 55;
    for (; i >= 0; i--)
        printf ("%c", bn[i]);
    return 0;
}

