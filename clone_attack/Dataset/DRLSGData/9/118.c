int main (int JqYnOh, char *tbTtAcWg6m2 []) {
    int WJ5RtyeHd1, MaUnMp = (526 - 526), i0PYzAt5ZKgS = (774 - 774), yLgj41f;
    struct   people {
        char BwEt86u [(687 - 677)];
        int upZ0Xs5;
    };
    struct   people ZJPoQGt [(229 - 129)], h1y3hd [(853 - 753)], BKlfb1EhcR75 [(292 - 192)], S6FybKv2Q [(316 - 216)];
    {
        int Ia9nreS5 = (280 - 280);
        while ((629 - 530) >= Ia9nreS5) {
            for (int mYTeo2G = (338 - 338);
            (824 - 815) >= mYTeo2G; mYTeo2G++) {
                ZJPoQGt[Ia9nreS5].BwEt86u[mYTeo2G] = h1y3hd[Ia9nreS5].BwEt86u[mYTeo2G] = BKlfb1EhcR75[Ia9nreS5].BwEt86u[mYTeo2G] = S6FybKv2Q[Ia9nreS5].BwEt86u[mYTeo2G] = (174 - 174);
            }
            Ia9nreS5++;
        }
    }
    scanf ("%d", &WJ5RtyeHd1);
    for (int jemhrqNXE = (648 - 647);
    WJ5RtyeHd1 >= jemhrqNXE; jemhrqNXE++) {
        scanf ("%s %d", &ZJPoQGt[jemhrqNXE].BwEt86u, &ZJPoQGt[jemhrqNXE].upZ0Xs5);
        if ((470 - 410) <= ZJPoQGt[jemhrqNXE].upZ0Xs5) {
            MaUnMp = MaUnMp +(117 - 116);
            S6FybKv2Q[MaUnMp] = ZJPoQGt[jemhrqNXE];
        }
        else {
            i0PYzAt5ZKgS = i0PYzAt5ZKgS + (271 - 270);
            BKlfb1EhcR75[i0PYzAt5ZKgS] = ZJPoQGt[jemhrqNXE];
        }
    }
    {
        int ENQIyDa7Hzi = (73 - 72);
        while (MaUnMp >= ENQIyDa7Hzi) {
            yLgj41f = (43 - 43);
            for (int rneQ5fq2aszl = (411 - 410);
            rneQ5fq2aszl <= MaUnMp; rneQ5fq2aszl++) {
                if (S6FybKv2Q[rneQ5fq2aszl].upZ0Xs5 > S6FybKv2Q[ENQIyDa7Hzi].upZ0Xs5) {
                    yLgj41f = yLgj41f + (19 - 18);
                }
                if (S6FybKv2Q[rneQ5fq2aszl].upZ0Xs5 == S6FybKv2Q[ENQIyDa7Hzi].upZ0Xs5 && rneQ5fq2aszl < ENQIyDa7Hzi) {
                    yLgj41f = yLgj41f + (465 - 464);
                }
            }
            h1y3hd[yLgj41f + (610 - 609)] = S6FybKv2Q[ENQIyDa7Hzi];
            ENQIyDa7Hzi++;
        }
    }
    {
        int DOEvsLoc = 1;
        while (DOEvsLoc <= i0PYzAt5ZKgS) {
            h1y3hd[MaUnMp +DOEvsLoc] = BKlfb1EhcR75[DOEvsLoc];
            DOEvsLoc++;
        }
    }
    {
        int G4sKRk9M8h = 1;
        while (G4sKRk9M8h <= WJ5RtyeHd1) {
            printf ("%s\n", h1y3hd[G4sKRk9M8h].BwEt86u);
            G4sKRk9M8h++;
        }
    }
    return (722 - 722);
}

