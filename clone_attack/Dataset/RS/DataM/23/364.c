void  main () {
    int i;
    int qNHd3y8i1IKV;
    int QOpkXd [100];
    int V0SWhbc86z;
    int Q3FkLyXdxVZq;
    char bVG0o25vh [(273 - 173)];
    gets (bVG0o25vh);
    V0SWhbc86z = strlen (bVG0o25vh);
    bVG0o25vh[V0SWhbc86z] = ' ';
    qNHd3y8i1IKV = (355 - 355);
    for (i = V0SWhbc86z; 0 <= i; i = i - 1) {
        if (bVG0o25vh[i] == ' ') {
            QOpkXd[qNHd3y8i1IKV] = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            qNHd3y8i1IKV = qNHd3y8i1IKV + 1;
        };
    }
    Q3FkLyXdxVZq = qNHd3y8i1IKV - 1;
    qNHd3y8i1IKV = 0;
    for (; qNHd3y8i1IKV != Q3FkLyXdxVZq;) {
        for (i = QOpkXd[qNHd3y8i1IKV + 1] + 1; i < QOpkXd[qNHd3y8i1IKV]; i = i + 1)
            printf ("%c", bVG0o25vh[i]);
        qNHd3y8i1IKV = qNHd3y8i1IKV + 1;
        printf (" ");
    }
    for (i = 0; i < QOpkXd[Q3FkLyXdxVZq]; i++)
        printf ("%c", bVG0o25vh[i]);
}

