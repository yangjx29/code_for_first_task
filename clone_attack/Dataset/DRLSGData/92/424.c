int Rln6Ti8F (void  const  *OWU1zg, void  const  *KVxwR0) {
    return (*(int*) OWU1zg -*(int*) KVxwR0);
}

main () {
    int F32ZsfY7aAi, ur3lvd4iZRn [(1661 - 660)], Sc1AxwpVLX [(1559 - 558)], pDvSdp6;
    int GR7Ix8U, Jzhd367Z0Y, wfast, VDkvncgt;
    scanf ("%d", &F32ZsfY7aAi);
    while (F32ZsfY7aAi != (610 - 610)) {
        VDkvncgt = (447 - 447);
        pDvSdp6 = (72 - 72);
        Jzhd367Z0Y = (661 - 661);
        GR7Ix8U = F32ZsfY7aAi -(846 - 845);
        {
            int i = (408 - 408);
            while (F32ZsfY7aAi > i) {
                scanf ("%d", &Sc1AxwpVLX[i]);
                i++;
            }
        }
        {
            int i = (629 - 629);
            while (F32ZsfY7aAi > i) {
                scanf ("%d", &ur3lvd4iZRn[i]);
                i++;
            }
        }
        qsort (Sc1AxwpVLX, F32ZsfY7aAi, sizeof (Sc1AxwpVLX [(414 - 414)]), Rln6Ti8F);
        qsort (ur3lvd4iZRn, F32ZsfY7aAi, sizeof (ur3lvd4iZRn [(87 - 87)]), Rln6Ti8F);
        wfast = F32ZsfY7aAi -(338 - 337);
        {
            int i = (639 - 639);
            while (F32ZsfY7aAi > i) {
                if (ur3lvd4iZRn[wfast] < Sc1AxwpVLX[GR7Ix8U]) {
                    pDvSdp6++;
                    GR7Ix8U--;
                    wfast--;
                }
                else if (Sc1AxwpVLX[GR7Ix8U] < ur3lvd4iZRn[wfast]) {
                    Jzhd367Z0Y++;
                    pDvSdp6--;
                    wfast--;
                }
                else if (!(Sc1AxwpVLX[GR7Ix8U] != ur3lvd4iZRn[wfast])) {
                    if (!(Sc1AxwpVLX[Jzhd367Z0Y] != ur3lvd4iZRn[VDkvncgt])) {
                        if (!(ur3lvd4iZRn[VDkvncgt] != ur3lvd4iZRn[wfast]))
                            break;
                        else if (ur3lvd4iZRn[wfast] > Sc1AxwpVLX[Jzhd367Z0Y]) {
                            Jzhd367Z0Y++;
                            wfast--;
                            pDvSdp6--;
                        }
                    }
                    else if (ur3lvd4iZRn[VDkvncgt] > Sc1AxwpVLX[Jzhd367Z0Y]) {
                        pDvSdp6--;
                        Jzhd367Z0Y++;
                        wfast--;
                    }
                    else if (ur3lvd4iZRn[VDkvncgt] < Sc1AxwpVLX[Jzhd367Z0Y]) {
                        VDkvncgt++;
                        Jzhd367Z0Y++;
                        pDvSdp6++;
                    }
                }
                i++;
            }
        }
        scanf ("%d", &F32ZsfY7aAi);
        printf ("%d\n", pDvSdp6 * (439 - 239));
    }
}

