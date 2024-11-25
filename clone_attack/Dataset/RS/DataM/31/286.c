struct   student {
    char num [10];
    char name [20];
    char sex;
    int age;
    float Ak1vB4amU;
    char adr [15];
    struct   student *last;
};
char e0BW9sHR [] = "end";
int P4yiEK = 0;

void  print (struct   student *head) {
    struct   student *p;
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
    p = head;
    if (!(NULL == head))
        do {
            printf ("%s %s %c %d %g %s\n", p->num, p->name, p->sex, p->age, p->Ak1vB4amU, p->adr);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            p = p->last;
        }
        while (p != NULL);
}

void  main () {
    struct   student *creat (void );
    void  print (struct   student *head);
    struct   student *head;
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
    };
    print (head);
    head = creat ();
}

struct   student *creat () {
    struct   student *head;
    struct   student *p1;
    struct   student *PxT0lweIBdf;
    head = NULL;
    p1 = PxT0lweIBdf = (struct   student *) malloc (LEN);
    scanf ("%s", &p1->num);
    while (strcmp (p1->num, e0BW9sHR) != 0) {
        scanf ("%s %c %d %f %s", &p1->name, &p1->sex, &p1->age, &p1->Ak1vB4amU, &p1->adr);
        if (P4yiEK == 0) {
            P4yiEK = 1;
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
            p1->last = NULL;
        }
        else {
            p1->last = PxT0lweIBdf;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        PxT0lweIBdf = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", &p1->num);
    }
    head = PxT0lweIBdf;
    return (head);
}

