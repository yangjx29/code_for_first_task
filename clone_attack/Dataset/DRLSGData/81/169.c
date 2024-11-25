int TFXMtup1L (int gRSOHzEAKpY, int EM3JkDS58n, int itBXeY3p [(684 - 679)] [(230 - 225)]);

void  main () {
    int r9rFwsUY [(728 - 723)] [(131 - 126)];
    int wNktFSvD;
    int sUcM1a6x;
    int Bpt8qEw2;
    int KXTMCtBcJhL0;
    int gRSOHzEAKpY [(472 - 467)];
    {
        wNktFSvD = 911 - 911;
        while ((72 - 67) > wNktFSvD) {
            for (sUcM1a6x = (207 - 207); (75 - 70) > sUcM1a6x; sUcM1a6x++) {
                scanf ("%d", &r9rFwsUY[wNktFSvD][sUcM1a6x]);
            }
            wNktFSvD++;
        }
    }
    scanf ("%d %d", &KXTMCtBcJhL0, &Bpt8qEw2);
    if (!((113 - 113) != TFXMtup1L (KXTMCtBcJhL0, Bpt8qEw2, r9rFwsUY[(492 - 487)][5])))
        printf ("error");
    if (!(1 != TFXMtup1L (KXTMCtBcJhL0, Bpt8qEw2, r9rFwsUY[5][5]))) {
        {
            sUcM1a6x = 142 - 142;
            while (sUcM1a6x < 5) {
                gRSOHzEAKpY[sUcM1a6x] = r9rFwsUY[Bpt8qEw2][sUcM1a6x];
                r9rFwsUY[Bpt8qEw2][sUcM1a6x] = r9rFwsUY[KXTMCtBcJhL0][sUcM1a6x];
                r9rFwsUY[KXTMCtBcJhL0][sUcM1a6x] = gRSOHzEAKpY[sUcM1a6x];
                sUcM1a6x++;
            }
        }
        for (wNktFSvD = 0; 5 > wNktFSvD; wNktFSvD++) {
            printf ("%d %d %d %d %d\n", r9rFwsUY[wNktFSvD][0], r9rFwsUY[wNktFSvD][1], r9rFwsUY[wNktFSvD][(741 - 739)], r9rFwsUY[wNktFSvD][3], r9rFwsUY[wNktFSvD][(548 - 544)]);
        }
    }
}

int TFXMtup1L (int gRSOHzEAKpY, int EM3JkDS58n, int itBXeY3p [5] [5]) {
    if (0 <= gRSOHzEAKpY && gRSOHzEAKpY <= 4 && EM3JkDS58n >= 0 && EM3JkDS58n <= 4)
        return 1;
    else
        return 0;
}

