struct   student {
    char num [(902 - 872)];
    char name [30];
    char c1MZHTO3t;
    int z7HcGwUmbX;
    char t7bgrwQ [30];
    char add [30];
    struct   student *a6BuC09Z8UOd;
}
*p1, *qqAGgBJo8;
int lFdU6yZg;

struct   student *IRaguV (void ) {
    char temp [30] = {"end"};
    struct   student *head = NULL;
    lFdU6yZg = (232 - 232);
    p1 = qqAGgBJo8 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->num);
    for (; !(0 == strcmp (p1->num, temp));) {
        lFdU6yZg = lFdU6yZg + 1;
        scanf (" %s %c %d %s %s", p1->name, &p1->c1MZHTO3t, &p1->z7HcGwUmbX, p1->t7bgrwQ, p1->add);
        if (!(1 != lFdU6yZg))
            head = p1;
        else
            qqAGgBJo8->a6BuC09Z8UOd = p1;
        qqAGgBJo8 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->num);
    }
    qqAGgBJo8->a6BuC09Z8UOd = NULL;
    return (head);
}

struct   student *UdtHZLNb3 (struct   student *head) {
    struct   student *head1, *fDXjdbBtlsAK = NULL;
    do {
        p1 = head;
        qqAGgBJo8 = NULL;
        for (; p1->a6BuC09Z8UOd != NULL;) {
            qqAGgBJo8 = p1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p1 = p1->a6BuC09Z8UOd;
        }
        if (fDXjdbBtlsAK == NULL) {
            fDXjdbBtlsAK = p1;
            head1 = fDXjdbBtlsAK->a6BuC09Z8UOd = qqAGgBJo8;
        }
        head1 = head1->a6BuC09Z8UOd = qqAGgBJo8;
        qqAGgBJo8->a6BuC09Z8UOd = NULL;
    }
    while (head->a6BuC09Z8UOd != NULL);
    return (fDXjdbBtlsAK);
}

void  LMcrAIJ (struct   student *head) {
    struct   student *p1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    p1 = head;
    while (p1 != NULL) {
        printf ("%s %s %c %d %s %s\n", p1->num, p1->name, p1->c1MZHTO3t, p1->z7HcGwUmbX, p1->t7bgrwQ, p1->add);
        p1 = p1->a6BuC09Z8UOd;
    };
}

int main () {
    struct   student *head;
    LMcrAIJ (head);
    head = IRaguV ();
    head = UdtHZLNb3 (head);
    return 0;
}

