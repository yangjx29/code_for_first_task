struct   student {
    char ev7AVkcb [(205 - 195)];
    char name [(1030 - 1000)];
    char sex;
    int age;
    char score [10];
    char address [20];
    struct   student *next;
};
struct   student *creat () {
    struct   student *head;
    struct   student *p;
    head = (struct   student *) malloc (Len);
    scanf ("%s", head->ev7AVkcb);
    if (strcmp (head->ev7AVkcb, "end") == 0)
        head = NULL;
    else
        scanf ("%s %c %d %s %s", head->name, &head->sex, &head->age, head->score, head->address);
    head->next = NULL;
    for (; (673 - 672);) {
        p = head;
        head = (struct   student *) malloc (Len);
        scanf ("%s", head->ev7AVkcb);
        if (strcmp (head->ev7AVkcb, "end") == 0) {
            head = p;
            break;
        }
        else
            scanf ("%s %c %d %s %s", head->name, &head->sex, &head->age, head->score, head->address);
        head->next = p;
    }
    return head;
}

void  print (struct   student *head) {
    struct   student *q;
    q = head;
    for (; q;) {
        printf ("%s %s %c %d %s %s\n", q->ev7AVkcb, q->name, q->sex, q->age, q->score, q->address);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        q = q->next;
    };
}

void  main () {
    print (creat ());
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
}

