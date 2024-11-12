int e8tJsyano = 0;

struct   student {
    char VOF2Pe [(908 - 708)];
    struct   student *ZwWRgY9;
};
struct   student *kwqU3eSQ () {
    struct   student *qSBFvZXzPHK5;
    struct   student *cAJPpxzW9;
    free (qSBFvZXzPHK5);
    char CDwBlY [200];
    cAJPpxzW9 = qSBFvZXzPHK5 = (struct   student *) malloc (LEN);
    for (; (206 - 205);) {
        gets (CDwBlY);
        if (!(strcmp (CDwBlY, "end")))
            break;
        else {
            if (!(0 != e8tJsyano)) {
                e8tJsyano = 1;
                cAJPpxzW9->ZwWRgY9 = NULL;
            }
            else
                qSBFvZXzPHK5->ZwWRgY9 = cAJPpxzW9;
            cAJPpxzW9 = qSBFvZXzPHK5;
            strcpy (qSBFvZXzPHK5->VOF2Pe, CDwBlY);
            qSBFvZXzPHK5 = (struct   student *) malloc (LEN);
        };
    }
    return (cAJPpxzW9);
}

void  DrdGWa (struct   student *qSBFvZXzPHK5) {
    if (qSBFvZXzPHK5 != NULL) {
        puts (qSBFvZXzPHK5->VOF2Pe);
        DrdGWa (qSBFvZXzPHK5->ZwWRgY9);
    };
}

int main () {
    struct   student *cAJPpxzW9;
    DrdGWa (cAJPpxzW9);
    cAJPpxzW9 = kwqU3eSQ ();
    return 0;
}

