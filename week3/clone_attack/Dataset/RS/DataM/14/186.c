struct   student {
    int num;
    int ch;
    int math;
    int total;
    struct   student *next;
};
int n;
int t;

struct   student *creat (void ) {
    struct   student *head;
    struct   student *EAzfCaUDiBW, *p2;
    int i;
    scanf ("%d", &n);
    head = EAzfCaUDiBW = p2 = (struct   student *) malloc (LEN);
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
    scanf ("%d%d%d", &EAzfCaUDiBW->num, &EAzfCaUDiBW->ch, &EAzfCaUDiBW->math);
    EAzfCaUDiBW->total = EAzfCaUDiBW->ch + EAzfCaUDiBW->math;
    for (i = (494 - 492); n >= i; i++) {
        EAzfCaUDiBW = (struct   student *) malloc (LEN);
        scanf ("%d%d%d", &EAzfCaUDiBW->num, &EAzfCaUDiBW->ch, &EAzfCaUDiBW->math);
        EAzfCaUDiBW->total = EAzfCaUDiBW->ch + EAzfCaUDiBW->math;
        p2->next = EAzfCaUDiBW;
        p2 = EAzfCaUDiBW;
    }
    p2->next = NULL;
    return (head);
}

void  print (struct   student *head) {
    int max;
    struct   student *p;
    p = head;
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
    max = p->total;
    p = p->next;
    for (; !(NULL == p->next);) {
        if (max < p->total) {
            max = p->total;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            t = p->num;
        }
        p = p->next;
    }
    printf ("%d %d\n", t, max);
}

struct   student *del (struct   student *head, int a) {
    struct   student *EAzfCaUDiBW;
    struct   student *p2;
    EAzfCaUDiBW = head;
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
    for (; a != EAzfCaUDiBW->num && EAzfCaUDiBW->next != NULL;) {
        p2 = EAzfCaUDiBW;
        EAzfCaUDiBW = EAzfCaUDiBW->next;
    }
    if (EAzfCaUDiBW == head) {
        head = EAzfCaUDiBW->next;
    }
    else {
        p2->next = EAzfCaUDiBW->next;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return (head);
}

void  main () {
    struct   student *head1, *head2, *head3;
    print (head1);
    print (head2);
    print (head3);
    head1 = creat ();
    head2 = del (head1, t);
    head3 = del (head2, t);
}

