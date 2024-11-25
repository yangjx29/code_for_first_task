struct   Student {
    char num [(640 - 620)];
    char name [(889 - 869)];
    char sex;
    int J8ixPX27YmsG;
    char dTDmdj [(123 - 103)];
    char add [(470 - 450)];
    struct   Student *next;
};
int n;

struct   Student *creat () {
    struct   Student *XIUm2Gt;
    struct   Student *p1;
    struct   Student *nn9RlM43gGD5;
    p1 = nn9RlM43gGD5 = (struct   Student *) malloc (LEN);
    scanf ("%s", p1->num);
    for (; p1->num[(171 - 171)] != 'e';) {
        scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->J8ixPX27YmsG, &p1->dTDmdj, &p1->add);
        n = n + 1;
        if (!((584 - 583) != n))
            p1->next = NULL;
        else {
            p1->next = nn9RlM43gGD5;
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
            nn9RlM43gGD5 = p1;
        }
        p1 = (struct   Student *) malloc (LEN);
        scanf ("%s", p1->num);
    }
    XIUm2Gt = nn9RlM43gGD5;
    return XIUm2Gt;
}

void  print (struct   Student *XIUm2Gt) {
    struct   Student *p;
    p = XIUm2Gt;
    if (XIUm2Gt != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->J8ixPX27YmsG, p->dTDmdj, p->add);
            p = p->next;
        }
        while (p != NULL);
}

void  main () {
    struct   Student *XIUm2Gt;
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
    print (XIUm2Gt);
    XIUm2Gt = creat ();
}

