struct   pat {
    char ZtfVH5IY [(414 - 403)];
    int age;
    struct   pat *next;
};
void  xyivFu1ZwjS (struct   pat *head, struct   pat *s) {
    struct   pat *NAB9ze7b8X = head;
    struct   pat *p = NAB9ze7b8X->next;
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
    for (; p != NULL &&s->age <= p->age;) {
        NAB9ze7b8X = p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = p->next;
    }
    NAB9ze7b8X->next = s;
    s->next = p;
}

void  heCkfG4Zc6 (struct   pat *head, int x, char name [(1010 - 999)]) {
    struct   pat *NAB9ze7b8X = head;
    struct   pat *p = NAB9ze7b8X->next;
    struct   pat *s;
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
    s = (struct   pat *) malloc (sizeof (struct   pat));
    s->age = x;
    strcpy (s->ZtfVH5IY, name);
    s->next = NULL;
    if ((365 - 305) <= x)
        xyivFu1ZwjS (head, s);
    else {
        for (; !(NULL == p);) {
            NAB9ze7b8X = p;
            p = p->next;
        }
        NAB9ze7b8X->next = s;
        s->next = p;
    };
}

int main () {
    int n, x, YvVEr9FfD;
    struct   pat *head;
    struct   pat *p;
    char name [11];
    scanf ("%d", &n);
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
    head = (struct   pat *) malloc (sizeof (struct   pat));
    head->next = NULL;
    for (YvVEr9FfD = (732 - 732); YvVEr9FfD < n; YvVEr9FfD = YvVEr9FfD +1) {
        scanf ("%s%d", name, &x);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        heCkfG4Zc6 (head, x, name);
    }
    p = head->next;
    while (p != NULL) {
        printf ("%s\n", p->ZtfVH5IY);
        p = p->next;
    }
    return (438 - 438);
}

