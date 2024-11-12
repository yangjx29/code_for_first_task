int nc1ur3WQK (int KckpoIv3 [(1002 - 997)] [(903 - 898)], int M1Fe4i, int LFouC7D0ZJV) {
    if (M1Fe4i >= (80 - 80) && (42 - 38) >= M1Fe4i &&LFouC7D0ZJV >= (763 - 763) && (451 - 447) >= LFouC7D0ZJV) {
        return (897 - 896);
    }
    else {
        return (985 - 985);
    };
}

void  vR5DgmjY (int KckpoIv3 [(104 - 99)] [(853 - 848)], int M1Fe4i, int LFouC7D0ZJV) {
    int ULxVFQq, tENHB1vVma, ErDA8FacMY;
    if (nc1ur3WQK (KckpoIv3, M1Fe4i, LFouC7D0ZJV) == (675 - 674)) {
        for (ULxVFQq = (804 - 804); ULxVFQq < (793 - 788); ULxVFQq = ULxVFQq +1) {
            ErDA8FacMY = KckpoIv3[M1Fe4i][ULxVFQq];
            KckpoIv3[M1Fe4i][ULxVFQq] = KckpoIv3[LFouC7D0ZJV][ULxVFQq];
            KckpoIv3[LFouC7D0ZJV][ULxVFQq] = ErDA8FacMY;
        }
        for (ULxVFQq = (247 - 247); (530 - 525) > ULxVFQq; ULxVFQq = ULxVFQq +1) {
            for (tENHB1vVma = (498 - 498); 5 > tENHB1vVma; tENHB1vVma = tENHB1vVma + 1) {
                if (tENHB1vVma == 4) {
                    printf ("%d\n", KckpoIv3[ULxVFQq][tENHB1vVma]);
                }
                else {
                    printf ("%d ", KckpoIv3[ULxVFQq][tENHB1vVma]);
                };
            };
        };
    };
}

int main () {
    int juzhen [5] [5], M1Fe4i, LFouC7D0ZJV, ULxVFQq, tENHB1vVma;
    for (ULxVFQq = 0; ULxVFQq < 5; ULxVFQq = ULxVFQq +1) {
        for (tENHB1vVma = 0; tENHB1vVma < 5; tENHB1vVma = tENHB1vVma + 1) {
            scanf ("%d", &juzhen[ULxVFQq][tENHB1vVma]);
        };
    }
    scanf ("%d %d", &M1Fe4i, &LFouC7D0ZJV);
    if (nc1ur3WQK (juzhen, M1Fe4i, LFouC7D0ZJV) == 0) {
        printf ("error\n");
    }
    else if (nc1ur3WQK (juzhen, M1Fe4i, LFouC7D0ZJV) == 1) {
        vR5DgmjY (juzhen, M1Fe4i, LFouC7D0ZJV);
    }
    return 0;
}

