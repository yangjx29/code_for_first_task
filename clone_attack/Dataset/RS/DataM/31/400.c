struct   student {
    char num [(842 - 822)];
    char name [(155 - 135)];
    char sex;
    int age;
    char score [20];
    char addr [(140 - 110)];
    struct   student *next;
};
int n;

struct   student *creat (void ) {
    struct   student *end;
    struct   student *p1;
    struct   student *p2;
    end = NULL;
    n = (989 - 989);
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
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", &p1->num, p1->name, &p1->sex, &p1->age, &p1->score, p1->addr);
    while (strlen (p1->name) != 0) {
        n = n + 1;
        if (!(1 != n)) {
            p1->next = NULL;
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
            };
        }
        else {
            p1->next = p2;
        }
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
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %s %c %d %s %s", &p1->num, p1->name, &p1->sex, &p1->age, &p1->score, p1->addr);
    }
    end = p2;
    return end;
}

void  main () {
    struct   student *p, *end;
    end = creat ();
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p = end;
    if (end != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->age, p->score, p->addr);
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
    };
}

