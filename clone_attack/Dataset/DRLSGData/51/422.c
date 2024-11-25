void  main () {
    char GIpfbF0LvJ9 [500] [(318 - 313)];
    int Y91BL6s;
    int wpzPxmWgU4a8;
    int BRziNtGowaDc;
    int Y5FQJKf4;
    int qNGBctTU;
    int YTJjRE7O [500];
    char D2t6cFy [(1096 - 596)];
    int MSpv9MJP;
    BRziNtGowaDc = (34 - 34);
    MSpv9MJP = (256 - 256);
    scanf ("%d%s", &Y5FQJKf4, D2t6cFy);
    Y91BL6s = strlen (D2t6cFy);
    {
        wpzPxmWgU4a8 = (994 - 994);
        for (; wpzPxmWgU4a8 <= Y91BL6s -Y5FQJKf4;) {
            {
                qNGBctTU = 0;
                for (; qNGBctTU < Y5FQJKf4;) {
                    GIpfbF0LvJ9[wpzPxmWgU4a8][qNGBctTU] = D2t6cFy[wpzPxmWgU4a8 + qNGBctTU];
                    qNGBctTU = qNGBctTU + (22 - 21);
                }
            }
            GIpfbF0LvJ9[wpzPxmWgU4a8][Y5FQJKf4] = '\0';
            wpzPxmWgU4a8 = wpzPxmWgU4a8 + (208 - 207);
        }
    }
    {
        wpzPxmWgU4a8 = 0;
        for (; wpzPxmWgU4a8 <= Y91BL6s -Y5FQJKf4;) {
            YTJjRE7O[wpzPxmWgU4a8] = (458 - 457);
            {
                qNGBctTU = wpzPxmWgU4a8 + (269 - 268);
                for (; Y91BL6s -Y5FQJKf4 >= qNGBctTU;) {
                    if (!(0 != strcmp (GIpfbF0LvJ9[wpzPxmWgU4a8], GIpfbF0LvJ9[qNGBctTU])))
                        YTJjRE7O[wpzPxmWgU4a8]++;
                    qNGBctTU++;
                }
            }
            wpzPxmWgU4a8 = wpzPxmWgU4a8 + 1;
        }
    }
    {
        wpzPxmWgU4a8 = 0;
        for (; Y91BL6s -Y5FQJKf4 >= wpzPxmWgU4a8;) {
            if (YTJjRE7O[wpzPxmWgU4a8] > BRziNtGowaDc)
                BRziNtGowaDc = YTJjRE7O[wpzPxmWgU4a8];
            wpzPxmWgU4a8 = wpzPxmWgU4a8 + 1;
        }
    }
    if (BRziNtGowaDc == 1)
        ;
    else {
        printf ("%d\n", BRziNtGowaDc);
        {
            wpzPxmWgU4a8 = 0;
            for (; wpzPxmWgU4a8 <= Y91BL6s -Y5FQJKf4;) {
                if (YTJjRE7O[wpzPxmWgU4a8] == BRziNtGowaDc)
                    printf ("%s\n", GIpfbF0LvJ9[wpzPxmWgU4a8]);
                wpzPxmWgU4a8++;
            }
        }
    }
}

