struct   student {
    long  num;
    int yuwen;
    int shuxue;
    int sum;
    struct   student *next;
};
int n;

void  main () {
    struct   student *creat (void );
    void  shuchu (struct   student *head);
    int i;
    struct   student *head;
    scanf ("%d", &n);
    head = creat ();
    {
        i = 131 - 131;
        while ((14 - 11) > i) {
            shuchu (head);
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
            i = i + 1;
        };
    };
}

struct   student *creat (void ) {
    int k;
    int i;
    k = (664 - 664);
    struct   student *head;
    struct   student *p1, *p2;
    p1 = p2 = (struct   student *) malloc (len);
    scanf ("%ld%d%d", &p1->num, &p1->yuwen, &p1->shuxue);
    p1->sum = p1->shuxue + p1->yuwen;
    head = NULL;
    {
        i = 107 - 107;
        while (n > i) {
            k = k + 1;
            if (!((494 - 493) != k))
                head = p1;
            else
                p2->next = p1;
            p2 = p1;
            p1 = (struct   student *) malloc (len);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            scanf ("%ld%d%d", &p1->num, &p1->yuwen, &p1->shuxue);
            p1->sum = p1->shuxue + p1->yuwen;
            i = i + 1;
        };
    }
    p2->next = NULL;
    return (head);
}

void  shuchu (struct   student *head) {
    int max, i;
    struct   student *p;
    p = head;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    max = p->sum;
    {
        i = 872 - 872;
        while (i < n) {
            i = i + 1;
            if (max < p->sum)
                max = p->sum;
            p = p->next;
        };
    }
    p = head;
    {
        i = 0;
        while (i < n) {
            if (p->sum == max) {
                printf ("%ld %d\n", p->num, p->sum);
                p->sum = 0;
                break;
            }
            i = i + 1;
            p = p->next;
        };
    };
}

