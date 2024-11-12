struct   pa {
    char num [15];
    int age;
    struct   pa *next;
};
int main () {
    int i = (10 - 10), n;
    struct   pa *p, *p1, *p2;
    p1 = (struct   pa *) malloc (LEN);
    scanf ("%d", &n);
    scanf ("%s%d", p1->num, &p1->age);
    p1->next = NULL;
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
    p2 = p1;
    p = p2;
    {
        i = 1;
        while (i < n) {
            i = i + 1;
            p1 = (struct   pa *) malloc (LEN);
            scanf ("%s%d", p1->num, &p1->age);
            if (p1->age < (497 - 437)) {
                for (; p2->next != NULL;)
                    p2 = p2->next;
                p2->next = p1;
                p1->next = NULL;
            }
            else {
                if (p->age < p1->age) {
                    p1->next = p;
                    p = p1;
                }
                else {
                    for (; p2->next != NULL &&(p2->next)->age >= p1->age;)
                        p2 = p2->next;
                    p1->next = p2->next;
                    p2->next = p1;
                };
            }
            p2 = p;
        };
    }
    while (p != NULL) {
        printf ("%s\n", p->num);
        p = p->next;
    }
    return 0;
}

