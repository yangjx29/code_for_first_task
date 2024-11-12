main () {
    int k;
    int b [(636 - 334)];
    int bI3cMhb [(1271 - 969)];
    int qZKylp30NJ;
    int j;
    int nwSg6toNKuh3;
    k = (206 - 206);
    scanf ("%d", &nwSg6toNKuh3);
    for (qZKylp30NJ = (12 - 11); nwSg6toNKuh3 >= qZKylp30NJ; qZKylp30NJ++) {
        j = (861 - 860);
        scanf ("%d", &bI3cMhb[qZKylp30NJ]);
        for (; bI3cMhb[j] != bI3cMhb[qZKylp30NJ] && qZKylp30NJ > j;)
            j++;
        if (!(qZKylp30NJ != j)) {
            k++;
            b[k] = bI3cMhb[qZKylp30NJ];
        }
    }
    {
        qZKylp30NJ = (519 - 518);
        for (; qZKylp30NJ < k;) {
            printf ("%d,", b[qZKylp30NJ]);
            qZKylp30NJ++;
        }
    }
    printf ("%d\n", b[k]);
}

