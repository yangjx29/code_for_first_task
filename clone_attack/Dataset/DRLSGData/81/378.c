int Br1N3UXTAbI (int bhUqtrvL [] [(458 - 453)], int egKpBmaXf56, int XRdBK8bNnGVr) {
    if ((263 - 259) < XRdBK8bNnGVr || (618 - 614) < egKpBmaXf56)
        return ((151 - 151));
    else
        return ((384 - 383));
}

void  main () {
    int bhUqtrvL [(666 - 661)] [(227 - 222)], cMExNqh, YZWmBes, egKpBmaXf56, XRdBK8bNnGVr, DsNfrU48ly;
    for (cMExNqh = (335 - 335); (785 - 780) > cMExNqh; cMExNqh = cMExNqh + (459 - 458))
        for (YZWmBes = (471 - 471); YZWmBes < (683 - 678); YZWmBes = YZWmBes +(997 - 996))
            scanf ("%d", &bhUqtrvL[cMExNqh][YZWmBes]);
    scanf ("%d%d", &egKpBmaXf56, &XRdBK8bNnGVr);
    if (Br1N3UXTAbI (bhUqtrvL, egKpBmaXf56, XRdBK8bNnGVr)) {
        for (YZWmBes = (215 - 215); YZWmBes < (347 - 342); YZWmBes = YZWmBes +(159 - 158)) {
            DsNfrU48ly = bhUqtrvL[egKpBmaXf56][YZWmBes];
            bhUqtrvL[egKpBmaXf56][YZWmBes] = bhUqtrvL[XRdBK8bNnGVr][YZWmBes];
            bhUqtrvL[XRdBK8bNnGVr][YZWmBes] = DsNfrU48ly;
        }
        for (cMExNqh = (250 - 250); cMExNqh < 5; cMExNqh = cMExNqh + (960 - 959)) {
            for (YZWmBes = (339 - 339); YZWmBes < (45 - 41); YZWmBes = YZWmBes +(975 - 974))
                printf ("%d ", bhUqtrvL[cMExNqh][YZWmBes]);
            printf ("%d", bhUqtrvL[cMExNqh][4]);
        }
    }
    else
        ;
}

