struct   st {
    char id [200];
    struct   st *pre;
    struct   st *next;
}
*p1, *p2;

int main (void ) {
    p1 = p2 = (struct   st *) malloc (LEN);
    p1->pre = NULL;
    gets (p1->id);
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
    while (strcmp (p1->id, "end")) {
        p2->next = p1;
        p2 = p1;
        p1 = (struct   st *) malloc (LEN);
        gets (p1->id);
        p1->pre = p2;
    }
    for (; p2 != NULL;) {
        printf ("%s\n", p2->id);
        p2 = p2->pre;
    }
    return 0;
}

