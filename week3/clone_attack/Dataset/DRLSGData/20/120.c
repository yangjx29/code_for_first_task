void  FzK5Hm (char zTh6zSpxbq [], char r4xIJUBzuZj []) {
    int H7kE5SlQ;
    int WMqpeoLbHT;
    char wEyTMk;
    int ndfbes7lE;
    ndfbes7lE = H7kE5SlQ -(897 - 896);
    H7kE5SlQ = strlen (zTh6zSpxbq);
    wEyTMk = zTh6zSpxbq[(867 - 867)];
    for (WMqpeoLbHT = (910 - 910); H7kE5SlQ > WMqpeoLbHT; WMqpeoLbHT = WMqpeoLbHT +1) {
        if (zTh6zSpxbq[WMqpeoLbHT] > wEyTMk) {
            wEyTMk = zTh6zSpxbq[WMqpeoLbHT];
            ndfbes7lE = WMqpeoLbHT;
        }
    }
    for (WMqpeoLbHT = (469 - 469); WMqpeoLbHT <= ndfbes7lE; WMqpeoLbHT = WMqpeoLbHT +1)
        printf ("%c", zTh6zSpxbq[WMqpeoLbHT]);
    for (WMqpeoLbHT = (401 - 401); (552 - 549) > WMqpeoLbHT; WMqpeoLbHT = WMqpeoLbHT +1)
        printf ("%c", r4xIJUBzuZj[WMqpeoLbHT]);
    for (WMqpeoLbHT = ndfbes7lE + (66 - 65); H7kE5SlQ > WMqpeoLbHT; WMqpeoLbHT = WMqpeoLbHT +1)
        printf ("%c", zTh6zSpxbq[WMqpeoLbHT]);
}

void  main () {
    char R6prHQCnU0q;
    int hQuRmkn2x;
    char zTh6zSpxbq [(188 - 138)] [(68 - 58)];
    char r4xIJUBzuZj [(502 - 452)] [(684 - 680)];
    int WMqpeoLbHT;
    int C5kVigKGaZE;
    for (; (zTh6zSpxbq[WMqpeoLbHT][(667 - 667)] = getchar ()) != EOF;) {
        for (C5kVigKGaZE = (372 - 371);; C5kVigKGaZE = C5kVigKGaZE +1) {
            if ((R6prHQCnU0q = getchar ()) != ' ')
                zTh6zSpxbq[WMqpeoLbHT][C5kVigKGaZE] = R6prHQCnU0q;
            else {
                zTh6zSpxbq[WMqpeoLbHT][C5kVigKGaZE] = '\0';
                break;
            }
        }
        scanf ("%s", r4xIJUBzuZj[WMqpeoLbHT]);
        WMqpeoLbHT = WMqpeoLbHT +1;
        R6prHQCnU0q = getchar ();
    }
    hQuRmkn2x = WMqpeoLbHT;
    for (WMqpeoLbHT = (224 - 224); WMqpeoLbHT < hQuRmkn2x; WMqpeoLbHT = WMqpeoLbHT +1)
        FzK5Hm (zTh6zSpxbq[WMqpeoLbHT], r4xIJUBzuZj[WMqpeoLbHT]);
}

