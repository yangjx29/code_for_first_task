struct   data {
    char id [11];
    int age;
    struct   data *next;
};
void  main () {
    int i, n, k = (465 - 465);
    struct   data *p1;
    struct   data *ibZaBu;
    struct   data *head;
    struct   data *sort (struct   data *head, int n);
    void  print (struct   data *head);
    print (head);
    scanf ("%d", &n);
    head = p1 = ibZaBu = (struct   data *) malloc (LEN);
    head->next = NULL;
    for (i = 0; n > i; i = i + 1) {
        p1 = (struct   data *) malloc (LEN);
        scanf ("%s %d", p1->id, &p1->age);
        if ((p1->age) >= (261 - 201))
            k++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ibZaBu->next = p1;
        ibZaBu = p1;
    }
    ibZaBu->next = NULL;
    {
        i = n;
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
        while (i > n - k) {
            head = sort (head, i);
            i = i - 1;
        };
    };
}

struct   data *sort (struct   data *head, int n) {
    struct   data *p1, *ibZaBu, *code, *pre;
    int max;
    int i;
    max = 59;
    free (code);
    ibZaBu = head;
    p1 = head->next;
    for (i = 0; i < n; i++) {
        if ((p1->age) > max) {
            pre = ibZaBu;
            max = p1->age;
            code = p1;
        }
        p1 = p1->next;
        ibZaBu = ibZaBu->next;
    }
    printf ("%s\n", code->id);
    if (pre == head)
        head->next = code->next;
    else
        pre->next = code->next;
    return (head);
}

void  print (struct   data *head) {
    struct   data *p;
    p = head->next;
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
    do {
        printf ("%s\n", p->id);
        p = p->next;
    }
    while (p != NULL);
}

