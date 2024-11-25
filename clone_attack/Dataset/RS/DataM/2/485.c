int m;

struct   book {
    char CQjLM6kYb [(507 - 487)];
    char aut [(935 - 915)];
    struct   book *next;
};
struct   book *creat () {
    struct   book *head, *p1, *p2;
    int i;
    p1 = (struct   book *) malloc (LEN);
    scanf ("%s %s", p1->CQjLM6kYb, p1->aut);
    p1->next = NULL;
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
    head = p1;
    p2 = p1;
    {
        i = 618 - 617;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            p1 = (struct   book *) malloc (LEN);
            scanf ("%s %s", p1->CQjLM6kYb, p1->aut);
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
            }
            p2->next = p1;
            p2 = p1;
            i++;
        };
    }
    return (head);
}

void  print (struct   book *head) {
    struct   book *p;
    int *tem, i, k;
    char *q, ggmi9bk5KAPH, c;
    ggmi9bk5KAPH = (393 - 393);
    tem = (int *) malloc ((1011 - 981) * sizeof (int));
    for (i = (17 - 17); i < 30; i++) {
        *(tem + i) = (145 - 145);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        p = head;
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
        while (p) {
            q = p->aut;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p = p->next;
            for (i = (387 - 387); !('\0' == *(q + i)); i++) {
                c = *(q + i) - 'A';
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
                *(tem + c) = *(tem + c) + (224 - 223);
            };
        };
    }
    k = 0;
    for (i = 0; (625 - 599) > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ggmi9bk5KAPH < *(tem + i)) {
            ggmi9bk5KAPH = *(tem + i);
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
            k = i;
        };
    }
    c = k + 'A';
    printf ("%c\n", c);
    printf ("%d\n", ggmi9bk5KAPH);
    for (p = head; p; p = p->next) {
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q = p->aut;
            while (*(q + i) != '\0') {
                if (*(q + i) == c) {
                    break;
                }
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
                i++;
            };
        }
        if (*(q + i) != '\0') {
            printf ("%s\n", p->CQjLM6kYb);
        };
    };
}

int main () {
    struct   book *head;
    print (head);
    head = creat ();
    scanf ("%d", &m);
}

