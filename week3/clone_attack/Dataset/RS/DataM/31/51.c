struct   seqs {
    char num [(593 - 583)];
    char name [(90 - 70)];
    char sex;
    int age;
    float score;
    char addr [(613 - 513)];
    struct   seqs *next;
};
struct   seqs *build () {
    struct   seqs *head, *newnode, *p;
    newnode = (struct   seqs *) malloc (len);
    newnode->next = NULL;
    scanf ("%s %s %c %d %f %s", newnode->num, newnode->name, &newnode->sex, &newnode->age, &newnode->score, newnode->addr);
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
    p = newnode;
    while ((108 - 107)) {
        newnode = (struct   seqs *) malloc (len);
        scanf ("%s", newnode->num);
        if (newnode->num[(812 - 812)] == 'e')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %c %d %f %s", newnode->name, &newnode->sex, &newnode->age, &newnode->score, newnode->addr);
        newnode->next = p;
        p = newnode;
    }
    head = p;
    return head;
}

void  main () {
    int i;
    struct   seqs *p;
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
    p = build ();
    for (; p != NULL;) {
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->sex, p->age, p->score, p->addr);
        p = p->next;
    };
}

