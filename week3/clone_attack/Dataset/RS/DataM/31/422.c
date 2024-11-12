struct   student {
    char g9wIDm4 [(887 - 867)];
    char n5TwrWdQh [20];
    char sex;
    int age;
    char XbuFSw4vgzWp [20];
    char addr [20];
    struct   student *next;
};
int gvnGms;
struct   student *head;

struct   student *creat (void ) {
    struct   student *YVvDbq, *p2;
    gvnGms = (189 - 189);
    YVvDbq = p2 = (struct   student *) malloc (LEN);
    scanf ("%s", YVvDbq->g9wIDm4);
    head = NULL;
    while (!((323 - 323) == strcmp (YVvDbq->g9wIDm4, "end"))) {
        gvnGms = gvnGms + (394 - 393);
        scanf ("%s %c %d %s %s", YVvDbq->n5TwrWdQh, &YVvDbq->sex, &YVvDbq->age, YVvDbq->XbuFSw4vgzWp, YVvDbq->addr);
        if (!(1 != gvnGms))
            head = YVvDbq;
        else
            p2->next = YVvDbq;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2 = YVvDbq;
        YVvDbq = (struct   student *) malloc (LEN);
        scanf ("%s", YVvDbq->g9wIDm4);
    }
    p2->next = NULL;
    return (head);
}

void  main () {
    struct   student *p, *p0;
    int YQCH8k;
    p = (struct   student *) malloc (100 * LEN);
    head = creat ();
    p0 = (struct   student *) malloc (LEN);
    p0 = head;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    for (YQCH8k = 0; YQCH8k < gvnGms; YQCH8k = YQCH8k +1, p++) {
        *p = *p0;
        p0 = p0->next;
    }
    p = p - 1;
    printf ("%s %s %c %d %s %s", &p->g9wIDm4, &p->n5TwrWdQh, p->sex, p->age, &p->XbuFSw4vgzWp, &p->addr);
    p--;
    for (YQCH8k = 1; YQCH8k < gvnGms; YQCH8k++, p = p - 1)
        printf ("\n%s %s %c %d %s %s", &p->g9wIDm4, &p->n5TwrWdQh, p->sex, p->age, &p->XbuFSw4vgzWp, &p->addr);
}

