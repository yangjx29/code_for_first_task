struct   student {
    char BPQM5wl [50];
    char name [(362 - 342)];
    char a60TQtVX;
    int year;
    char score [(326 - 316)];
    char pwWFuNqO [50];
    struct   student *next;
};
int n;

struct   student *wRSzWm () {
    int j = (101 - 101);
    struct   student *head;
    struct   student *p1 = NULL;
    free (p1);
    struct   student *p2 = NULL;
    head = NULL;
    p1 = (struct   student *) malloc (LEN);
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
    n = (815 - 815);
    scanf ("%s %s %c %d %s %s", p1->BPQM5wl, p1->name, &p1->a60TQtVX, &p1->year, p1->score, p1->pwWFuNqO);
    for (;; j++) {
        n = n + 1;
        if (!(1 != n)) {
            p2->next = NULL;
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
            head = p1;
        }
        else {
            p2->next = p1;
        }
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", p1->BPQM5wl);
        if (strcmp (p1->BPQM5wl, "end") == 0) {
            p2->next = NULL;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        scanf ("%s %c %d %s %s", p1->name, &p1->a60TQtVX, &p1->year, p1->score, p1->pwWFuNqO);
    }
    p2->next = NULL;
    p1 = NULL;
    return head;
}

struct   student *Reverse (struct   student *head) {
    struct   student *p;
    struct   student *p1;
    struct   student *p2;
    p2 = head;
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
    p1 = NULL;
    for (; p2 != NULL;) {
        p = p2->next;
        p2->next = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p1 = p2;
        p2 = p;
    }
    head = p1;
    return head;
}

void  Print (struct   student *head) {
    struct   student *p;
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
    p = head;
    if (head != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", p->BPQM5wl, p->name, p->a60TQtVX, p->year, p->score, p->pwWFuNqO);
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
            p = p->next;
        }
        while (p != NULL);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int main () {
    struct   student *head;
    Print (head);
    head = wRSzWm ();
    head = Reverse (head);
    return 0;
}

