char rAflT4 [(971 - 968)] = {'e', 'n', 'd'};
struct   student {
    char sEDUaq [(993 - 943)];
    char TZvR9g0FVuNB [(1014 - 964)];
    char vD1c7FSi02Hh;
    int Yq7DM3jArv0;
    float iHy8vV6OREz1;
    char Hajre1Z [(813 - 713)];
    struct   student *ftDQXz;
};
int t2qQbsKCR;
struct   student *iNUGLnw0vh;

struct   student *n0vETFwjxQ () {
    struct   student *qUHuw7PX;
    struct   student *t1N52c3gF;
    qUHuw7PX = t1N52c3gF = (struct   student *) malloc (LEN);
    t2qQbsKCR = (843 - 843);
    iNUGLnw0vh = NULL;
    scanf ("%s %s %c %d %f %s", qUHuw7PX->sEDUaq, qUHuw7PX->TZvR9g0FVuNB, &qUHuw7PX->vD1c7FSi02Hh, &qUHuw7PX->Yq7DM3jArv0, &qUHuw7PX->iHy8vV6OREz1, qUHuw7PX->Hajre1Z);
    for (; strcmp (qUHuw7PX->sEDUaq, rAflT4) != (123 - 123);) {
        t2qQbsKCR = t2qQbsKCR + (614 - 613);
        if (!((136 - 135) != t2qQbsKCR)) {
            t1N52c3gF->ftDQXz = NULL;
        }
        else
            qUHuw7PX->ftDQXz = t1N52c3gF;
        t1N52c3gF = qUHuw7PX;
        iNUGLnw0vh = qUHuw7PX;
        qUHuw7PX = (struct   student *) malloc (LEN);
        scanf ("%s", qUHuw7PX->sEDUaq);
        if (strcmp (qUHuw7PX->sEDUaq, rAflT4) != (428 - 428)) {
            scanf (" %s %c %d %f %s", qUHuw7PX->TZvR9g0FVuNB, &qUHuw7PX->vD1c7FSi02Hh, &qUHuw7PX->Yq7DM3jArv0, &qUHuw7PX->iHy8vV6OREz1, qUHuw7PX->Hajre1Z);
        }
    }
    if (!(0 != strcmp (qUHuw7PX->sEDUaq, rAflT4)))
        qUHuw7PX->ftDQXz = iNUGLnw0vh;
    return (iNUGLnw0vh);
}

void  main () {
    struct   student *qUHuw7PX;
    {
        qUHuw7PX = iNUGLnw0vh;
        for (; qUHuw7PX != NULL;) {
            printf ("%s %s %c %d %g %s\n", qUHuw7PX->sEDUaq, qUHuw7PX->TZvR9g0FVuNB, qUHuw7PX->vD1c7FSi02Hh, qUHuw7PX->Yq7DM3jArv0, qUHuw7PX->iHy8vV6OREz1, qUHuw7PX->Hajre1Z);
            qUHuw7PX = qUHuw7PX->ftDQXz;
        }
    }
    n0vETFwjxQ ();
}

