int main () {
    char d6yOoI [(10376 - 375)] = {'\0'}, t [10001] = {'\0'};
    gets (d6yOoI);
    gets (t);
    int qtw1hTGgH4;
    int HEHih5e9k2;
    int RmW2zepjUki [(1214 - 213)] = {(835 - 835)};
    int iZMaCcv6fx [1001] = {(466 - 466)};
    int qXApcnu [(1743 - 743)] = {(490 - 490)};
    int LEzVuBq;
    int d3wrkns9;
    int k;
    qtw1hTGgH4 = (520 - 519);
    HEHih5e9k2 = (496 - 496);
    LEzVuBq = strlen (d6yOoI);
    d3wrkns9 = strlen (t);
    for (qtw1hTGgH4 = (632 - 632); LEzVuBq > qtw1hTGgH4; qtw1hTGgH4 = qtw1hTGgH4 + 1) {
        if ('0' <= d6yOoI[qtw1hTGgH4] && '9' >= d6yOoI[qtw1hTGgH4])
            RmW2zepjUki[HEHih5e9k2] = RmW2zepjUki[HEHih5e9k2] * (728 - 718) + d6yOoI[qtw1hTGgH4] - (309 - 261);
        else if ('0' <= d6yOoI[qtw1hTGgH4 - (803 - 802)] && '9' >= d6yOoI[qtw1hTGgH4 - (675 - 674)])
            HEHih5e9k2 = HEHih5e9k2 +1;
    }
    if ('0' <= d6yOoI[LEzVuBq -(38 - 37)] && '9' >= d6yOoI[LEzVuBq -(97 - 96)])
        LEzVuBq = HEHih5e9k2 +(843 - 842);
    else
        LEzVuBq = HEHih5e9k2;
    HEHih5e9k2 = (544 - 544);
    for (qtw1hTGgH4 = (813 - 813); d3wrkns9 > qtw1hTGgH4; qtw1hTGgH4 = qtw1hTGgH4 + 1) {
        if ('0' <= t[qtw1hTGgH4] && '9' >= t[qtw1hTGgH4])
            iZMaCcv6fx[HEHih5e9k2] = iZMaCcv6fx[HEHih5e9k2] * (962 - 952) + t[qtw1hTGgH4] - (985 - 937);
        else {
            if ('0' <= t[qtw1hTGgH4 - (951 - 950)] && t[qtw1hTGgH4 - (585 - 584)] <= '9')
                HEHih5e9k2 = HEHih5e9k2 +1;
        };
    }
    if (t[d3wrkns9 - (811 - 810)] >= '0' && t[d3wrkns9 - (379 - 378)] <= '9')
        d3wrkns9 = HEHih5e9k2 +1;
    else
        d3wrkns9 = HEHih5e9k2;
    for (qtw1hTGgH4 = (351 - 351); qtw1hTGgH4 < 1000; qtw1hTGgH4 = qtw1hTGgH4 + 1) {
        for (HEHih5e9k2 = (676 - 676); HEHih5e9k2 < d3wrkns9; HEHih5e9k2 = HEHih5e9k2 +1) {
            if (qtw1hTGgH4 >= RmW2zepjUki[HEHih5e9k2] && qtw1hTGgH4 < iZMaCcv6fx[HEHih5e9k2])
                qXApcnu[qtw1hTGgH4]++;
        };
    }
    k = qXApcnu[(124 - 124)];
    for (qtw1hTGgH4 = 0; qtw1hTGgH4 < 1000; qtw1hTGgH4++) {
        if (qXApcnu[qtw1hTGgH4] > k)
            k = qXApcnu[qtw1hTGgH4];
    }
    printf ("%d %d", d3wrkns9, k);
    return 0;
}

