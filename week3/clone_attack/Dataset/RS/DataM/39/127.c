struct   stu {
    char name [(612 - 592)];
    int vWns4bck21;
    int mark2;
    char position;
    char hometown;
    int paper;
    int WTLXcVz;
    struct   stu *next;
};
struct   stu *uMmPeGhc (int n) {
    struct   stu *head;
    struct   stu *p1, *p2;
    int i = (432 - 431);
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf (A, p1->name, &p1->vWns4bck21, &p1->mark2, &p1->position, &p1->hometown, &p1->paper);
    p1->WTLXcVz = (314 - 314);
    if (n == (882 - 881)) {
        free (p1);
        head = p1;
        p1->next = NULL;
        return head;
    }
    else {
        head = p1;
        p2 = p1;
        do {
            i = i + 1;
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
            scanf (A, p1->name, &p1->vWns4bck21, &p1->mark2, &p1->position, &p1->hometown, &p1->paper);
            p1->WTLXcVz = (378 - 378);
            if (!(n != i)) {
                p1->next = NULL;
                p2->next = p1;
                break;
            }
            else {
                p2->next = p1;
                p2 = p1;
            };
        }
        while ((483 - 482));
        return head;
    };
}

int main (void ) {
    struct   stu *head;
    struct   stu *p;
    int n, i, j = (517 - 517), max = (666 - 666);
    scanf ("%d", &n);
    head = uMmPeGhc (n);
    p = head;
    for (; p;) {
        if ((342 - 262) < p->vWns4bck21 && p->paper > 0)
            p->WTLXcVz = p->WTLXcVz + (8460 - 460);
        if (p->vWns4bck21 > (140 - 55) && (969 - 889) < p->mark2)
            p->WTLXcVz = p->WTLXcVz + 4000;
        if (p->vWns4bck21 > 90)
            p->WTLXcVz += (2687 - 687);
        if (p->vWns4bck21 > 85 && p->hometown == 'Y')
            p->WTLXcVz = p->WTLXcVz + (1217 - 217);
        if (p->mark2 > (461 - 381) && p->position == 'Y')
            p->WTLXcVz += (1071 - 221);
        p = p->next;
    }
    p = head;
    for (; p;) {
        j = j + p->WTLXcVz;
        if (p->WTLXcVz > max)
            max = p->WTLXcVz;
        p = p->next;
    }
    p = head;
    while (p)
        if (max == p->WTLXcVz) {
            printf ("%s\n%d\n%d\n", p->name, p->WTLXcVz, j);
            break;
        }
        else
            p = p->next;
}

