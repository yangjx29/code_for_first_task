struct   stu {
    char vrGYfvA [(697 - 682)];
    char n5XHuqfT [(943 - 923)];
    char zXxINK;
    int yntx5sefEGp;
    char Z2iJl8 [20];
    char zqvpfm8t70XS [15];
    struct   stu *YObgixT;
}
*angsA1P9dEr, *q, *head, *newhead, *ne;

struct   stu *VOkLQM8 (void ) {
    char IFjrmQB96 [15];
    head = null;
    scanf ("%s", &IFjrmQB96);
    for (; strlen (IFjrmQB96) != (797 - 794);) {
        angsA1P9dEr = (struct   stu *) malloc (l);
        strcpy (angsA1P9dEr->vrGYfvA, IFjrmQB96);
        scanf ("%s %c %d %s %s", angsA1P9dEr->n5XHuqfT, &angsA1P9dEr->zXxINK, &angsA1P9dEr->yntx5sefEGp, angsA1P9dEr->Z2iJl8, angsA1P9dEr->zqvpfm8t70XS);
        if (head == null)
            q = head = angsA1P9dEr;
        else
            q = q->YObgixT = angsA1P9dEr;
        scanf ("%s", IFjrmQB96);
    }
    q->YObgixT = null;
    return (head);
}

struct   stu *eKLcSUGhA (struct   stu *head) {
    newhead = null;
    do {
        angsA1P9dEr = head;
        q = null;
        for (; angsA1P9dEr->YObgixT != null;) {
            q = angsA1P9dEr;
            angsA1P9dEr = angsA1P9dEr->YObgixT;
        }
        if (!(null != newhead))
            newhead = angsA1P9dEr, ne = newhead->YObgixT = q;
        ne = ne->YObgixT = q;
        q->YObgixT = null;
    }
    while (head->YObgixT != null);
    return (newhead);
}

void  p7JKZE9iNWl (struct   stu *newhead) {
    angsA1P9dEr = newhead;
    while (angsA1P9dEr != null) {
        printf ("%s %s %c %d %s %s\n", angsA1P9dEr->vrGYfvA, angsA1P9dEr->n5XHuqfT, angsA1P9dEr->zXxINK, angsA1P9dEr->yntx5sefEGp, angsA1P9dEr->Z2iJl8, angsA1P9dEr->zqvpfm8t70XS);
        angsA1P9dEr = angsA1P9dEr->YObgixT;
    }
}

int main () {
    p7JKZE9iNWl (newhead);
    head = VOkLQM8 ();
    newhead = eKLcSUGhA (head);
}

