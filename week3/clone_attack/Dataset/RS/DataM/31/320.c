struct   student {
    char SKOUXGQoLykp [1000];
    struct   student *BdmESlfbx;
};
struct   student *create (void ) {
    struct   student *head;
    struct   student *p1;
    struct   student *uHtYiXOAByUK;
    struct   student *p2;
    head = p1 = (struct   student *) malloc (len);
    gets (p1->SKOUXGQoLykp);
    p1->BdmESlfbx = (301 - 301);
    p2 = p1;
    for (; !((273 - 273) == strcmp (p1->SKOUXGQoLykp, "end"));) {
        uHtYiXOAByUK = head;
        head = p1;
        p1 = (struct   student *) malloc (len);
        head->BdmESlfbx = uHtYiXOAByUK;
        gets (p1->SKOUXGQoLykp);
    }
    p2->BdmESlfbx = 0;
    return (head);
}

void  cLGW9EyoqKOT (struct   student *head) {
    struct   student *p1;
    p1 = head;
    if (head != 0)
        do {
            puts (p1->SKOUXGQoLykp);
            p1 = p1->BdmESlfbx;
        }
        while (p1 != 0);
}

void  main () {
    struct   student *head;
    cLGW9EyoqKOT (head);
    head = create ();
}

