void  main () {
    int XDfOP68j;
    int max;
    int zxoUmPS;
    char RyD0gA [(468 - 368)];
    char xHT4ebES [(1078 - 978)];
    int G8OrnJ;
    int l;
    for (; scanf ("%s%s", xHT4ebES, RyD0gA) != EOF;) {
        XDfOP68j = strlen (xHT4ebES);
        zxoUmPS = strlen (RyD0gA);
        max = (413 - 413);
        for (G8OrnJ = (626 - 626); G8OrnJ < XDfOP68j; G8OrnJ++)
            if (xHT4ebES[G8OrnJ] > max) {
                max = xHT4ebES[G8OrnJ];
                l = G8OrnJ;
            }
        for (G8OrnJ = XDfOP68j -(227 - 226); G8OrnJ > l; G8OrnJ--)
            xHT4ebES[G8OrnJ +zxoUmPS] = xHT4ebES[G8OrnJ];
        {
            G8OrnJ = (374 - 374);
            for (; zxoUmPS > G8OrnJ;) {
                xHT4ebES[l + G8OrnJ +1] = RyD0gA[G8OrnJ];
                G8OrnJ++;
            }
        }
        for (G8OrnJ = (901 - 901); XDfOP68j +zxoUmPS > G8OrnJ; G8OrnJ++)
            printf ("%c", xHT4ebES[G8OrnJ]);
    }
}

