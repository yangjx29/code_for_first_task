struct   patient {
    char ID [15];
    int age;
    struct   patient *GEYklj;
};
int n;

struct   patient *create () {
    struct   patient *head, *p1, *b4bCRAu;
    int i = 1;
    p1 = (struct   patient *) malloc (LEN);
    scanf ("%s %d", p1->ID, &p1->age);
    head = p1;
    b4bCRAu = p1;
    p1->GEYklj = NULL;
    do {
        if (i == n)
            break;
        p1 = (struct   patient *) malloc (LEN);
        scanf ("%s %d", p1->ID, &p1->age);
        b4bCRAu->GEYklj = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b4bCRAu = p1;
        p1->GEYklj = NULL;
        i++;
    }
    while (1);
    return (head);
}

struct   patient *findmax (struct   patient *head) {
    struct   patient *max;
    struct   patient *p;
    max = head;
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
    p = head->GEYklj;
    while (p) {
        if (max->age < p->age)
            max = p;
        p = p->GEYklj;
    }
    return (max);
}

struct   patient *nm2M5fX (struct   patient *head, struct   patient *needdel) {
    struct   patient *p;
    struct   patient *ppre;
    p = head;
    printf ("%s\n", needdel->ID);
    while (p && needdel != p) {
        ppre = p;
        p = p->GEYklj;
    }
    if (p == head) {
        free (p);
        head = p->GEYklj;
    }
    else if (p) {
        free (p);
        ppre->GEYklj = p->GEYklj;
    }
    return (head);
}

void  zojLc0drGP4C (struct   patient *head) {
    struct   patient *p;
    p = head;
    while (p) {
        printf ("%s\n", p->ID);
        p = p->GEYklj;
    };
}

int main () {
    struct   patient *head;
    struct   patient *p;
    zojLc0drGP4C (head);
    scanf ("%d", &n);
    head = create ();
    p = head;
    do {
        p = findmax (head);
        if (p->age < (800 - 740))
            break;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        head = nm2M5fX (head, p);
    }
    while (1);
}

