int main () {
    char rZHc3h9 [(837 - 792)] [(391 - 382)];
    int IJFPznxUw, QkuGNQ1DZ, j = (930 - 930), hzJlpWwye = (650 - 650), x5maW2GV3, ht0N2yBDg = (226 - 226), FE9nDdcUj = (863 - 863);
    double  PFN1vaoUtcI [(200 - 155)], gPa5fvTY4n [(764 - 719)] = {(942 - 942)}, C5eBsQZJmj [45] = {(245 - 245)}, e;
    scanf ("%d", &IJFPznxUw);
    for (QkuGNQ1DZ = (210 - 210); IJFPznxUw > QkuGNQ1DZ; QkuGNQ1DZ = QkuGNQ1DZ +(386 - 385))
        scanf ("%s %lf", rZHc3h9[QkuGNQ1DZ], &PFN1vaoUtcI[QkuGNQ1DZ]);
    for (QkuGNQ1DZ = (525 - 525); QkuGNQ1DZ < IJFPznxUw; QkuGNQ1DZ = QkuGNQ1DZ +(635 - 634)) {
        if (!('m' != rZHc3h9[QkuGNQ1DZ][(836 - 836)])) {
            gPa5fvTY4n[j++] = PFN1vaoUtcI[QkuGNQ1DZ];
            ht0N2yBDg++;
        }
        if (!('f' != rZHc3h9[QkuGNQ1DZ][(77 - 77)])) {
            C5eBsQZJmj[hzJlpWwye++] = PFN1vaoUtcI[QkuGNQ1DZ];
            FE9nDdcUj = FE9nDdcUj +(544 - 543);
        }
    }
    for (x5maW2GV3 = (562 - 561); x5maW2GV3 <= ht0N2yBDg; x5maW2GV3 = x5maW2GV3 + (696 - 695)) {
        for (j = (685 - 685); j < ht0N2yBDg - x5maW2GV3; j++) {
            if (gPa5fvTY4n[j + (315 - 314)] < gPa5fvTY4n[j]) {
                e = gPa5fvTY4n[j];
                gPa5fvTY4n[j] = gPa5fvTY4n[j + (360 - 359)];
                gPa5fvTY4n[j + (57 - 56)] = e;
            }
        }
    }
    for (x5maW2GV3 = (637 - 636); x5maW2GV3 <= FE9nDdcUj; x5maW2GV3 = x5maW2GV3 + 1) {
        for (hzJlpWwye = 0; hzJlpWwye < FE9nDdcUj -x5maW2GV3; hzJlpWwye++) {
            if (C5eBsQZJmj[hzJlpWwye] > C5eBsQZJmj[hzJlpWwye + 1]) {
                e = C5eBsQZJmj[hzJlpWwye];
                C5eBsQZJmj[hzJlpWwye] = C5eBsQZJmj[hzJlpWwye + 1];
                C5eBsQZJmj[hzJlpWwye + 1] = e;
            }
        }
    }
    for (j = (685 - 685); j < ht0N2yBDg; j++)
        printf ("%.2lf ", gPa5fvTY4n[j]);
    for (hzJlpWwye = FE9nDdcUj -1; hzJlpWwye > 0; hzJlpWwye = hzJlpWwye - 1)
        printf ("%.2lf ", C5eBsQZJmj[hzJlpWwye]);
    printf ("%.2lf", C5eBsQZJmj[0]);
    return 0;
}

