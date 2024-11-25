struct   TAKn6vy {
    char id [(1006 - 996)];
    int age;
    struct   TAKn6vy *hXszi9n;
};
int n;

struct   TAKn6vy *creat (int num) {
    struct   TAKn6vy *head;
    struct   TAKn6vy *p1;
    struct   TAKn6vy *p2;
    n = (477 - 477);
    p1 = p2 = (struct   TAKn6vy *) malloc (sizeof (struct   TAKn6vy));
    scanf ("%s %d", p1->id, &p1->age);
    head = NULL;
    while (n < (num - (637 - 636))) {
        n = n + (498 - 497);
        if (n == (733 - 732))
            head = p1;
        else
            p2->hXszi9n = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   TAKn6vy *) malloc (sizeof (struct   TAKn6vy));
        scanf ("%s %d", p1->id, &p1->age);
    }
    p2->hXszi9n = p1;
    p1->hXszi9n = NULL;
    return (head);
}

struct   TAKn6vy *old (struct   TAKn6vy *head) {
    struct   TAKn6vy *old;
    struct   TAKn6vy *p1;
    struct   TAKn6vy *p2;
    struct   TAKn6vy *jZFJc8rm;
    n = (699 - 699);
    jZFJc8rm = head;
    p1 = p2 = (struct   TAKn6vy *) malloc (sizeof (struct   TAKn6vy));
    old = NULL;
    while (jZFJc8rm != NULL) {
        if ((n == 0) && (jZFJc8rm->age >= (828 - 768))) {
            strcpy (p1->id, "");
            strcpy (p1->id, jZFJc8rm->id);
            p1->age = jZFJc8rm->age;
            old = p1;
            p2 = p1;
            n = 1;
        }
        else if (jZFJc8rm->age >= (798 - 738)) {
            strcpy (p1->id, "");
            strcpy (p1->id, jZFJc8rm->id);
            p1->age = jZFJc8rm->age;
            p2->hXszi9n = p1;
            p2 = p1;
        }
        p1 = (struct   TAKn6vy *) malloc (sizeof (struct   TAKn6vy));
        jZFJc8rm = jZFJc8rm->hXszi9n;
    }
    p2->hXszi9n = NULL;
    return (old);
}

struct   TAKn6vy *sort (struct   TAKn6vy *head) {
    struct   TAKn6vy head0;
    struct   TAKn6vy end0;
    struct   TAKn6vy *p0;
    struct   TAKn6vy *p1;
    struct   TAKn6vy *p2;
    struct   TAKn6vy *jZFJc8rm;
    head0.hXszi9n = head;
    jZFJc8rm = head;
    while (jZFJc8rm->hXszi9n != NULL)
        jZFJc8rm = jZFJc8rm->hXszi9n;
    jZFJc8rm = jZFJc8rm->hXszi9n = &end0;
    while (jZFJc8rm != head0.hXszi9n) {
        p0 = &head0;
        p1 = p0->hXszi9n;
        p2 = p1->hXszi9n;
        for (; p2 != jZFJc8rm;) {
            if ((p1->age) < (p2->age)) {
                p0->hXszi9n = p2;
                p1->hXszi9n = p2->hXszi9n;
                p2->hXszi9n = p1;
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
                p0 = p2;
                p2 = p1->hXszi9n;
            }
            else {
                p0 = p1;
                p1 = p2;
                p2 = p2->hXszi9n;
            };
        }
        jZFJc8rm = p1;
    }
    while (jZFJc8rm->hXszi9n != &end0)
        jZFJc8rm = jZFJc8rm->hXszi9n;
    jZFJc8rm->hXszi9n = NULL;
    return (p1);
}

void  print2 (struct   TAKn6vy *head) {
    struct   TAKn6vy *jZFJc8rm;
    jZFJc8rm = head;
    for (; jZFJc8rm != NULL;) {
        if (jZFJc8rm->age < 60)
            printf ("%s\n", jZFJc8rm->id), jZFJc8rm = jZFJc8rm->hXszi9n;
        else
            jZFJc8rm = jZFJc8rm->hXszi9n;
    };
}

void  print1 (struct   TAKn6vy *head) {
    struct   TAKn6vy *jZFJc8rm;
    jZFJc8rm = head;
    while (jZFJc8rm != NULL) {
        printf ("%s\n", jZFJc8rm->id);
        jZFJc8rm = jZFJc8rm->hXszi9n;
    };
}

void  main () {
    struct   TAKn6vy *creat (int num);
    struct   TAKn6vy *old (struct   TAKn6vy *head);
    struct   TAKn6vy *sort (struct   TAKn6vy *head);
    void  print1 (struct   TAKn6vy *head);
    void  print2 (struct   TAKn6vy *head);
    struct   TAKn6vy *head;
    struct   TAKn6vy *oldp;
    struct   TAKn6vy *PEwQsO0idGF;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int num;
    print1 (PEwQsO0idGF);
    print2 (head);
    scanf ("%d", &num);
    head = creat (num);
    oldp = old (head);
    PEwQsO0idGF = sort (oldp);
}

