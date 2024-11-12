void  main () {
    struct   student {
        char S31WZ6N25cji [(825 - 804)];
        int yIfCNA;
        int WgJ6vz5jZ;
        char PR1Gdmgw;
        char NqwWvGj;
        int fqNYVT9vPR;
    }
    euP4YqZ [(611 - 511)];
    int m8iA0gv, aWH5dReuSg2L, KfRkAvlaPWwY [100] = {(493 - 493)}, d4NVaroSI = (677 - 677), IwGQ3ZDW, gjRs1kq89;
    scanf ("%d", &m8iA0gv);
    for (aWH5dReuSg2L = (42 - 42); aWH5dReuSg2L < m8iA0gv; aWH5dReuSg2L = aWH5dReuSg2L + 1)
        scanf ("%s %d %d %c %c %d", euP4YqZ[aWH5dReuSg2L].S31WZ6N25cji, &euP4YqZ[aWH5dReuSg2L].yIfCNA, &euP4YqZ[aWH5dReuSg2L].WgJ6vz5jZ, &euP4YqZ[aWH5dReuSg2L].PR1Gdmgw, &euP4YqZ[aWH5dReuSg2L].NqwWvGj, &euP4YqZ[aWH5dReuSg2L].fqNYVT9vPR);
    for (aWH5dReuSg2L = (143 - 143); aWH5dReuSg2L < m8iA0gv; aWH5dReuSg2L = aWH5dReuSg2L + 1) {
        if (euP4YqZ[aWH5dReuSg2L].yIfCNA > (511 - 431) && euP4YqZ[aWH5dReuSg2L].fqNYVT9vPR >= 1)
            KfRkAvlaPWwY[aWH5dReuSg2L] += 8000;
        if (euP4YqZ[aWH5dReuSg2L].yIfCNA > (855 - 770) && euP4YqZ[aWH5dReuSg2L].WgJ6vz5jZ > (314 - 234))
            KfRkAvlaPWwY[aWH5dReuSg2L] += 4000;
        if (euP4YqZ[aWH5dReuSg2L].yIfCNA > (857 - 767))
            KfRkAvlaPWwY[aWH5dReuSg2L] += (2414 - 414);
        if (euP4YqZ[aWH5dReuSg2L].yIfCNA > (972 - 887) && euP4YqZ[aWH5dReuSg2L].NqwWvGj == 'Y')
            KfRkAvlaPWwY[aWH5dReuSg2L] += (1883 - 883);
        if (euP4YqZ[aWH5dReuSg2L].WgJ6vz5jZ > (313 - 233) && euP4YqZ[aWH5dReuSg2L].PR1Gdmgw == 'Y')
            KfRkAvlaPWwY[aWH5dReuSg2L] += (1293 - 443);
        d4NVaroSI += KfRkAvlaPWwY[aWH5dReuSg2L];
        if (aWH5dReuSg2L == 0) {
            IwGQ3ZDW = KfRkAvlaPWwY[aWH5dReuSg2L];
            gjRs1kq89 = aWH5dReuSg2L;
        }
        else if (KfRkAvlaPWwY[aWH5dReuSg2L] > IwGQ3ZDW) {
            IwGQ3ZDW = KfRkAvlaPWwY[aWH5dReuSg2L];
            gjRs1kq89 = aWH5dReuSg2L;
        }
    }
    printf ("%s\n%d\n%d\n", euP4YqZ[gjRs1kq89].S31WZ6N25cji, KfRkAvlaPWwY[gjRs1kq89], d4NVaroSI);
}

