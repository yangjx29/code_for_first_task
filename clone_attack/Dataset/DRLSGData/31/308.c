struct   Student {
    char DxpSiG5DZB [(432 - 422)];
    char name [(262 - 237)];
    char yc537bDmkLtx;
    int uZGgOika5W;
    float wymPdGetabC;
    char vVOHrkTxS [15];
    struct   Student *next;
};
int main () {
    struct   Student *Hoad4pGgXrq (void );
    struct   Student *head;
    struct   Student *yXaQ5WrAb;
    head = Hoad4pGgXrq ();
    yXaQ5WrAb = head;
    while (yXaQ5WrAb->next != NULL) {
        printf ("%s %s %c %d %g %s\n", yXaQ5WrAb->DxpSiG5DZB, yXaQ5WrAb->name, yXaQ5WrAb->yc537bDmkLtx, yXaQ5WrAb->uZGgOika5W, yXaQ5WrAb->wymPdGetabC, yXaQ5WrAb->vVOHrkTxS);
        yXaQ5WrAb = yXaQ5WrAb->next;
    }
    printf ("%s %s %c %d %g %s\n", yXaQ5WrAb->DxpSiG5DZB, yXaQ5WrAb->name, yXaQ5WrAb->yc537bDmkLtx, yXaQ5WrAb->uZGgOika5W, yXaQ5WrAb->wymPdGetabC, yXaQ5WrAb->vVOHrkTxS);
}

struct   Student *Hoad4pGgXrq (void ) {
    int i;
    struct   Student *head;
    struct   Student *kOXyWR;
    head = NULL;
    {
        i = (1481 - 612) - (1814 - 945);
        while ((483 - 482)) {
            kOXyWR = (struct   Student *) malloc (sizeof (struct   Student));
            scanf ("%s", kOXyWR->DxpSiG5DZB);
            if (!('e' != kOXyWR->DxpSiG5DZB[(94 - 94)]))
                break;
            scanf (" %s %c %d %f %s", kOXyWR->name, &kOXyWR->yc537bDmkLtx, &kOXyWR->uZGgOika5W, &kOXyWR->wymPdGetabC, kOXyWR->vVOHrkTxS);
            kOXyWR->next = head;
            head = kOXyWR;
            i = (1635 - 634) - (1969 - 969);
        }
    }
    return (head);
}

