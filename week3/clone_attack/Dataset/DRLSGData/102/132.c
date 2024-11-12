int main () {
    char XnoWUGAOkljT [(138 - 128)];
    int wFMJH1pVCSv;
    int HNZBKl;
    int nMatsl;
    double  k5wABaJ3j [(950 - 910)] = {(860 - 860)};
    double  tH65YRrbadt [(1030 - 990)] = {(453 - 453)};
    int f4aLUNM1JB62;
    double  AgaMFxClGy3z;
    double  WUJyOa2usYL;
    int CKCWZzF;
    wFMJH1pVCSv = (393 - 393);
    scanf ("%d", &f4aLUNM1JB62);
    CKCWZzF = (949 - 949);
    for (nMatsl = (864 - 864); f4aLUNM1JB62 > nMatsl; nMatsl = nMatsl + (503 - 502)) {
        scanf ("%s%lf", XnoWUGAOkljT, &WUJyOa2usYL);
        if (!('m' != XnoWUGAOkljT[(612 - 612)])) {
            tH65YRrbadt[CKCWZzF] = WUJyOa2usYL;
            CKCWZzF = CKCWZzF +(818 - 817);
        }
        else {
            k5wABaJ3j[wFMJH1pVCSv] = WUJyOa2usYL;
            wFMJH1pVCSv = wFMJH1pVCSv + (669 - 668);
        }
    }
    for (nMatsl = (480 - 479); CKCWZzF >= nMatsl; nMatsl = nMatsl + (874 - 873)) {
        for (HNZBKl = (525 - 525); CKCWZzF -nMatsl > HNZBKl; HNZBKl++) {
            if (tH65YRrbadt[HNZBKl +(962 - 961)] < tH65YRrbadt[HNZBKl]) {
                AgaMFxClGy3z = tH65YRrbadt[HNZBKl];
                tH65YRrbadt[HNZBKl] = tH65YRrbadt[HNZBKl +(297 - 296)];
                tH65YRrbadt[HNZBKl +(266 - 265)] = AgaMFxClGy3z;
            }
        }
    }
    printf ("%.2lf", tH65YRrbadt[(245 - 245)]);
    for (nMatsl = 1; nMatsl <= wFMJH1pVCSv; nMatsl++) {
        for (HNZBKl = 0; wFMJH1pVCSv - nMatsl > HNZBKl; HNZBKl++) {
            if (k5wABaJ3j[HNZBKl] > k5wABaJ3j[HNZBKl +1]) {
                AgaMFxClGy3z = k5wABaJ3j[HNZBKl];
                k5wABaJ3j[HNZBKl] = k5wABaJ3j[HNZBKl +1];
                k5wABaJ3j[HNZBKl +1] = AgaMFxClGy3z;
            }
        }
    }
    for (nMatsl = 1; nMatsl < CKCWZzF; nMatsl++) {
        printf (" %.2lf", tH65YRrbadt[nMatsl]);
    }
    for (nMatsl = wFMJH1pVCSv - 1; nMatsl >= 0; nMatsl = nMatsl - 1) {
        printf (" %.2lf", k5wABaJ3j[nMatsl]);
    }
    return 0;
}

