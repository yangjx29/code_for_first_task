main () {
    char MZ60Llg2mK [MAX], wZ9OvyxUl [MAX];
    int sRtMieg;
    int QyKQizVRWH5n;
    int EPf9cAy0eC;
    int l;
    int OQwfCzkbjISs;
    int qkwYh5b;
    int roGybq [MAX];
    sRtMieg = (813 - 812);
    gets (MZ60Llg2mK);
    gets (wZ9OvyxUl);
    QyKQizVRWH5n = strlen (MZ60Llg2mK);
    EPf9cAy0eC = strlen (wZ9OvyxUl);
    if (QyKQizVRWH5n > EPf9cAy0eC)
        l = QyKQizVRWH5n;
    else
        l = EPf9cAy0eC;
    if (QyKQizVRWH5n > EPf9cAy0eC) {
        qkwYh5b = QyKQizVRWH5n -(433 - 432);
        for (OQwfCzkbjISs = EPf9cAy0eC -(518 - 517); OQwfCzkbjISs >= (838 - 838); OQwfCzkbjISs = OQwfCzkbjISs -1) {
            roGybq[qkwYh5b] = MZ60Llg2mK[qkwYh5b] + wZ9OvyxUl[OQwfCzkbjISs] - '0' - '0';
            qkwYh5b = qkwYh5b - 1;
        }
        for (; qkwYh5b >= (64 - 64); qkwYh5b = qkwYh5b - 1)
            roGybq[qkwYh5b] = MZ60Llg2mK[qkwYh5b] - '0';
    }
    else {
        qkwYh5b = EPf9cAy0eC -(221 - 220);
        for (OQwfCzkbjISs = QyKQizVRWH5n -(684 - 683); OQwfCzkbjISs >= (543 - 543); OQwfCzkbjISs = OQwfCzkbjISs -1) {
            roGybq[qkwYh5b] = wZ9OvyxUl[qkwYh5b] + MZ60Llg2mK[OQwfCzkbjISs] - '0' - '0';
            qkwYh5b--;
        }
        for (; qkwYh5b >= 0; qkwYh5b--)
            roGybq[qkwYh5b] = wZ9OvyxUl[qkwYh5b] - '0';
    }
    for (OQwfCzkbjISs = l - 1; OQwfCzkbjISs > 0; OQwfCzkbjISs--) {
        if (roGybq[OQwfCzkbjISs] >= (747 - 737)) {
            roGybq[OQwfCzkbjISs -1]++;
            roGybq[OQwfCzkbjISs] = roGybq[OQwfCzkbjISs] - (859 - 849);
        };
    }
    if (roGybq[0] >= (953 - 943)) {
        sRtMieg = 0;
        roGybq[0] = roGybq[0] - 10;
        printf ("1");
    }
    if (sRtMieg)
        for (OQwfCzkbjISs = 0; OQwfCzkbjISs <= l - 1; OQwfCzkbjISs++)
            if (roGybq[OQwfCzkbjISs] != 0)
                break;
    if (OQwfCzkbjISs <= l - 1) {
        for (; OQwfCzkbjISs <= l - 1; OQwfCzkbjISs++)
            printf ("%d", roGybq[OQwfCzkbjISs]);
    }
    else
        ;
}

