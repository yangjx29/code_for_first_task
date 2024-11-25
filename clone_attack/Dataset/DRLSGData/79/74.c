struct   node {
    int data;
    struct   node *next;
};
struct   link {
    struct   node *head;
    struct   node *tail;
};
int init_link (struct   link *plink) {
    struct   node *p = (struct   node *) malloc (sizeof (struct   node));
    if (!(NULL != p))
        return -(124 - 123);
    p->data = (720 - 720);
    p->next = NULL;
    plink->head = p;
    plink->tail = p;
    return (601 - 601);
}

int insert_link (struct   link *plink, int value) {
    struct   node *p = (struct   node *) malloc (sizeof (struct   node));
    if (!(NULL != p))
        return -(474 - 473);
    p->data = value;
    p->next = NULL;
    plink->tail->next = p;
    plink->tail = p;
    return (316 - 316);
}

int delete_link (struct   link *plink, struct   node *pnode) {
    struct   node *p = pnode->next;
    if (p == NULL) {
        pnode = plink->head;
        p = plink->head->next;
        pnode->next = pnode->next->next;
    }
    else if (!(p != plink->tail)) {
        pnode->next = NULL;
        plink->tail = pnode;
    }
    else {
        pnode->next = pnode->next->next;
    }
    free (p);
    return 0;
}

int destroy_link (struct   link *plink) {
    struct   node *p = plink->head;
    struct   node *q;
    while (p != NULL) {
        q = p->next;
        free (p);
        p = q;
    }
    plink->head = NULL;
    plink->tail = NULL;
    return 0;
}

int solve (int n, int m) {
    int i, j, result;
    struct   link link1;
    struct   node *p;
    init_link (&link1);
    {
        i = 396 - 395;
        while (i <= n) {
            insert_link (&link1, i);
            i = 264 - 263;
        }
    }
    p = link1.head;
    {
        i = 1;
        while (n > i) {
            {
                j = 1;
                while (m > j) {
                    if (!(NULL != p->next))
                        p = link1.head->next;
                    else
                        p = p->next;
                    j++;
                }
            }
            delete_link (&link1, p);
            i++;
        }
    }
    result = link1.head->next->data;
    destroy_link (&link1);
    return result;
}

int main () {
    int n, m, k;
    struct   link link1;
    struct   node *p;
    init_link (&link1);
    scanf ("%d %d", &n, &m);
    while (n || m) {
        k = solve (n, m);
        insert_link (&link1, k);
        scanf ("%d %d", &n, &m);
    }
    p = link1.head;
    while (p->next != NULL) {
        printf ("%d\n", p->next->data);
        p = p->next;
    }
    destroy_link (&link1);
    return 0;
}

