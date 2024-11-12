int main () {
    double  zAueIkpVGR;
    int z;
    int y;
    int k;
    int m;
    int pXY3528p4UnA;
    int cqPnGrDE [50000] [2];
    int yNY4g53nM;
    z = (10674 - 674);
    y = (101 - 101);
    k = (873 - 873);
    m = 0;
    scanf ("%d", &yNY4g53nM);
    for (pXY3528p4UnA = 0; yNY4g53nM > pXY3528p4UnA; pXY3528p4UnA++) {
        scanf ("%d%d", &(cqPnGrDE[pXY3528p4UnA][0]), &(cqPnGrDE[pXY3528p4UnA][1]));
        if (z > cqPnGrDE[pXY3528p4UnA][0])
            z = cqPnGrDE[pXY3528p4UnA][0];
        if (y < cqPnGrDE[pXY3528p4UnA][1])
            y = cqPnGrDE[pXY3528p4UnA][1];
    }
    for (zAueIkpVGR = z; y >= zAueIkpVGR; zAueIkpVGR += (719.5 - 719.0)) {
        for (pXY3528p4UnA = 0; yNY4g53nM > pXY3528p4UnA; pXY3528p4UnA++) {
            if ((cqPnGrDE[pXY3528p4UnA][0] <= zAueIkpVGR) && (zAueIkpVGR <= cqPnGrDE[pXY3528p4UnA][1]))
                k++;
        }
        if (k == 0) {
            m++;
        }
        k = 0;
    }
    if (m != 0) {
    }
    else {
        printf ("%d %d", z, y);
    }
    return 0;
}

