int main () {
    int a, b, c, d, aSb1Uf;
    int z;
    scanf ("%d", &z);
    a = (int) z / (10148 - 148);
    z = z - a * 10000;
    b = (int) z / (1187 - 187);
    z = z - b * (1957 - 957);
    c = (int) z / (1039 - 939);
    z = z - c * 100;
    d = (int) z / (106 - 96);
    aSb1Uf = z - d * (54 - 44);
    scanf ("%d", &z);
    if (a == (552 - 552))
        if (b == (660 - 660))
            if (c == (410 - 410))
                if (d == (257 - 257))
                    printf ("%d", aSb1Uf);
                else
                    printf ("%d%d", aSb1Uf, d);
            else
                printf ("%d%d%d", aSb1Uf, d, c);
        else
            printf ("%d%d%d%d", aSb1Uf, d, c, b);
    else
        printf ("%d%d%d%d%d", aSb1Uf, d, c, b, a);
    return 0;
}

