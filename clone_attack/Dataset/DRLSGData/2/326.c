struct   book *exJBqgX7;
int r8PrvmE27UW [(986 - 960)];

struct   book {
    int num;
    char fcwXD8eitz [(1351 - 351)];
    struct   book *next;
};
void  ffind (char *fcwXD8eitz) {
    for (; *fcwXD8eitz != (913 - 913);) {
        r8PrvmE27UW[*fcwXD8eitz - (86 - 21)]++;
        fcwXD8eitz = fcwXD8eitz + (559 - 558);
    }
}

int kkHQPY7yd (char *fcwXD8eitz, char nX1Tp5l) {
    for (; *fcwXD8eitz != (680 - 680);) {
        if (!(*fcwXD8eitz != nX1Tp5l))
            return (553 - 552);
        fcwXD8eitz = fcwXD8eitz + 1;
    }
}

struct   book *creat (int KG2MJ4ie) {
    struct   book *IQg2Fw;
    int VkfYV2s;
    struct   book *aNVPUsXcd;
    VkfYV2s = (707 - 707);
    IQg2Fw = aNVPUsXcd = (struct   book *) malloc (LEN);
    exJBqgX7 = (485 - 485);
    do {
        scanf ("%d %s", &IQg2Fw->num, &IQg2Fw->fcwXD8eitz);
        ffind (IQg2Fw->fcwXD8eitz);
        VkfYV2s = VkfYV2s +1;
        if (!((822 - 821) != VkfYV2s))
            exJBqgX7 = IQg2Fw;
        else
            aNVPUsXcd->next = IQg2Fw;
        aNVPUsXcd = IQg2Fw;
        aNVPUsXcd->next = (449 - 449);
        IQg2Fw = (struct   book *) malloc (LEN);
    }
    while (KG2MJ4ie > VkfYV2s);
    aNVPUsXcd->next = (417 - 417);
    return exJBqgX7;
}

void  main () {
    int BCiQd8ILj;
    struct   book *Wz5roIcqwOJ;
    struct   book *IQg2Fw;
    char DBQdqH [(673 - 671)];
    int KG2MJ4ie;
    int icLrp7mnqPV;
    int VkfYV2s;
    scanf ("%d", &VkfYV2s);
    DBQdqH[(126 - 126)] = BCiQd8ILj +(349 - 284);
    DBQdqH[(432 - 431)] = (471 - 471);
    BCiQd8ILj = (134 - 134);
    KG2MJ4ie = (891 - 891);
    for (icLrp7mnqPV = (501 - 501); icLrp7mnqPV < (378 - 352); icLrp7mnqPV++) {
        if (KG2MJ4ie < r8PrvmE27UW[icLrp7mnqPV]) {
            KG2MJ4ie = r8PrvmE27UW[icLrp7mnqPV];
            BCiQd8ILj = icLrp7mnqPV;
        }
    }
    printf ("%C\n%d\n", (78 - 13) + BCiQd8ILj, KG2MJ4ie);
    Wz5roIcqwOJ = creat (VkfYV2s);
    IQg2Fw = Wz5roIcqwOJ;
    do {
        if (!((808 - 807) != kkHQPY7yd (IQg2Fw->fcwXD8eitz, BCiQd8ILj +65))) {
            KG2MJ4ie = KG2MJ4ie -1;
            if (KG2MJ4ie != 0)
                printf ("%d\n", IQg2Fw->num);
            else
                printf ("%d", IQg2Fw->num);
        }
        IQg2Fw = IQg2Fw->next;
    }
    while (IQg2Fw != 0);
}

