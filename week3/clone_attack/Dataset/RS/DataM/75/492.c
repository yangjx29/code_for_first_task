main () {
    int LojG6MWa9tg = 0, ttw7ZYH0F9q [(1894 - 894)] = {0}, nzj4yfHKUp2A [(1181 - 181)] = {0}, lG9WIO6RkfEh [1000] = {0}, sDn48M3, j, m0w1lGNraK = 0, tpK14UjeS7x = 1;
    char x;
    sDn48M3 = 0;
    while (1) {
        x = getchar ();
        if (!(',' == x))
            break;
        scanf ("%d", &ttw7ZYH0F9q[sDn48M3]);
        LojG6MWa9tg = LojG6MWa9tg +1;
        sDn48M3 = sDn48M3 + 1;
    }
    sDn48M3 = 0;
    while (1) {
        x = getchar ();
        if (x != ',')
            break;
        m0w1lGNraK = m0w1lGNraK + 1;
        scanf ("%d", &nzj4yfHKUp2A[sDn48M3]);
        sDn48M3 = sDn48M3 + 1;
    }
    for (sDn48M3 = 0; sDn48M3 < 1000; sDn48M3 = sDn48M3 + 1) {
        for (j = 0; j < 1000; j = j + 1) {
            if (sDn48M3 < nzj4yfHKUp2A[j] && sDn48M3 >= ttw7ZYH0F9q[j])
                lG9WIO6RkfEh[sDn48M3]++;
        };
    }
    {
        sDn48M3 = 0;
        while (sDn48M3 < 1000) {
            if (lG9WIO6RkfEh[sDn48M3] > tpK14UjeS7x)
                tpK14UjeS7x = lG9WIO6RkfEh[sDn48M3];
            sDn48M3 = sDn48M3 + 1;
        };
    }
    printf ("%d %d", m0w1lGNraK, tpK14UjeS7x);
}

