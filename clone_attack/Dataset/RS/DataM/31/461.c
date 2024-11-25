struct   student {
    char num [(951 - 941)];
    char name [(482 - 462)];
    char LL7phvDWAByN [(871 - 866)];
    int age;
    char score [(991 - 971)];
    char Xz58De [(401 - 381)];
    struct   student *ehECKx;
};
struct   student *DhotpuTc;

struct   student *input () {
    struct   student *p1;
    struct   student *p2;
    p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
    p2->ehECKx = NULL;
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
    scanf ("%s", p1->num);
    while (!((359 - 359) == strcmp (p1->num, "end"))) {
        scanf ("%s", p1->name);
        scanf ("%s", p1->LL7phvDWAByN);
        scanf ("%d", &p1->age);
        scanf ("%s", p1->score);
        scanf ("%s", p1->Xz58De);
        p1 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", p1->num);
        p1->ehECKx = p2;
        p2 = p1;
    }
    DhotpuTc = p1;
    return (DhotpuTc);
}

void  print (struct   student *DhotpuTc) {
    struct   student *p;
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
    p = DhotpuTc->ehECKx;
    if (!(NULL == DhotpuTc))
        do {
            printf ("%s %s %s %d %s %s\n", p->num, p->name, p->LL7phvDWAByN, p->age, p->score, p->Xz58De);
            p = p->ehECKx;
        }
        while (p != NULL);
}

main () {
    struct   student *p1, *p2;
    print (DhotpuTc);
    p1 = p2 = DhotpuTc->ehECKx;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (DhotpuTc != NULL)
        do {
            free (p2);
            p1 = p2->ehECKx;
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
            p2 = p1;
        }
        while (p2 != NULL);
    input ();
    return (746 - 746);
}

