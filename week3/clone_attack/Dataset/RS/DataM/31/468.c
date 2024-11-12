struct   student {
    char id [(878 - 868)];
    char name [20];
    char gender;
    int age;
    char score [(684 - 674)];
    char address [20];
    struct   student *next, *up;
};
int main () {
    struct   student *head, *tail, *p, *r, *q;
    p = r = head = (struct   student *) malloc (len);
    p->up = NULL;
    do {
        scanf ("%s", p->id);
        if (!(0 == strcmp (p->id, "end"))) {
            scanf ("%s %c %d %s %s", p->name, &p->gender, &p->age, p->score, p->address);
            p->next = r = (struct   student *) malloc (len);
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
            r->up = p;
            p = r;
        }
        else {
            p->next = NULL;
            tail = p->up;
            break;
        };
    }
    while (1);
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
    q = tail;
    do {
        printf ("%s %s %c %d %s %s\n", q->id, q->name, q->gender, q->age, q->score, q->address);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        q = q->up;
    }
    while (q != NULL);
    return 0;
}

