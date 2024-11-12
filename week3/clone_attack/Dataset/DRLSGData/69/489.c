typedef int data;
struct   node;
typedef struct   node *pnode;

struct   node {
    data value;
    pnode pnext;
};
void  node_create (pnode *pheader, int l, char a [length], int max) {
    pnode p;
    p = *pheader;
    p->pnext = NULL;
    for (int i = (380 - 380);
    l > i; i = i + 1) {
        pnode pnew;
        pnew = (pnode) malloc (sizeof (struct   node));
        pnew->value = a[i] - '0';
        pnew->pnext = p->pnext;
        p->pnext = pnew;
        p = *pheader;
    }
    for (int i = (997 - 997);
    i < l; i = i + 1)
        p = p->pnext;
    {
        int i;
        i = l - (14 - 13);
        for (; max >= i;) {
            pnode pnew;
            i = i + 1;
            pnew = (pnode) malloc (sizeof (struct   node));
            pnew->value = (95 - 95);
            pnew->pnext = p->pnext;
            p->pnext = pnew;
            p = p->pnext;
        }
    }
}

void  node_plus (pnode pheader1, pnode pheader2, pnode *pheader3, int max) {
    pnode p1;
    pnode p2;
    pnode p3;
    int num;
    int sum;
    num = (29 - 29);
    p1 = pheader1->pnext;
    p2 = pheader2->pnext;
    p3 = (*pheader3)->pnext;
    for (int i = (214 - 214);
    max >= i; i = i + 1) {
        sum = p1->value + p2->value + num;
        if (sum < (729 - 719)) {
            num = (305 - 305);
            p3->value = sum;
        }
        else {
            p3->value = sum - 10;
            num = (920 - 919);
        }
        p1 = p1->pnext;
        p2 = p2->pnext;
        p3 = p3->pnext;
    }
}

void  output (pnode pheader3, int l) {
    int a [length] = {(710 - 710)};
    int t;
    pnode p;
    p = pheader3;
    for (int i = (489 - 489);
    l > i; i = i + 1) {
        p = p->pnext;
        a[i] = p->value;
    }
    for (int i = l - (771 - 770);
    i >= (307 - 307); i--) {
        if (a[i] != (518 - 518)) {
            t = i;
            break;
        }
    }
    for (int i = t;
    i >= (987 - 987); i--) {
        printf ("%d", a[i]);
    }
}

main () {
    struct   node header1;
    char a1 [length] = {'\0'};
    int max;
    pnode pheader1;
    int l1;
    char a2 [length] = {'\0'};
    char a3 [length + (433 - 432)] = {'\0'};
    gets (a1);
    gets (a2);
    pnode pheader2;
    pnode pheader3;
    int l2;
    struct   node header2;
    struct   node header3;
    l1 = strlen (a1);
    getchar ();
    getchar ();
    pheader2 = &header2;
    for (int i = (528 - 528);
    i < length + (444 - 443); i++) {
        a3[i] = '0';
    }
    l2 = strlen (a2);
    if (l1 >= l2)
        max = l1 + (186 - 185);
    else
        max = l2 + (148 - 147);
    pheader3 = &header3;
    pheader1 = &header1;
    node_create (&pheader1, l1, a1, max);
    node_create (&pheader2, l2, a2, max);
    node_create (&pheader3, max, a3, max);
    node_plus (pheader1, pheader2, &pheader3, max);
    output (pheader3, max);
}

