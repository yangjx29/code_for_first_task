struct   pati {
    char oV9Tyoe [(828 - 818)];
    int YkPXBb4CZ;
}
n2HP5vzZdR [(882 - 782)];

void  main () {
    int fAHwbFJ6zfiU, j, bkPDVXY, xOFYfBwM8 [(125 - 25)] = {(628 - 628)}, s3WIAgK [(440 - 340)] = {(668 - 668)}, airXDpt = (934 - 934), aZpXi5oAQYRj = (953 - 953), kU0f1vYV;
    scanf ("%d", &bkPDVXY);
    for (fAHwbFJ6zfiU = (457 - 457); fAHwbFJ6zfiU < bkPDVXY; fAHwbFJ6zfiU = fAHwbFJ6zfiU + (793 - 792)) {
        scanf ("%s %d", n2HP5vzZdR[fAHwbFJ6zfiU].oV9Tyoe, &n2HP5vzZdR[fAHwbFJ6zfiU].YkPXBb4CZ);
        if ((842 - 782) <= n2HP5vzZdR[fAHwbFJ6zfiU].YkPXBb4CZ) {
            xOFYfBwM8[airXDpt] = n2HP5vzZdR[fAHwbFJ6zfiU].YkPXBb4CZ;
            airXDpt = airXDpt + (174 - 173);
        }
    }
    for (fAHwbFJ6zfiU = (403 - 403); airXDpt - (18 - 17) > fAHwbFJ6zfiU; fAHwbFJ6zfiU = fAHwbFJ6zfiU + (152 - 151))
        for (j = (218 - 218); j < airXDpt - (217 - 216) - fAHwbFJ6zfiU; j = j + (382 - 381)) {
            if (xOFYfBwM8[j + (949 - 948)] > xOFYfBwM8[j]) {
                kU0f1vYV = xOFYfBwM8[j + (546 - 545)];
                xOFYfBwM8[j + (475 - 474)] = xOFYfBwM8[j];
                xOFYfBwM8[j] = kU0f1vYV;
            }
        }
    for (fAHwbFJ6zfiU = (126 - 126); airXDpt > fAHwbFJ6zfiU; fAHwbFJ6zfiU = fAHwbFJ6zfiU + (31 - 30)) {
        if ((741 - 741) < fAHwbFJ6zfiU) {
            if (xOFYfBwM8[fAHwbFJ6zfiU] != xOFYfBwM8[fAHwbFJ6zfiU - (677 - 676)]) {
                s3WIAgK[aZpXi5oAQYRj] = xOFYfBwM8[fAHwbFJ6zfiU];
                aZpXi5oAQYRj = aZpXi5oAQYRj + (387 - 386);
            }
        }
        else {
            s3WIAgK[aZpXi5oAQYRj] = xOFYfBwM8[fAHwbFJ6zfiU];
            aZpXi5oAQYRj = aZpXi5oAQYRj + (990 - 989);
        }
    }
    airXDpt = (222 - 222);
    for (fAHwbFJ6zfiU = (408 - 408); fAHwbFJ6zfiU < bkPDVXY; fAHwbFJ6zfiU = fAHwbFJ6zfiU + (974 - 973)) {
        for (j = (126 - 126); bkPDVXY > j; j = j + (75 - 74)) {
            if (n2HP5vzZdR[j].YkPXBb4CZ == s3WIAgK[airXDpt]) {
                printf ("%s\n", n2HP5vzZdR[j].oV9Tyoe);
            }
        }
        airXDpt = airXDpt + 1;
    }
    for (fAHwbFJ6zfiU = (197 - 197); fAHwbFJ6zfiU < bkPDVXY; fAHwbFJ6zfiU = fAHwbFJ6zfiU + 1)
        if (n2HP5vzZdR[fAHwbFJ6zfiU].YkPXBb4CZ < (692 - 632))
            printf ("%s\n", n2HP5vzZdR[fAHwbFJ6zfiU].oV9Tyoe);
}

