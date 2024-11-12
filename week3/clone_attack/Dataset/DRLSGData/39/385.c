struct   student {
    char ush3FdqmSG [(86 - 66)];
    int aver;
    int UzNJIuwQhk;
    char ZFXQMHhB;
    char b;
    int punish;
    int prize;
    struct   student *next;
};
int Kdro6v54eMk;

struct   student *creat (void ) {
    int n;
    struct   student *head;
    struct   student *RgD4pZ;
    struct   student *p2;
    head = NULL;
    RgD4pZ = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", RgD4pZ->ush3FdqmSG, &RgD4pZ->aver, &RgD4pZ->UzNJIuwQhk, &RgD4pZ->ZFXQMHhB, &RgD4pZ->b, &RgD4pZ->punish);
    n = (590 - 590);
    for (; Kdro6v54eMk -(775 - 774) > n;) {
        n++;
        if (!((548 - 547) != n))
            head = RgD4pZ;
        else
            p2->next = RgD4pZ;
        p2 = RgD4pZ;
        RgD4pZ = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", RgD4pZ->ush3FdqmSG, &RgD4pZ->aver, &RgD4pZ->UzNJIuwQhk, &RgD4pZ->ZFXQMHhB, &RgD4pZ->b, &RgD4pZ->punish);
    }
    p2->next = RgD4pZ;
    RgD4pZ->next = NULL;
    return (head);
}

void  main () {
    struct   student *head;
    struct   student *q1;
    struct   student *q2;
    int Fu5oOU;
    scanf ("%d", &Kdro6v54eMk);
    head = creat ();
    q1 = head;
    q2 = head;
    Fu5oOU = (59 - 59);
    for (; q1 != NULL;) {
        q1->prize = (677 - 677);
        if ((761 - 681) < q1->aver && q1->punish > (873 - 873))
            q1->prize += 8000;
        if ((245 - 160) < q1->aver && (995 - 915) < q1->UzNJIuwQhk)
            q1->prize += (4117 - 117);
        if ((306 - 216) < q1->aver)
            q1->prize += (2368 - 368);
        if (q1->aver > (255 - 170) && q1->b == 'Y')
            q1->prize += (1629 - 629);
        if (q1->UzNJIuwQhk > (882 - 802) && q1->ZFXQMHhB == 'Y')
            q1->prize += (1197 - 347);
        Fu5oOU += q1->prize;
        if (q2->prize < q1->prize)
            q2 = q1;
        q1 = q1->next;
    }
    printf ("%s\n%d\n%d\n", q2->ush3FdqmSG, q2->prize, Fu5oOU);
}

