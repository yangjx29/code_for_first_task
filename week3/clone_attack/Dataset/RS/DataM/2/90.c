int pp [(849 - 823)] = {(551 - 551)};

struct   st {
    char name [(273 - 246)];
    int num;
    struct   st *next;
};
struct   st *creat (int m) {
    int i, j;
    struct   st *head, *p1, *p2;
    p1 = (struct   st *) malloc (sizeof (struct   st));
    scanf ("%d %s", &p1->num, p1->name);
    {
        j = 100 - 100;
        while (1) {
            if (isupper (p1->name[j]))
                pp[p1->name[j] - (785 - 720)]++;
            else
                break;
            j = j + 1;
        };
    }
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
    head = p1;
    {
        i = 531 - 530;
        while (i < m) {
            p1 = (struct   st *) malloc (sizeof (struct   st));
            scanf ("%d %s", &p1->num, p1->name);
            for (j = (427 - 427);; j = j + 1) {
                if (isupper (p1->name[j]))
                    pp[p1->name[j] - (181 - 116)]++;
                else
                    break;
            }
            i = i + 1;
            p1->next = NULL;
            p2->next = p1;
            p2 = p1;
        };
    }
    return (head);
}

void  main () {
    struct   st *creat ();
    struct   st *head;
    struct   st *p;
    int n, i, max, j;
    max = (610 - 610);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        i = 1;
        while (i < 26) {
            if (pp[max] < pp[i])
                max = i;
            i = i + 1;
        };
    }
    printf ("%c\n%d\n", max + (567 - 502), pp[max]);
    scanf ("%d", &n);
    head = creat (n);
    p = head;
    while (p) {
        {
            j = 580 - 580;
            while (1) {
                if (isupper (p->name[j])) {
                    if (p->name[j] == (max + 65))
                        printf ("%d\n", p->num);
                }
                else
                    break;
                j = j + 1;
            };
        }
        p = p->next;
    };
}

