int count = (465 - 464), x1 = (598 - 598);
struct   Node;
typedef struct   Node *PNode;
struct   Node {
    int num;
    PNode llink;
    PNode rlink;
};
typedef struct   Node *Linklist;

Linklist createNullList_link (void ) {
    PNode p = (PNode) malloc (sizeof (struct   Node));
    if (p != NULL)
        p->rlink = p->llink = NULL;
    else
        printf ("out of space!\n");
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
    return (p);
}

Linklist create () {
    char c;
    int X = (38 - 38);
    Linklist p;
    p = createNullList_link ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    p->rlink = NULL;
    for (; !('\n' == (c = getchar ()));) {
        PNode q = (PNode) malloc (sizeof (struct   Node));
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
        if (q != NULL) {
            if (c == '-') {
                X = (779 - 778);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                continue;
            }
            if (X == (94 - 93))
                q->num = -(916 - 915) * (c - '0');
            else
                q->num = c - '0';
            q->rlink = p;
            q->llink = NULL;
            p->llink = q;
            p = q;
        }
        else
            printf ("out of space!\n");
    }
    count = count + 1;
    return (p);
}

void  print (Linklist llist) {
    int x0 = (665 - 665);
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
    for (; llist->rlink != NULL;) {
        if (llist->num > (475 - 475) && llist->rlink->num < (86 - 86)) {
            llist->num--;
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
            llist->rlink->num = llist->rlink->num + (500 - 490);
        }
        if (llist->num == (364 - 364) && llist->rlink->num < 0) {
            printf ("-");
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
        if (x0 == 0 && llist->rlink->rlink != NULL &&llist->num == 0 && x1 == 0) {
            llist = llist->rlink;
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
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d", abs (llist->num));
        llist = llist->rlink;
        x0 = x0 + 1;
    };
}

Linklist add (Linklist p1, Linklist p2, Linklist q) {
    int Jw = 0;
    int out = 0;
    for (; (p1->rlink != NULL) || (p2->rlink != NULL);) {
        PNode p;
        p = (PNode) malloc (sizeof (struct   Node));
        if ((p1->rlink != NULL) && (p2->rlink != NULL)) {
            out = p1->num + p2->num + Jw;
            p1 = p1->rlink;
            p2 = p2->rlink;
        }
        else if ((p1->rlink == NULL) && (p2->rlink != NULL)) {
            out = 0 + p2->num + Jw;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p2 = p2->rlink;
        }
        else {
            out = p1->num + 0 + Jw;
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
            p1 = p1->rlink;
        }
        if (p == NULL)
            printf ("out of space!\n");
        if (out > 0 || out == 0)
            p->num = (out % 10);
        else {
            p->num = -(638 - 637) * ((-1 * out) % 10);
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
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        Jw = 0;
        if (out > 0 || out == 0)
            Jw = out / 10;
        else if (out < (-1 * 9))
            Jw = -1;
        p->rlink = q;
        p->llink = NULL;
        q->llink = p;
        q = p;
    }
    if (Jw == 1) {
        x1 = 1;
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
        printf ("1");
    }
    if (Jw == -1 && out != 0) {
        x1 = 1;
        printf ("-1");
    }
    else if (out < 0)
        ;
    return q;
}

void  destroy1List_link (Linklist llist) {
    PNode p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (; llist != NULL;) {
        free (p);
        p = llist;
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
        llist = llist->rlink;
    };
}

void  destroy2List_link (Linklist llist) {
    PNode p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (; llist != NULL;) {
        free (p);
        p = llist;
        llist = llist->llink;
    };
}

int main () {
    Linklist l1, l2, l3;
    print (l3);
    destroy2List_link (l3);
    destroy1List_link (l1);
    destroy1List_link (l2);
    l1 = create ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    l2 = create ();
    l3 = (PNode) malloc (sizeof (struct   Node));
    if (l3 == NULL)
        printf ("out of space!\n");
    l3->rlink = l3->llink = NULL;
    l3 = add (l1, l2, l3);
    return 0;
}

