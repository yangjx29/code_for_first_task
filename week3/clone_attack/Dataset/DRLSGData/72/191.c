int main () {
    int OBih0e7Jjbs, WUHQVz5pEN, ZnrQzFIbTaq, OFR9vuT, Enkarx4, UK6FtlUuDc, BDtkEZe3IR0, V9bzclvY;
    int nHXIYW [OBih0e7Jjbs +2] [WUHQVz5pEN +2];
    scanf ("%d %d", &OBih0e7Jjbs, &WUHQVz5pEN);
    for (ZnrQzFIbTaq = (995 - 995); ZnrQzFIbTaq < OBih0e7Jjbs +2; ZnrQzFIbTaq = ZnrQzFIbTaq +1) {
        {
            if (0) {
                return 0;
            }
        }
        for (OFR9vuT = 0; OFR9vuT < WUHQVz5pEN +2; OFR9vuT = OFR9vuT +1) {
            if (!(0 != ZnrQzFIbTaq) || !(OBih0e7Jjbs +1 != ZnrQzFIbTaq) || OFR9vuT == 0 || !(WUHQVz5pEN +1 != OFR9vuT)) {
                nHXIYW[ZnrQzFIbTaq][OFR9vuT] = 0;
            }
            else {
                scanf ("%d", &(nHXIYW[ZnrQzFIbTaq][OFR9vuT]));
            }
        }
    }
    for (ZnrQzFIbTaq = 1; OBih0e7Jjbs +1 > ZnrQzFIbTaq; ZnrQzFIbTaq++) {
        for (OFR9vuT = 1; OFR9vuT < WUHQVz5pEN +1; OFR9vuT = OFR9vuT +1) {
            if (nHXIYW[ZnrQzFIbTaq][OFR9vuT] >= nHXIYW[ZnrQzFIbTaq +1][OFR9vuT] && nHXIYW[ZnrQzFIbTaq][OFR9vuT] >= nHXIYW[ZnrQzFIbTaq][OFR9vuT +1] && nHXIYW[ZnrQzFIbTaq][OFR9vuT] >= nHXIYW[ZnrQzFIbTaq][OFR9vuT -1] && nHXIYW[ZnrQzFIbTaq][OFR9vuT] >= nHXIYW[ZnrQzFIbTaq -1][OFR9vuT]) {
                printf ("%d %d\n", ZnrQzFIbTaq -1, OFR9vuT -1);
            }
        }
    }
    return 0;
}

