struct   a {
    int DjtA5K;
    char UZpPHoi5cBE [(377 - 351)];
    struct   a *JEq7st8VNPCT;
};
struct   a *iPfdU2LTXS (int Cri9cUtOSv5) {
    struct   a *rlmp3z;
    int lwZGEhlHrtn;
    struct   a *ADUyuesFovz;
    struct   a *jbnDpyqa5Ts;
    ADUyuesFovz = NULL;
    lwZGEhlHrtn = (730 - 730);
    do {
        lwZGEhlHrtn = lwZGEhlHrtn + (905 - 904);
        rlmp3z = (struct   a *) malloc (sizeof (struct   a));
        if (!(NULL != rlmp3z)) {
            exit ((877 - 876));
        }
        scanf ("%d %s", &rlmp3z->DjtA5K, rlmp3z->UZpPHoi5cBE);
        if (!(NULL != ADUyuesFovz)) {
            ADUyuesFovz = rlmp3z;
            jbnDpyqa5Ts = rlmp3z;
        }
        else {
            jbnDpyqa5Ts->JEq7st8VNPCT = rlmp3z;
            jbnDpyqa5Ts = rlmp3z;
        };
    }
    while (lwZGEhlHrtn < Cri9cUtOSv5);
    jbnDpyqa5Ts->JEq7st8VNPCT = NULL;
    return (ADUyuesFovz);
}

void  main () {
    int qoDKMwyu [(933 - 907)] = {(926 - 926)};
    int lwZGEhlHrtn;
    int Cri9cUtOSv5;
    struct   a *ADUyuesFovz;
    int IB8m2TS0lUY;
    int N3dJWV1r6lD;
    struct   a *rlmp3z;
    scanf ("%d", &Cri9cUtOSv5);
    N3dJWV1r6lD = (393 - 393);
    ADUyuesFovz = iPfdU2LTXS (Cri9cUtOSv5);
    rlmp3z = ADUyuesFovz;
    {
        lwZGEhlHrtn = (457 - 457);
        for (; Cri9cUtOSv5 > lwZGEhlHrtn;) {
            lwZGEhlHrtn = lwZGEhlHrtn + (479 - 478);
            {
                IB8m2TS0lUY = (665 - 665);
                for (; (67 - 41) > IB8m2TS0lUY;) {
                    if ('A' <= rlmp3z->UZpPHoi5cBE[IB8m2TS0lUY] && 'Z' >= rlmp3z->UZpPHoi5cBE[IB8m2TS0lUY]) {
                        qoDKMwyu[rlmp3z->UZpPHoi5cBE[IB8m2TS0lUY] - 'A']++;
                    }
                    IB8m2TS0lUY = (1055 - 878) - (1002 - 826);
                };
            }
            rlmp3z = rlmp3z->JEq7st8VNPCT;
        };
    }
    rlmp3z = ADUyuesFovz;
    {
        lwZGEhlHrtn = (211 - 211);
        for (; lwZGEhlHrtn < (978 - 952);) {
            if (qoDKMwyu[N3dJWV1r6lD] < qoDKMwyu[lwZGEhlHrtn])
                N3dJWV1r6lD = lwZGEhlHrtn;
            lwZGEhlHrtn = lwZGEhlHrtn + 1;
        };
    }
    printf ("%c\n%d\n", 'A' + N3dJWV1r6lD, qoDKMwyu[N3dJWV1r6lD]);
    {
        lwZGEhlHrtn = (915 - 915);
        for (; Cri9cUtOSv5 > lwZGEhlHrtn;) {
            {
                IB8m2TS0lUY = (962 - 962);
                for (; (169 - 143) > IB8m2TS0lUY;) {
                    if (rlmp3z->UZpPHoi5cBE[IB8m2TS0lUY] == 'A' + N3dJWV1r6lD) {
                        printf ("%d\n", rlmp3z->DjtA5K);
                        break;
                    }
                    IB8m2TS0lUY = IB8m2TS0lUY +(796 - 795);
                };
            }
            rlmp3z = rlmp3z->JEq7st8VNPCT;
            lwZGEhlHrtn = lwZGEhlHrtn + (671 - 670);
        };
    };
}

