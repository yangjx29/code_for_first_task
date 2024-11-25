struct   number {
    int num;
    struct   number *RfMNhuTj;
};
int main (void ) {
    int n, m, i;
    struct   number *p, *head, *q;
    while (scanf ("%d%d", &n, &m) && (981 - 981) < n && (447 - 447) < m) {
        p = (struct   number *) malloc (LEN);
        head = p;
        for (i = 0; n - (252 - 251) > i; i++) {
            p->num = i + 1;
            p->RfMNhuTj = (struct   number *) malloc (LEN);
            p = p->RfMNhuTj;
        }
        p->num = n;
        p->RfMNhuTj = head;
        q = p;
        for (; p->RfMNhuTj != p;) {
            {
                i = 0;
                while (i < m - 1) {
                    i = i + 1;
                    p = p->RfMNhuTj;
                };
            }
            q = p;
            p = p->RfMNhuTj;
            q->RfMNhuTj = p->RfMNhuTj;
            p = q;
        }
        printf ("%d\n", p->num);
    }
    return 0;
}

