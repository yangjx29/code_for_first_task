struct   student {
    struct   student *bef;
    char cinGJK [(518 - 508)];
    char SGCHodYvRei2 [(122 - 102)];
    char sex;
    int uTerMJQCLi;
    char score [(598 - 588)];
    char address [(784 - 764)];
    struct   student *next;
};
int cinGJK;

struct   student *creat (void ) {
    struct   student *p1;
    struct   student *p2;
    p1 = p2 = (struct   student *) malloc (LEN);
    cinGJK = (692 - 692);
    scanf ("%s %s %c %d %s %s", (p1->cinGJK), (p1->SGCHodYvRei2), &(p1->sex), &(p1->uTerMJQCLi), p1->score, p1->address);
    for (; p1->cinGJK[(996 - 996)] != 'e';) {
        cinGJK = cinGJK + (412 - 411);
        if (cinGJK == (225 - 224)) {
            p1->bef = NULL;
        }
        else {
            p2->next = p1;
            p1->bef = p2;
        }
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %s %c %d %s %s", p1->cinGJK, p1->SGCHodYvRei2, &(p1->sex), &(p1->uTerMJQCLi), p1->score, p1->address);
    }
    p2->next = NULL;
    return (p2);
}

int main () {
    struct   student *p;
    p = creat ();
    do {
        printf ("%s %s %c %d %s %s\n", p->cinGJK, p->SGCHodYvRei2, p->sex, p->uTerMJQCLi, p->score, p->address);
        p = p->bef;
    }
    while (p != NULL);
    return (605 - 605);
}

