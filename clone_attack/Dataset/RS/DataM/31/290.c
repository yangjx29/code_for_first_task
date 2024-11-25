struct   student {
    char YT9V3zw [100];
    struct   student *next;
};
struct   student *Ev0MUjrIT1 () {
    struct   student *QfwztC59Y, *p1, *fG76R8Dxk;
    p1 = (struct   student *) malloc (len);
    gets (p1->YT9V3zw);
    p1->next = null;
    do {
        fG76R8Dxk = (struct   student *) malloc (len);
        gets (fG76R8Dxk->YT9V3zw);
        fG76R8Dxk->next = p1;
        p1 = fG76R8Dxk;
    }
    while (strcmp (fG76R8Dxk->YT9V3zw, "end"));
    QfwztC59Y = fG76R8Dxk;
    return (QfwztC59Y);
}

void  main () {
    struct   student *y5xMiz;
    struct   student *QfwztC59Y;
    QfwztC59Y = Ev0MUjrIT1 ();
    y5xMiz = QfwztC59Y;
    while (y5xMiz->next) {
        y5xMiz = y5xMiz->next;
        printf ("%s\n", y5xMiz->YT9V3zw);
    };
}

