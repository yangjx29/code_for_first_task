struct   student {
    char ID [(483 - 463)];
    char name [(1018 - 998)];
    char nL4QnVvhj;
    int PFl9BKAS;
    char IuykEnlo [(760 - 740)];
    char address [(308 - 288)];
    struct   student *next;
};
struct   student *creat () {
    struct   student *WMJ3zZKBSFg, *p1, *q6hUJiEoBZ;
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", p1->ID, p1->name, &p1->nL4QnVvhj, &p1->PFl9BKAS, p1->IuykEnlo, p1->address);
    p1->next = NULL;
    WMJ3zZKBSFg = p1;
    q6hUJiEoBZ = p1;
    do {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->ID);
        if (strcmp ("end", p1->ID) == 0) {
            break;
        }
        else {
            scanf ("%s %c %d %s %s", p1->name, &p1->nL4QnVvhj, &p1->PFl9BKAS, p1->IuykEnlo, p1->address);
            p1->next = NULL;
            q6hUJiEoBZ->next = p1;
            q6hUJiEoBZ = p1;
        };
    }
    while (1);
    return (WMJ3zZKBSFg);
}

void  print (struct   student *WMJ3zZKBSFg) {
    struct   student *rOj8Y1cZ, *ppr;
    for (; WMJ3zZKBSFg->next != NULL;) {
        ppr = WMJ3zZKBSFg;
        rOj8Y1cZ = WMJ3zZKBSFg->next;
        for (; rOj8Y1cZ->next != NULL;) {
            ppr = rOj8Y1cZ;
            rOj8Y1cZ = rOj8Y1cZ->next;
        }
        printf ("%s %s %c %d %s %s\n", rOj8Y1cZ->ID, rOj8Y1cZ->name, rOj8Y1cZ->nL4QnVvhj, rOj8Y1cZ->PFl9BKAS, rOj8Y1cZ->IuykEnlo, rOj8Y1cZ->address);
        ppr->next = NULL;
    }
    printf ("%s %s %c %d %s %s\n", WMJ3zZKBSFg->ID, WMJ3zZKBSFg->name, WMJ3zZKBSFg->nL4QnVvhj, WMJ3zZKBSFg->PFl9BKAS, WMJ3zZKBSFg->IuykEnlo, WMJ3zZKBSFg->address);
}

int main () {
    struct   student *WMJ3zZKBSFg;
    print (WMJ3zZKBSFg);
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
    WMJ3zZKBSFg = creat ();
}

