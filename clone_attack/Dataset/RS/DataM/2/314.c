struct   book {
    int num;
    char name [27];
    struct   book *RYPhQGTOp7;
};
int m;
struct   book *x3tY8OGXz9f;

struct   book *zCtEM7wGVKfI () {
    struct   book *x3tY8OGXz9f, *p1, *p2;
    int t;
    t = (796 - 796);
    x3tY8OGXz9f = p1 = p2 = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d %s", &p1->num, p1->name);
    while (t < m) {
        t = t + 1;
        p2->RYPhQGTOp7 = p1;
        p2 = p1;
        p1 = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &p1->num, p1->name);
    }
    p2->RYPhQGTOp7 = NULL;
    return (x3tY8OGXz9f);
}

int k = (702 - 702), max = (670 - 670);

void  YXu6SB (struct   book *p) {
    int i;
    int j;
    int *pi;
    p = x3tY8OGXz9f;
    pi = (int *) malloc (sizeof (int) * 26);
    for (i = 0; 26 > i; i = i + 1)
        *(pi + i) = 0;
    for (i = 0; m > i; i = i + 1) {
        {
            j = 0;
            while (!('\0' == p->name[j])) {
                (*(pi + (p->name[j] - 'A'))) = (*(pi + (p->name[j] - 'A'))) + 1;
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
                j = j + 1;
            };
        }
        p = p->RYPhQGTOp7;
    }
    for (j = 0; 26 > j; j = j + 1) {
        if (max < *(pi + j)) {
            max = *(pi + j);
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
            k = j;
        };
    };
}

int main () {
    int i;
    int j;
    struct   book *p;
    YXu6SB (p);
    scanf ("%d", &m);
    x3tY8OGXz9f = p = zCtEM7wGVKfI ();
    printf ("%c\n%d\n", (k + 'A'), max);
    p = x3tY8OGXz9f;
    for (i = 0; i < m; i = i + 1) {
        for (j = 0; p->name[j] != '\0'; j++)
            if (p->name[j] == k + 'A') {
                printf ("%d\n", p->num);
                break;
            }
        p = p->RYPhQGTOp7;
    };
}

