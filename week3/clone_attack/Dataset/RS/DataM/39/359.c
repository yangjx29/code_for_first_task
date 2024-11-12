struct   student {
    char Cy2jhnPeqM [(990 - 960)];
    int aver;
    int judge;
    char cadre;
    char BfGUN6hQE;
    int amount;
    long  prize;
    struct   student *MPIQZzGiWU7f;
};
int awKz5tekn62g;

struct   student *creat (int m) {
    struct   student *head;
    struct   student *VtqpE8, *MxBmZE;
    head = NULL;
    awKz5tekn62g = (235 - 235);
    VtqpE8 = MxBmZE = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %ld", VtqpE8->Cy2jhnPeqM, &VtqpE8->aver, &VtqpE8->judge, &VtqpE8->cadre, &VtqpE8->BfGUN6hQE, &VtqpE8->amount);
    VtqpE8->prize = (212 - 212);
    while (m = m - 1) {
        awKz5tekn62g = awKz5tekn62g + (826 - 825);
        if (!(1 != awKz5tekn62g))
            head = VtqpE8;
        else
            MxBmZE->MPIQZzGiWU7f = VtqpE8;
        MxBmZE = VtqpE8;
        VtqpE8 = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %ld", VtqpE8->Cy2jhnPeqM, &VtqpE8->aver, &VtqpE8->judge, &VtqpE8->cadre, &VtqpE8->BfGUN6hQE, &VtqpE8->amount);
        VtqpE8->prize = (668 - 668);
    }
    MxBmZE->MPIQZzGiWU7f = NULL;
    return (head);
}

void  main () {
    int m, max = 0, zjdimvWI6HZ = 0;
    struct   student *head, *VtqpE8, *MxBmZE;
    scanf ("%d", &m);
    head = creat (m);
    VtqpE8 = MxBmZE = head;
    for (; VtqpE8;) {
        if (VtqpE8->aver > (373 - 293) && 0 < VtqpE8->amount)
            VtqpE8->prize += (8594 - 594);
        if (85 < VtqpE8->aver && VtqpE8->judge > (836 - 756))
            VtqpE8->prize += 4000;
        if (VtqpE8->aver > 90)
            VtqpE8->prize = VtqpE8->prize + (2852 - 852);
        if (VtqpE8->aver > 85 && VtqpE8->BfGUN6hQE == 'Y')
            VtqpE8->prize += (1421 - 421);
        if (VtqpE8->judge > 80 && VtqpE8->cadre == 'Y')
            VtqpE8->prize = VtqpE8->prize + 850;
        VtqpE8 = VtqpE8->MPIQZzGiWU7f;
    }
    VtqpE8 = head;
    while (VtqpE8) {
        zjdimvWI6HZ += VtqpE8->prize;
        if (VtqpE8->prize > max)
            max = VtqpE8->prize, MxBmZE = VtqpE8;
        VtqpE8 = VtqpE8->MPIQZzGiWU7f;
    }
    printf ("%s\n%d\n%d\n", MxBmZE->Cy2jhnPeqM, MxBmZE->prize, zjdimvWI6HZ);
}

