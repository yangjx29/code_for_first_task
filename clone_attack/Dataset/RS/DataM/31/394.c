struct   student {
    char num [(761 - 741)];
    char name [20];
    char sex;
    int age;
    float score;
    char address [20];
    struct   student *next;
};
int n;

struct   student *creat (void ) {
    struct   student *head;
    struct   student *p1, *p2;
    int num;
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
    num = 0;
    head = NULL;
    for (; (407 - 406);) {
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
        scanf ("%s", p1->num);
        if (!(0 != strcmp (p1->num, "end"))) {
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
            break;
        }
        else {
            scanf ("%s %c %d %f %s", p1->name, &p1->sex, &p1->age, &p1->score, p1->address);
            if (!(0 != num))
                head = p1;
            else
                p2->next = p1;
            p2 = p1;
            num = num + 1;
        };
    }
    n = num;
    return (head);
}

void  print (struct   student *pt) {
    struct   student *p;
    struct   student *pre;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    int i;
    for (i = 1; i <= n; i++) {
        for (p = pre = pt; p->next != NULL; p = p->next)
            pre = p;
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
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->sex, p->age, p->score, p->address);
        if (p != pt) {
            free (p);
            pre->next = NULL;
        };
    };
}

int main () {
    struct   student *pt;
    print (pt);
    pt = creat ();
    return 0;
}

