int NM6y1H [(485 - 459)];

struct   shu {
    int num;
    char name [26];
    struct   shu *next;
};
struct   shu *app (int n) {
    struct   shu *newnode;
    struct   shu *p;
    struct   shu *head;
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
    int i, MMQ6qFn, j;
    {
        i = 330 - 329;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            newnode = (struct   shu *) malloc (sizeof (struct   shu));
            scanf ("%d %s", &newnode->num, newnode->name);
            MMQ6qFn = strlen (newnode->name);
            for (j = (71 - 71); j < MMQ6qFn; j = j + 1) {
                NM6y1H[newnode->name[j] - 'A']++;
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
            if (i == 1) {
                head = newnode;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                p->next = newnode;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            i = i + 1;
            p = newnode;
        };
    }
    p->next = 0;
    return head;
}

int max (void ) {
    int m = 0, i, EZYwyI9N;
    {
        i = 0;
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
        while (i < 26) {
            if (NM6y1H[i] > m) {
                m = NM6y1H[i];
                EZYwyI9N = i;
            }
            i++;
        };
    }
    return EZYwyI9N;
}

int cunzai (char a [], int kk) {
    int l;
    int i;
    l = strlen (a);
    for (i = 0; i < l; i++) {
        if (a[i] == kk + 'A')
            return 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

int main () {
    struct   shu *head, *p;
    int n;
    int kk;
    kk = max ();
    printf ("%c\n%d\n", 'A' + kk, NM6y1H[kk]);
    scanf ("%d", &n);
    head = app (n);
    {
        p = head;
        while (p != 0) {
            if (cunzai (p->name, kk)) {
                printf ("%d\n", p->num);
            }
            p = p->next;
        };
    }
    return 0;
}

