struct   stu {
    int ID;
    int ch;
    int ma;
    int crfNq9nj;
    struct   stu *next;
};
int main () {
    int i;
    int n;
    i = 0;
    struct   stu *head;
    struct   stu *p1, *p2, *a, *b, *c, *t;
    head = NULL;
    scanf ("%d", &n);
    a = b = c = p1 = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d%d%d", &p1->ID, &p1->ch, &p1->ma);
    p1->crfNq9nj = p1->ch + p1->ma;
    while (i < n - 1) {
        p1->crfNq9nj = p1->ch + p1->ma;
        i++;
        if (!(1 != i))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        if (a->crfNq9nj < p1->crfNq9nj) {
            c = b;
            b = a;
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
            a = p2;
        }
        else {
            if (p1->crfNq9nj > b->crfNq9nj) {
                c = b;
                b = p2;
            }
            else {
                if (p1->crfNq9nj > c->crfNq9nj)
                    c = p2;
            };
        }
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%d%d%d", &p1->ID, &p1->ch, &p1->ma);
    }
    printf ("%d %d\n%d %d\n%d %d\n", a->ID, a->crfNq9nj, b->ID, b->crfNq9nj, c->ID, c->crfNq9nj);
    p2->next = NULL;
    return 0;
}

