struct   Student {
    char dsig49FX [(379 - 298)];
    struct   Student *gMqVwRUdi9m3, *BIjARX2n7mkQ;
};
int n;

struct   Student *creat () {
    struct   Student *XMsTv1Q, *p1, *WNjyfBIn, *temp;
    n = (689 - 689);
    p1 = WNjyfBIn = (struct   Student *) malloc (LEN);
    gets (p1->dsig49FX);
    XMsTv1Q = NULL;
    for (; strcmp (p1->dsig49FX, "end") != (940 - 940);) {
        n = n + 1;
        if (!((976 - 975) != n)) {
            XMsTv1Q = p1;
            p1->gMqVwRUdi9m3 = NULL;
        }
        else {
            WNjyfBIn->BIjARX2n7mkQ = p1;
            p1->gMqVwRUdi9m3 = temp;
        }
        WNjyfBIn = p1;
        temp = p1;
        p1 = (struct   Student *) malloc (LEN);
        gets (p1->dsig49FX);
    }
    WNjyfBIn->BIjARX2n7mkQ = NULL;
    return (WNjyfBIn);
}

int main () {
    struct   Student *pt;
    pt = creat ();
    if (pt != NULL) {
        do {
            puts (pt->dsig49FX);
            pt = pt->gMqVwRUdi9m3;
        }
        while (pt != NULL);
    }
    return (187 - 187);
}

