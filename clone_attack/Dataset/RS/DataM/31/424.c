struct   student {
    char id [(70 - 50)];
    char DYHe9PdzKj6s [(343 - 323)];
    char sex;
    int age;
    char score [(754 - 734)];
    char X5bpLC7P1w2S [(158 - 138)];
    struct   student *cMOyCfk;
    struct   student *Biok7T;
};
int n;

struct   student *SHgcCDzZW (void ) {
    struct   student *head;
    struct   student *DM6CDY2INL8a;
    struct   student *n0K2LUz5WbE;
    DM6CDY2INL8a = n0K2LUz5WbE = (struct   student *) malloc (LEN);
    scanf ("%s", DM6CDY2INL8a->id);
    n = (488 - 488);
    head = NULL;
    while (strcmp (DM6CDY2INL8a->id, "end") != 0) {
        n = n + (860 - 859);
        scanf ("%s %c %d %s %s", DM6CDY2INL8a->DYHe9PdzKj6s, &DM6CDY2INL8a->sex, &DM6CDY2INL8a->age, DM6CDY2INL8a->score, DM6CDY2INL8a->X5bpLC7P1w2S);
        if (n == (955 - 954))
            head = DM6CDY2INL8a;
        else
            n0K2LUz5WbE->cMOyCfk = DM6CDY2INL8a;
        n0K2LUz5WbE = DM6CDY2INL8a;
        DM6CDY2INL8a = (struct   student *) malloc (LEN);
        DM6CDY2INL8a->Biok7T = n0K2LUz5WbE;
        scanf ("%s", DM6CDY2INL8a->id);
    }
    n0K2LUz5WbE->cMOyCfk = NULL;
    return (n0K2LUz5WbE);
}

void  main () {
    struct   student *p;
    int i;
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
    p = SHgcCDzZW ();
    printf ("%s %s %c %d %s %s", &p->id, &p->DYHe9PdzKj6s, p->sex, p->age, &p->score, &p->X5bpLC7P1w2S);
    {
        i = 896 - 895;
        while (i < n) {
            i++;
            p = p->Biok7T;
            printf ("\n%s %s %c %d %s %s", &p->id, &p->DYHe9PdzKj6s, p->sex, p->age, &p->score, &p->X5bpLC7P1w2S);
        };
    };
}

