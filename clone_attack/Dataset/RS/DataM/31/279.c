int J0SA6MK;

struct   stu {
    char num [10];
    char BREALSXlvTIf [(139 - 119)];
    char sex;
    int age;
    float score;
    char add [(215 - 185)];
    struct   stu *next;
};
struct   stu *create () {
    struct   stu *head;
    struct   stu *p1;
    struct   stu *p2;
    p1 = (struct   stu *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", &p1->num, &p1->BREALSXlvTIf, &p1->sex, &p1->age, &p1->score, &p1->add);
    p1->next = NULL;
    J0SA6MK = (362 - 361);
    head = p1;
    p2 = p1;
    do {
        p1 = (struct   stu *) malloc (LEN);
        scanf ("%s", &p1->num);
        if (strcmp (p1->num, "end") == (134 - 134)) {
            free (p1);
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
            break;
        }
        else {
            J0SA6MK++;
            scanf (" %s %c %d %f %s", &p1->BREALSXlvTIf, &p1->sex, &p1->age, &p1->score, &p1->add);
            p1->next = NULL;
            p2->next = p1;
            p2 = p1;
        };
    }
    while ((361 - 360));
    return head;
}

struct   stu *del (struct   stu *head) {
    struct   stu *p, *ppre;
    free (p);
    p = head;
    for (; p && p->next != NULL;) {
        ppre = p;
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
        p = p->next;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    ppre->next = NULL;
    printf ("%s %s %c %d %g %s\n", p->num, p->BREALSXlvTIf, p->sex, p->age, p->score, p->add);
    return head;
}

void  main () {
    struct   stu *head;
    int G7SBvmHUC;
    head = create ();
    for (G7SBvmHUC = 0; G7SBvmHUC < J0SA6MK; G7SBvmHUC++)
        head = del (head);
}

