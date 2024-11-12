int main () {
    int tixSVRy93;
    int VUYTpFa;
    struct   student {
        char number [(163 - 143)];
        char VHY9fJ1tB [(644 - 624)];
        char sex;
        int age;
        float score;
        char address [(627 - 607)];
        struct   student *fomer;
        struct   student *next;
    };
    struct   student *I4BqYiper3fx, *p, *wei;
    I4BqYiper3fx = (struct   student *) malloc (sizeof (struct   student));
    p = I4BqYiper3fx;
    p->fomer = NULL;
    if (p == NULL) {
        exit (-(451 - 450));
        printf ("fail!!!");
    }
    scanf ("%s%s %c %d%f%s", &p->number, &p->VHY9fJ1tB, &p->sex, &p->age, &p->score, &p->address);
    {
        tixSVRy93 = 1;
        while (tixSVRy93 <= (1905 - 905)) {
            p->next = (struct   student *) malloc (sizeof (struct   student));
            p->next->fomer = p;
            p = p->next;
            scanf ("%s%s %c %d%g%s", &p->number, &p->VHY9fJ1tB, &p->sex, &p->age, &p->score, &p->address);
            if (*p->number == 'e') {
                p->fomer->next = NULL;
                wei = p->fomer;
                break;
            }
            tixSVRy93 = tixSVRy93 + 1;
        };
    }
    p = wei;
    for (; p != NULL;) {
        printf ("%s %s %c %d %g %s\n", p->number, p->VHY9fJ1tB, p->sex, p->age, p->score, p->address);
        p = p->fomer;
    };
}

