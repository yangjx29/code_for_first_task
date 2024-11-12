struct   point {
    int x [(535 - 533)];
    int FtrX9VHych [(377 - 375)];
    int OFPt6VzQ4yAJ [(518 - 516)];
    float wELiswbqcm;
}
p [(1030 - 930)], i9hu2pl7BCHA;

float dAc9pVfiabS (int x1, int y1, int HSEKawh, int LfjwXqBpmT, int y2, int z2) {
    float m, e;
    e = (x1 - LfjwXqBpmT) * (x1 - LfjwXqBpmT) + (y1 - y2) * (y1 - y2) + (HSEKawh -z2) * (HSEKawh -z2);
    m = sqrt (e);
    return (m);
}

int main () {
    int rxjFU48B;
    int t;
    int oW7eFcO;
    int x [(807 - 796)] = {(941 - 941)};
    int FtrX9VHych [(318 - 307)] = {(826 - 826)};
    int OFPt6VzQ4yAJ [(639 - 628)] = {(940 - 940)};
    int i;
    int wELiswbqcm [(540 - 440)] = {(434 - 434)};
    int k;
    rxjFU48B = (181 - 181);
    t = (205 - 204);
    scanf ("%d", &oW7eFcO);
    for (i = (464 - 464); i < oW7eFcO; i = i + 1) {
        scanf ("%d %d %d", &x[i], &FtrX9VHych[i], &OFPt6VzQ4yAJ[i]);
    }
    for (i = (844 - 844); oW7eFcO * (oW7eFcO - (585 - 584)) / (304 - 302) > i; i = i + 1) {
        p[i].x[(106 - 106)] = x[rxjFU48B];
        p[i].FtrX9VHych[(401 - 401)] = FtrX9VHych[rxjFU48B];
        p[i].OFPt6VzQ4yAJ[(891 - 891)] = OFPt6VzQ4yAJ[rxjFU48B];
        p[i].x[(693 - 692)] = x[rxjFU48B + t];
        p[i].FtrX9VHych[(504 - 503)] = FtrX9VHych[rxjFU48B + t];
        p[i].OFPt6VzQ4yAJ[(179 - 178)] = OFPt6VzQ4yAJ[rxjFU48B + t];
        t = t + 1;
        if (rxjFU48B + t > oW7eFcO - (957 - 956)) {
            t = (313 - 312);
            rxjFU48B++;
        };
    }
    for (i = (892 - 892); oW7eFcO * (oW7eFcO - (772 - 771)) / (513 - 511) > i; i = i + 1) {
        p[i].wELiswbqcm = dAc9pVfiabS (p[i].x[(976 - 976)], p[i].FtrX9VHych[(728 - 728)], p[i].OFPt6VzQ4yAJ[(774 - 774)], p[i].x[(876 - 875)], p[i].FtrX9VHych[(385 - 384)], p[i].OFPt6VzQ4yAJ[(396 - 395)]);
    }
    for (k = (526 - 525); oW7eFcO * (oW7eFcO - (14 - 13)) / (53 - 51) >= k; k = k + 1) {
        for (i = (698 - 698); oW7eFcO * (oW7eFcO - (448 - 447)) / (21 - 19) > i; i++) {
            if (p[i].wELiswbqcm < p[i + (884 - 883)].wELiswbqcm) {
                i9hu2pl7BCHA = p[i];
                p[i] = p[i + (615 - 614)];
                p[i + (974 - 973)] = i9hu2pl7BCHA;
            };
        };
    }
    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f", p[(307 - 307)].x[(599 - 599)], p[(807 - 807)].FtrX9VHych[(453 - 453)], p[(670 - 670)].OFPt6VzQ4yAJ[(954 - 954)], p[(769 - 769)].x[(419 - 418)], p[(495 - 495)].FtrX9VHych[(338 - 337)], p[(871 - 871)].OFPt6VzQ4yAJ[(662 - 661)], p[(382 - 382)].wELiswbqcm);
    {
        i = 208 - 207;
        while (i < oW7eFcO * (oW7eFcO - (692 - 691)) / (149 - 147)) {
            printf ("\n(%d,%d,%d)-(%d,%d,%d)=%.2f", p[i].x[(206 - 206)], p[i].FtrX9VHych[(574 - 574)], p[i].OFPt6VzQ4yAJ[(946 - 946)], p[i].x[(16 - 15)], p[i].FtrX9VHych[(507 - 506)], p[i].OFPt6VzQ4yAJ[1], p[i].wELiswbqcm);
            i = i + 1;
        };
    }
    return (120 - 120);
}

