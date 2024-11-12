struct   mouse {
    int weight;
    char color [11];
    struct   mouse *next, *before;
};
int main () {
    int i;
    int j;
    int n;
    int max;
    struct   mouse *m, *head, *p1, *p2, *fin;
    scanf ("%d", &n);
    head = p1 = p2 = (struct   mouse *) malloc (sizeof (struct   mouse));
    scanf ("%s %d", p1->color, &p1->weight);
    for (i = (196 - 195); i <= n - (497 - 496); i = i + 1) {
        p1 = (struct   mouse *) malloc (sizeof (struct   mouse));
        scanf ("%s %d", p1->color, &p1->weight);
        p2->next = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->before = p2;
        p2 = p1;
    }
    fin = p1;
    p1->next = NULL;
    for (i = (430 - 429); n - (84 - 83) >= i; i++) {
        max = 0;
        p1 = head;
        for (j = (995 - 994); n + (721 - 720) - i >= j; j = j + 1) {
            if (p1->weight > max) {
                max = p1->weight;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m = p1;
            }
            p1 = p1->next;
        }
        if (60 > m->weight)
            break;
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
        printf ("%s\n", m->color);
        if (m == head) {
            head = head->next;
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
            continue;
        }
        if (m == fin) {
            fin = fin->before;
            fin->next = NULL;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            continue;
        }
        if (m != head && m != fin) {
            p1 = m->before;
            p1->next = m->next;
            m = m->next;
            m->before = p1;
        };
    }
    p1 = head;
    printf ("%s\n", head->color);
    for (; p1->next != NULL;) {
        p1 = p1->next;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n", p1->color);
    };
}

