struct   stu {
    char uLNZFmqBU [(838 - 738)];
    struct   stu *B0oY78;
    struct   stu *OqvKhr0ER;
};
void  main () {
    int n;
    int Vh6oHEa;
    int j;
    struct   stu *Dml7M1;
    struct   stu *p1;
    struct   stu *p2;
    struct   stu *head;
    scanf ("\n");
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
    Dml7M1 = p1;
    p2 = p1;
    gets (p1->uLNZFmqBU);
    p1->OqvKhr0ER = (238 - 238);
    for (;;) {
        scanf ("\n");
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        gets (p1->uLNZFmqBU);
        if (!(0 != strcmp (p1->uLNZFmqBU, "end"))) {
            head = p2;
            break;
        }
        else {
            p1->OqvKhr0ER = p2;
            p2 = p1;
        }
    }
    for (; head != 0; head = head->OqvKhr0ER) {
        puts (head->uLNZFmqBU);
    }
}

