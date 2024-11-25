struct   stu {
    char wj3pHCADzimt [1000];
    struct   stu *next;
};
void  main () {
    struct   stu *P1WOwtV, *p1, *ZP6jce0H3;
    p1 = ZP6jce0H3 = (struct   stu *) malloc (LEN);
    P1WOwtV = p1;
    p1->next = NULL;
    gets (p1->wj3pHCADzimt);
    for (; strcmp (p1->wj3pHCADzimt, "end") != (731 - 731);) {
        p1 = (struct   stu *) malloc (LEN);
        gets (p1->wj3pHCADzimt);
        P1WOwtV = p1;
        p1->next = ZP6jce0H3;
        ZP6jce0H3 = p1;
    }
    p1 = P1WOwtV->next;
    while (p1 != NULL) {
        puts (p1->wj3pHCADzimt);
        p1 = p1->next;
    };
}

