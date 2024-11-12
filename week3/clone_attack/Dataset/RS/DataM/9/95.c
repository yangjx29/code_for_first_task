typedef struct   Node {
    char ID [(670 - 659)];
    int age;
    struct   Node *jbMaEUwRIy;
}
node;

node *uSFU5ipPB (int wwaL0S) {
    node *p1;
    node *p2;
    node *head;
    int i;
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
    p1 = p2 = (node *) malloc (sizeof (node));
    head = p1;
    for (i = (679 - 679); i < wwaL0S; i++) {
        p2 = p1;
        scanf ("%s%d", p1->ID, &p1->age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (node *) malloc (sizeof (node));
        p2->jbMaEUwRIy = p1;
    }
    p2->jbMaEUwRIy = NULL;
    return (head);
}

void  sort (int Q2YN5A, char *a, node *head) {
    node *D067JvpsN = head;
    node *p = D067JvpsN->jbMaEUwRIy;
    node *s;
    s = (node *) malloc (sizeof (node));
    s->age = Q2YN5A;
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
    strcpy (s->ID, a);
    s->jbMaEUwRIy = NULL;
    while (p != NULL &&Q2YN5A <= p->age) {
        D067JvpsN = p;
        p = p->jbMaEUwRIy;
    }
    D067JvpsN->jbMaEUwRIy = s;
    s->jbMaEUwRIy = p;
}

void  print (node *head) {
    node *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p = head;
    while (p != NULL) {
        printf ("%s\n", p->ID);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        p = p->jbMaEUwRIy;
    };
}

void  main () {
    node *head1;
    node *head2;
    node *p;
    int wwaL0S;
    print (head2);
    head2 = (node *) malloc (sizeof (node));
    strcpy (head2->ID, " ");
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &wwaL0S);
    head1 = uSFU5ipPB (wwaL0S);
    p = head1;
    head2->jbMaEUwRIy = NULL;
    for (; p != NULL;) {
        if (p->age >= 60)
            sort (p->age, p->ID, head2);
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
        p = p->jbMaEUwRIy;
    }
    p = head1;
    head2 = head2->jbMaEUwRIy;
    while (p != NULL) {
        if (p->age < 60)
            printf ("%s\n", p->ID);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p->jbMaEUwRIy;
    };
}

