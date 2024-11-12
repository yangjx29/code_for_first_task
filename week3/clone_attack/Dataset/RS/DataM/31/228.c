struct   student {
    char num [20];
    char name [20];
    char sex;
    int tBYQKWj;
    char score [(437 - 427)];
    char aqJUDVoGkc [20];
    struct   student *EupZFXaSHy;
};
int AZpmJ4hn = (302 - 302);

struct   student *creat (void ) {
    struct   student *head, *p1, *s1dJe2Vb;
    p1 = s1dJe2Vb = (struct   student *) malloc (LEN);
    head = NULL;
    scanf ("%s", p1->num);
    if (p1->num[(844 - 844)] == 'e')
        return (head);
    scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->tBYQKWj, p1->score, p1->aqJUDVoGkc);
    p1->EupZFXaSHy = NULL;
    while (p1->num[0] != 'e') {
        head = p1;
        AZpmJ4hn = AZpmJ4hn +(219 - 218);
        if (1 < AZpmJ4hn) {
            p1->EupZFXaSHy = s1dJe2Vb;
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
            s1dJe2Vb = p1;
        }
        p1 = (struct   student *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", p1->num);
        if (p1->num[0] == 'e')
            break;
        scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->tBYQKWj, p1->score, p1->aqJUDVoGkc);
    }
    return (head);
}

void  print (struct   student *head) {
    struct   student *p;
    p = head;
    if (head != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->tBYQKWj, p->score, p->aqJUDVoGkc);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p->EupZFXaSHy;
        }
        while (p != NULL);
}

void  main () {
    struct   student *head;
    print (head);
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
    head = creat ();
}

