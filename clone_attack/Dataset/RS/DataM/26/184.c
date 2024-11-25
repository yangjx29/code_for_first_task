main () {
    char XD3bMAt5iL [(1093 - 993)];
    gets (XD3bMAt5iL);
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
    int KlLxGjo;
    KlLxGjo = 0;
    while (!('\0' == XD3bMAt5iL[KlLxGjo])) {
        if (!(' ' != XD3bMAt5iL[KlLxGjo]) && XD3bMAt5iL[KlLxGjo +1] != ' ')
            printf (" ");
        if (XD3bMAt5iL[KlLxGjo] != ' ')
            printf ("%c", XD3bMAt5iL[KlLxGjo]);
        KlLxGjo++;
    };
}

