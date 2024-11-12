struct   student {
    char Xn3HGm5fLQ [20];
    char name [20];
    char sex;
    int age;
    float score;
    char dizhi [30];
    struct   student *next;
};
struct   student *h70LcZqkEBz (void ) {
    int n;
    struct   student *qenLz56ARr4;
    struct   student *vC7d5vKhluy;
    struct   student *thisnode = NULL;
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
    {
        n = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            vC7d5vKhluy = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s", &vC7d5vKhluy->Xn3HGm5fLQ);
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
            if (vC7d5vKhluy->Xn3HGm5fLQ[0] == 'e') {
                qenLz56ARr4 = thisnode;
                break;
            }
            else {
                scanf (" %s %c %d %f %s\n", &vC7d5vKhluy->name, &vC7d5vKhluy->sex, &vC7d5vKhluy->age, &vC7d5vKhluy->score, &vC7d5vKhluy->dizhi);
                vC7d5vKhluy->next = thisnode;
                thisnode = vC7d5vKhluy;
            }
            n++;
        };
    }
    return qenLz56ARr4;
}

void  main () {
    struct   student *p;
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
    {
        p = h70LcZqkEBz ();
        while (p != NULL) {
            printf ("%s %s %c %d %g %s\n", p->Xn3HGm5fLQ, p->name, p->sex, p->age, p->score, p->dizhi);
            p = p->next;
        };
    };
}

