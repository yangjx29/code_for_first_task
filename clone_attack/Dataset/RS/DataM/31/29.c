struct   student {
    char id [100];
    char name [100];
    char sex;
    int age;
    char score [100000];
    char address [100];
    struct   student *KFj7OUIT2uCe;
};
struct   student *creat (void ) {
    struct   student *head;
    struct   student *p;
    struct   student *HM0ij2yfhWBR;
    head = (struct   student *) malloc (len);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p = head;
    HM0ij2yfhWBR = NULL;
    while (1) {
        HM0ij2yfhWBR = p;
        scanf ("%s", &p->id);
        if (strcmp (p->id, "end") == 0)
            break;
        scanf ("%s %c %d %s %s", &p->name, &p->sex, &p->age, &p->score, &p->address);
        p = (struct   student *) malloc (len);
        HM0ij2yfhWBR->KFj7OUIT2uCe = p;
    }
    HM0ij2yfhWBR->KFj7OUIT2uCe = NULL;
    return (head);
}

struct   student *turn (struct   student *head) {
    struct   student *p;
    struct   student *HM0ij2yfhWBR;
    struct   student *t;
    struct   student *newhead = NULL;
    while (!(NULL == head->KFj7OUIT2uCe)) {
        p = head;
        HM0ij2yfhWBR = NULL;
        while (p->KFj7OUIT2uCe != NULL) {
            HM0ij2yfhWBR = p;
            p = p->KFj7OUIT2uCe;
        }
        if (newhead == NULL) {
            newhead = p;
            t = newhead->KFj7OUIT2uCe = HM0ij2yfhWBR;
        }
        t = t->KFj7OUIT2uCe = HM0ij2yfhWBR;
        HM0ij2yfhWBR->KFj7OUIT2uCe = NULL;
    }
    return newhead;
}

void  SpGbHXm2kJ (struct   student *head) {
    struct   student *p;
    for (p = head; p != NULL; p = p->KFj7OUIT2uCe) {
        if (strcmp (p->id, "end") == 0)
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        printf ("%s %s %c %d %s %s\n", p->id, p->name, p->sex, p->age, p->score, p->address);
    };
}

void  main () {
    struct   student *head;
    SpGbHXm2kJ (head);
    head = creat ();
    head = turn (head);
}

