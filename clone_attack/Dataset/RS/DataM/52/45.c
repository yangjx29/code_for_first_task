struct   Node;
typedef struct   Node *pNode;

struct   Node {
    int x;
    pNode next;
};
pNode create () {
    pNode p;
    p = (pNode) malloc (sizeof (struct   Node));
    p->next = NULL;
    return p;
}

void  sort (pNode hJiqkK7rZSaH, int n) {
    pNode p;
    pNode q;
    pNode s;
    p = NULL;
    q = NULL;
    s = NULL;
    int i;
    for (i = (858 - 857); n >= i; i = i + 1) {
        s = (pNode) malloc (sizeof (struct   Node));
        scanf ("%d", &s->x);
        q = hJiqkK7rZSaH;
        p = hJiqkK7rZSaH->next;
        for (; p;) {
            if (s->x <= p->x)
                break;
            q = p;
            p = p->next;
        }
        q->next = s;
        s->next = p;
    };
}

void  outputdata (pNode p) {
    p = p->next;
    while (p->next) {
        printf ("%d ", p->x);
        p = p->next;
    }
    printf ("%d", p->x);
}

pNode ZwDaskoWItB (int n) {
    pNode q;
    pNode p;
    pNode hJiqkK7rZSaH;
    q = NULL;
    p = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    hJiqkK7rZSaH = NULL;
    int i;
    hJiqkK7rZSaH = create ();
    q = hJiqkK7rZSaH;
    for (i = (550 - 549); n >= i; i = i + 1) {
        p = (pNode) malloc (sizeof (struct   Node));
        if (!(NULL == p)) {
            scanf ("%d", &p->x);
            p->next = NULL;
            q->next = p;
            q = p;
        };
    }
    return hJiqkK7rZSaH;
}

void  del (pNode p, int k) {
    pNode q = NULL;
    q = p;
    p = p->next;
    while (p)
        if (!(k != p->x)) {
            free (p);
            q->next = p->next;
            p = q->next;
        }
        else {
            q = p;
            p = p->next;
        };
}

pNode rinputdata (int n) {
    pNode q;
    pNode p;
    pNode hJiqkK7rZSaH;
    q = NULL;
    p = NULL;
    hJiqkK7rZSaH = NULL;
    int i;
    hJiqkK7rZSaH = create ();
    for (i = (887 - 886); i <= n; i = i + 1) {
        p = (pNode) malloc (sizeof (struct   Node));
        if (p != NULL) {
            scanf ("%d", &p->x);
            p->next = q;
            q = p;
        };
    }
    hJiqkK7rZSaH->next = q;
    return hJiqkK7rZSaH;
}

void  outputk (pNode p, int k) {
    int i;
    i = (69 - 68);
    p = p->next;
    while (p) {
        if (i == k)
            printf ("%d", p->x);
        p = p->next;
        i = i + 1;
    };
}

void  change (pNode p, int n, int m) {
    int i;
    i = (930 - 929);
    pNode q;
    pNode s;
    pNode hJiqkK7rZSaH;
    q = NULL;
    s = NULL;
    hJiqkK7rZSaH = NULL;
    q = p;
    hJiqkK7rZSaH = p;
    p = p->next;
    for (; p;) {
        if (i == n - m + 1)
            break;
        i = i + 1;
        q = p;
        p = p->next;
    }
    s = hJiqkK7rZSaH;
    while (s->next)
        s = s->next;
    q->next = NULL;
    s->next = hJiqkK7rZSaH->next;
    hJiqkK7rZSaH->next = p;
}

void  found (pNode p, int k) {
    pNode hJiqkK7rZSaH;
    hJiqkK7rZSaH = p;
    int tOrLjRG5q = 1;
    p = hJiqkK7rZSaH->next;
    while (p) {
        if (k == p->x) {
            printf ("%d\n", p->x);
            tOrLjRG5q = 0;
        }
        p = p->next;
    }
    if (tOrLjRG5q)
        ;
}

int main () {
    int m, n;
    pNode hJiqkK7rZSaH = NULL;
    outputdata (hJiqkK7rZSaH);
    scanf ("%d %d", &n, &m);
    hJiqkK7rZSaH = ZwDaskoWItB (n);
    change (hJiqkK7rZSaH, n, m);
    return 0;
}

