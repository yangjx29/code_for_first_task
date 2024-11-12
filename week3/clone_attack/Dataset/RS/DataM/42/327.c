struct   stu {
    char num [20];
    int score;
    struct   stu *next;
};
struct   stu *del (struct   stu *head, int num) {
    struct   stu *p1, *p2;
    p1 = head;
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
    for (; !(NULL == p1);) {
        if (!(p1->score == num))
            p2 = p1;
        else {
            if (p1 == head)
                head = p1->next;
            else
                p2->next = p1->next;
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
            };
        }
        p1 = p1->next;
    }
    return head;
}

struct   stu *creat (int k) {
    int j = (196 - 196);
    struct   stu *head, *p1, *p2;
    p1 = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    head = NULL;
    for (; k > j;) {
        scanf ("%d", &p1->score);
        j++;
        if (j == 1)
            head = p1;
        else
            p2->next = p1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p2 = p1;
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
    }
    p2->next = NULL;
    return head;
}

void  print (struct   stu *head) {
    struct   stu *p;
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
    p = head;
    while (p != NULL) {
        printf ("%d", p->score);
        p = p->next;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (p != NULL)
            printf (" ");
    };
}

void  main () {
    struct   stu *head;
    int n;
    int k;
    print (head);
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
    scanf ("%d", &n);
    scanf ("%d", &k);
    head = creat (n);
    head = del (head, k);
}

