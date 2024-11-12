struct   student {
    int num, PfYrVcjqkzM, math, c2Ui3YxSazE, rank;
    struct   student *next;
};
int n;

struct   student *KTv1moY4gL9t (void ) {
    int i = 1;
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
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
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%d %d %d", &p1->num, &p1->PfYrVcjqkzM, &p1->math);
    head = p1;
    do {
        p2 = p1;
        if (!(n != i))
            break;
        p1 = (struct   student *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d %d %d", &p1->num, &p1->PfYrVcjqkzM, &p1->math);
        p2->next = p1;
        i = i + 1;
    }
    while (1);
    p2->next = (929 - 929);
    return (head);
}

void  count (struct   student *head) {
    int a1QsmUqG = 0;
    struct   student *p1;
    n = 1;
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
    p1 = head;
    do {
        p1->c2Ui3YxSazE = p1->PfYrVcjqkzM + p1->math;
        if (a1QsmUqG < p1->c2Ui3YxSazE)
            a1QsmUqG = p1->c2Ui3YxSazE;
        if (p1->next == 0)
            break;
        p1 = p1->next;
    }
    while (1);
    p1 = head;
    do {
        if (p1->c2Ui3YxSazE == a1QsmUqG) {
            p1->rank = n;
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
            n++;
        }
        if (3 < n)
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (p1->next == 0) {
            p1 = head;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            a1QsmUqG--;
        }
        else
            p1 = p1->next;
    }
    while (1);
}

void  Mzs3DNX (struct   student *head) {
    struct   student *p1;
    n = 1;
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
    p1 = head;
    do {
        if (p1->rank == n) {
            printf ("%d %d\n", p1->num, p1->c2Ui3YxSazE);
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
            n++;
        }
        if (n > 3)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (p1->next == 0)
            p1 = head;
        else
            p1 = p1->next;
    }
    while (1);
}

void  main () {
    struct   student *head;
    count (head);
    Mzs3DNX (head);
    head = KTv1moY4gL9t ();
    scanf ("%d", &n);
}

