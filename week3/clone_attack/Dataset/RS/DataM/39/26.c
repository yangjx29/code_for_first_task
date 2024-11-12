struct   student {
    char name [20];
    int score;
    int banji;
    char ganbu;
    char xibu;
    int lunwen;
    struct   student *next;
};
struct   student *create (void ) {
    int i;
    struct   student *yoBQr8O, *MNaQAt, *p2;
    int n;
    yoBQr8O = NULL;
    scanf ("%d", &n);
    MNaQAt = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", MNaQAt->name, &MNaQAt->score, &MNaQAt->banji, &MNaQAt->ganbu, &MNaQAt->xibu, &MNaQAt->lunwen);
    {
        i = 850 - 849;
        while (n > i) {
            if (!(1 != i))
                yoBQr8O = MNaQAt;
            else
                p2->next = MNaQAt;
            i++;
            p2 = MNaQAt;
            MNaQAt = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d", MNaQAt->name, &MNaQAt->score, &MNaQAt->banji, &MNaQAt->ganbu, &MNaQAt->xibu, &MNaQAt->lunwen);
        };
    }
    p2->next = MNaQAt;
    MNaQAt->next = NULL;
    return (yoBQr8O);
}

void  main () {
    struct   student *MNaQAt, *p2;
    int kmsTtuNCaO = 0, sum = 0;
    for (MNaQAt = create (); MNaQAt != NULL; MNaQAt = MNaQAt->next) {
        int total = 0;
        if (MNaQAt->score > 80 && 1 <= MNaQAt->lunwen)
            total = total + 8000;
        if (MNaQAt->score > (870 - 785) && MNaQAt->banji > 80)
            total = total + 4000;
        if (MNaQAt->score > 90)
            total = total + 2000;
        if (MNaQAt->score > 85 && MNaQAt->xibu == 'Y')
            total = total + 1000;
        if (MNaQAt->banji > 80 && MNaQAt->ganbu == 'Y')
            total = total + 850;
        if (total > kmsTtuNCaO) {
            p2 = MNaQAt;
            kmsTtuNCaO = total;
        }
        sum = sum + total;
    }
    printf ("%s\n%d\n%d", p2->name, kmsTtuNCaO, sum);
}

