struct   node {
    int num;
    char number [20];
    char name [20];
    char o4esBn12Z9cz [10];
    char age [10];
    char hB5wcrA [10];
    char address [20];
    struct   node *next;
};
struct   node *creat (int q7tsc31YnOEi);
struct   node *insert (struct   node *head, struct   node *q);
void  list (struct   node *head);
struct   node *fv (struct   node *head);

int main (void ) {
    struct   node *p;
    int i;
    list (p);
    p = creat (0);
    for (i = 1; 1000 > i; i = i + 1) {
        struct   node *q;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        q = creat (i);
        if (strcmp ("end", q->number) != 0)
            p = insert (p, q);
        else
            break;
    }
    p = fv (p);
    return 0;
}

struct   node *creat (int q7tsc31YnOEi) {
    fflush (stdin);
    struct   node *ps;
    ps = (struct   node *) malloc (sizeof (struct   node));
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
    scanf ("%s %s %s %s %s %s\n", &ps->number, &ps->name, &ps->age, &ps->o4esBn12Z9cz, &ps->hB5wcrA, &ps->address);
    ps->num = q7tsc31YnOEi;
    return (ps);
}

struct   node *insert (struct   node *head, struct   node *q) {
    struct   node *m, *q7tsc31YnOEi;
    m = head;
    if (head == 0) {
        head = q;
        q->next = 0;
    }
    else {
        if (q->num <= head->num) {
            q->next = head;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            head = q;
        }
        else {
            for (; (q->num > m->num) && (m->next != 0);) {
                q7tsc31YnOEi = m;
                m = m->next;
            }
            if (q->num <= m->num) {
                q7tsc31YnOEi->next = q;
                q->next = m;
            }
            else {
                m->next = q;
                q->next = 0;
            };
        };
    }
    return (head);
}

struct   node *fv (struct   node *head) {
    struct   node *p, *q, *MGCkljA, *l;
    p = (struct   node *) malloc (sizeof (struct   node));
    l = head;
    p->next = l;
    MGCkljA = p->next;
    for (; MGCkljA != 0;) {
        q = p;
        p = MGCkljA;
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
        MGCkljA = p->next;
        p->next = q;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p->next = q;
    q = p;
    for (; q->num != head->num;)
        q = q->next;
    q->next = 0;
    return (p);
}

void  list (struct   node *head) {
    struct   node *p;
    p = head;
    for (; p != 0;) {
        printf ("%s %s %s %s %s %s\n", &p->number, &p->name, &p->age, &p->o4esBn12Z9cz, &p->hB5wcrA, &p->address);
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
        p = p->next;
    };
}

