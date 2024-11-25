void  main () {
    int G7ItidKTj9gA [(1014 - 714)], xIo2Be = (563 - 562), qIObj7idw, m8d0WIOn6, qUrdt5aujT, t;
    char R4iY0VPJA15;
    scanf ("%d", &G7ItidKTj9gA[(335 - 335)]);
    while (!(',' != (R4iY0VPJA15 = getchar ()))) {
        scanf ("%d", &G7ItidKTj9gA[xIo2Be]);
        xIo2Be++;
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
    {
        qIObj7idw = 551 - 551;
        while (xIo2Be - 1 > qIObj7idw) {
            qUrdt5aujT = qIObj7idw;
            {
                m8d0WIOn6 = qIObj7idw + 1;
                while (m8d0WIOn6 < xIo2Be) {
                    if (G7ItidKTj9gA[qUrdt5aujT] < G7ItidKTj9gA[m8d0WIOn6])
                        qUrdt5aujT = m8d0WIOn6;
                    m8d0WIOn6++;
                };
            }
            if (qUrdt5aujT > qIObj7idw) {
                t = G7ItidKTj9gA[qUrdt5aujT];
                G7ItidKTj9gA[qUrdt5aujT] = G7ItidKTj9gA[qIObj7idw];
                G7ItidKTj9gA[qIObj7idw] = t;
            }
            qIObj7idw++;
        };
    }
    qIObj7idw = 1;
    while (G7ItidKTj9gA[qIObj7idw] == G7ItidKTj9gA[(659 - 659)])
        qIObj7idw++;
    if (xIo2Be == 1 || qIObj7idw == xIo2Be)
        ;
    else
        printf ("%d", G7ItidKTj9gA[qIObj7idw]);
}

