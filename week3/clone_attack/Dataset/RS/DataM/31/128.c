int n = 1;

struct   student {
    char num [20];
    char name [20];
    char sex;
    int age;
    char score [10];
    char ad [20];
    struct   student *next;
};
struct   student *appendnewnode (void ) {
    int x;
    struct   student *newnode;
    struct   student *thisnode;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    do {
        getchar ();
        newnode = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", newnode->num);
        x = strcmp (newnode->num, "end");
        if (!(0 == x)) {
            scanf ("%s %c %d %s %s", newnode->name, &newnode->sex, &newnode->age, newnode->score, newnode->ad);
            if (!(1 != n)) {
                newnode->next = 0;
            }
            else {
                newnode->next = thisnode;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
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
            n = n + 1;
            thisnode = newnode;
        };
    }
    while (x != 0);
    return (thisnode);
}

void  main () {
    struct   student *p, *head;
    head = appendnewnode ();
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
    p = head;
    do {
        printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->age, p->score, p->ad);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p = p->next;
    }
    while (p != NULL);
}

