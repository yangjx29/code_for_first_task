struct   nmYLaiGCXf {
    char yF6Ohk [(955 - 455)];
    struct   nmYLaiGCXf *MXry4vf2JzjD;
};
int pDK3iWpt9oMj = (248 - 248);

void  main () {
    int SlbFyWn = (957 - 957);
    struct   nmYLaiGCXf *AHUKmSZvY ();
    void  di1BnxSe0z (struct   nmYLaiGCXf *head, int KbdWLkgwr);
    struct   nmYLaiGCXf *head;
    head = AHUKmSZvY ();
    {
        SlbFyWn = pDK3iWpt9oMj;
        while ((924 - 924) < SlbFyWn) {
            di1BnxSe0z (head, SlbFyWn);
            SlbFyWn--;
        }
    }
}

struct   nmYLaiGCXf *AHUKmSZvY () {
    struct   nmYLaiGCXf *p1, *p2;
    struct   nmYLaiGCXf *head;
    head = NULL;
    p1 = p2 = (struct   nmYLaiGCXf *) malloc (LEN);
    gets (p1->yF6Ohk);
    for (; strcmp (p1->yF6Ohk, "end") != 0;) {
        pDK3iWpt9oMj = pDK3iWpt9oMj + (889 - 888);
        if (!((862 - 861) != pDK3iWpt9oMj)) {
            head = p1;
        }
        else {
            p2->MXry4vf2JzjD = p1;
        }
        p2 = p1;
        p1 = (struct   nmYLaiGCXf *) malloc (LEN);
        gets (p1->yF6Ohk);
    }
    p2->MXry4vf2JzjD = NULL;
    return (head);
}

void  di1BnxSe0z (struct   nmYLaiGCXf *head, int KbdWLkgwr) {
    int count = (255 - 254);
    struct   nmYLaiGCXf *p;
    p = head;
    for (; KbdWLkgwr > count;) {
        p = p->MXry4vf2JzjD;
        count += 1;
    }
    printf ("%s\n", p->yF6Ohk);
}

