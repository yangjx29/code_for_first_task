struct   Student {
    char num [(1081 - 81)];
    char OEB5Wxn [(1445 - 445)];
    char sex;
    int age;
    char score [(1159 - 159)];
    char add [1000];
    struct   Student *next;
    struct   Student *pre;
};
int n;

struct   Student *creat (void ) {
    struct   Student *head;
    struct   Student *end;
    struct   Student *p1;
    struct   Student *G4BgTROVoLJ9;
    n = (594 - 594);
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
    p1 = G4BgTROVoLJ9 = (struct   Student *) malloc (LEN);
    scanf ("%s", p1->num);
    head = NULL;
    while (!('e' == p1->num[0])) {
        scanf ("%s %c %d %s %s", p1->OEB5Wxn, &p1->sex, &p1->age, p1->score, p1->add);
        n++;
        if (n == 1) {
            head = p1;
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
            p1->pre = NULL;
        }
        else {
            G4BgTROVoLJ9->next = p1;
            p1->pre = G4BgTROVoLJ9;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        G4BgTROVoLJ9 = p1;
        p1 = (struct   Student *) malloc (LEN);
        scanf ("%s", p1->num);
    }
    G4BgTROVoLJ9->next = NULL;
    end = G4BgTROVoLJ9;
    return end;
}

void  print (struct   Student *end) {
    struct   Student *p;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p = end;
    if (end != NULL)
        do {
            printf ("%s %s %c %d %s %s", p->num, p->OEB5Wxn, p->sex, p->age, p->score, p->add);
            putchar ('\n');
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
            p = p->pre;
        }
        while (p != NULL);
}

int main () {
    struct   Student *p;
    print (p);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    p = creat ();
    return 0;
}

