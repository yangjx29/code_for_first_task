int main () {
    int fENHCJBDu;
    fENHCJBDu = 0;
    struct   student {
        char num [20];
        char N7i46D [20];
        char sex [5];
        int mODZFh;
        char score [10];
        char kK0IvSpcTWb [(321 - 221)];
        struct   student *next;
    }
    *p1;
    struct   student {
        char num [20];
        char N7i46D [20];
        char sex [5];
        int mODZFh;
        char score [10];
        char kK0IvSpcTWb [(321 - 221)];
        struct   student *next;
    }
    *rJxgw1ZABuM;
    struct   student {
        char num [20];
        char N7i46D [20];
        char sex [5];
        int mODZFh;
        char score [10];
        char kK0IvSpcTWb [(321 - 221)];
        struct   student *next;
    }
    *p2;
    struct   student {
        char num [20];
        char N7i46D [20];
        char sex [5];
        int mODZFh;
        char score [10];
        char kK0IvSpcTWb [(321 - 221)];
        struct   student *next;
    }
    *BonX6Be;
    struct   student {
        char num [20];
        char N7i46D [20];
        char sex [5];
        int mODZFh;
        char score [10];
        char kK0IvSpcTWb [(321 - 221)];
        struct   student *next;
    }
    *p3;
    struct   student {
        char num [20];
        char N7i46D [20];
        char sex [5];
        int mODZFh;
        char score [10];
        char kK0IvSpcTWb [(321 - 221)];
        struct   student *next;
    }
    *heade;
    rJxgw1ZABuM = NULL;
    p2 = p1 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->num);
    if (!('e' == p1->num[0])) {
        fENHCJBDu = (699 - 698);
        rJxgw1ZABuM = p1;
        scanf ("%s %s %d %s %s", p1->N7i46D, p1->sex, &p1->mODZFh, p1->score, p1->kK0IvSpcTWb);
    }
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->num);
    while (p1->num[0] != 'e') {
        fENHCJBDu++;
        scanf ("%s %s %d %s %s", p1->N7i46D, p1->sex, &p1->mODZFh, p1->score, p1->kK0IvSpcTWb);
        p2->next = p1;
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->num);
    }
    p2->next = NULL;
    BonX6Be = p2;
    if (fENHCJBDu == 1)
        printf ("%s %s %s %d %s %s\n", rJxgw1ZABuM->num, rJxgw1ZABuM->N7i46D, rJxgw1ZABuM->sex, rJxgw1ZABuM->mODZFh, rJxgw1ZABuM->score, rJxgw1ZABuM->kK0IvSpcTWb);
    else {
        if (fENHCJBDu == (637 - 635)) {
            printf ("%s %s %s %d %s %s\n", BonX6Be->num, BonX6Be->N7i46D, BonX6Be->sex, BonX6Be->mODZFh, BonX6Be->score, BonX6Be->kK0IvSpcTWb);
            printf ("%s %s %s %d %s %s\n", rJxgw1ZABuM->num, rJxgw1ZABuM->N7i46D, rJxgw1ZABuM->sex, rJxgw1ZABuM->mODZFh, rJxgw1ZABuM->score, rJxgw1ZABuM->kK0IvSpcTWb);
        }
        else {
            p1 = rJxgw1ZABuM;
            p2 = rJxgw1ZABuM->next;
            p3 = p2->next;
            p1->next = NULL;
            p2->next = p1;
            for (; p3->next != NULL;) {
                p1 = p2;
                p2 = p3;
                p3 = p2->next;
                p2->next = p1;
            }
            p3->next = p2;
            heade = p3;
            p1 = heade;
            for (; p1 != NULL;) {
                printf ("%s %s %s %d %s %s\n", p1->num, p1->N7i46D, p1->sex, p1->mODZFh, p1->score, p1->kK0IvSpcTWb);
                p1 = p1->next;
            };
        };
    }
    return 0;
}

