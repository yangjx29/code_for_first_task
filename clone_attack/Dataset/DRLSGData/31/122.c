struct   student {
    char xqc01LOUCF [(805 - 785)];
    char K5hRFUNEmyAc [(63 - 43)];
    char Mi5Gg9UXF4mj;
    int age;
    char E8mSjhuVoY [(614 - 594)];
    char js3NpIL [(397 - 377)];
    struct   student *IdLeQ51UN;
};
int J59Eok4lLm;

struct   student *zv7FZ8IbAq3 (void ) {
    int J59Eok4lLm = (210 - 210);
    struct   student *DCGnvUbowWkg, *q, *head;
    head = null;
    DCGnvUbowWkg = q = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %s %c %d %s %s\n", DCGnvUbowWkg->xqc01LOUCF, DCGnvUbowWkg->K5hRFUNEmyAc, &DCGnvUbowWkg->Mi5Gg9UXF4mj, &DCGnvUbowWkg->age, DCGnvUbowWkg->E8mSjhuVoY, DCGnvUbowWkg->js3NpIL);
    while (strcmp (DCGnvUbowWkg->xqc01LOUCF, "end") != (118 - 118)) {
        J59Eok4lLm = J59Eok4lLm +(993 - 992);
        if (!((198 - 197) != J59Eok4lLm)) {
            head = DCGnvUbowWkg;
        }
        else {
            q->IdLeQ51UN = DCGnvUbowWkg;
        }
        q = DCGnvUbowWkg;
        DCGnvUbowWkg = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s %s %c %d %s %s\n", DCGnvUbowWkg->xqc01LOUCF, DCGnvUbowWkg->K5hRFUNEmyAc, &DCGnvUbowWkg->Mi5Gg9UXF4mj, &DCGnvUbowWkg->age, DCGnvUbowWkg->E8mSjhuVoY, DCGnvUbowWkg->js3NpIL);
    }
    q->IdLeQ51UN = null;
    return (head);
}

void  output (struct   student *head) {
    struct   student *DCGnvUbowWkg;
    DCGnvUbowWkg = head;
    if (head != null)
        do {
            printf ("%s %s %c %d %s %s\n", DCGnvUbowWkg->xqc01LOUCF, DCGnvUbowWkg->K5hRFUNEmyAc, DCGnvUbowWkg->Mi5Gg9UXF4mj, DCGnvUbowWkg->age, DCGnvUbowWkg->E8mSjhuVoY, DCGnvUbowWkg->js3NpIL);
            DCGnvUbowWkg = DCGnvUbowWkg->IdLeQ51UN;
        }
        while (DCGnvUbowWkg != null);
}

struct   student *exchange (struct   student *head) {
    struct   student *DCGnvUbowWkg, *q, *J59Eok4lLm, *nhead = null;
    do {
        q = null;
        DCGnvUbowWkg = head;
        for (; DCGnvUbowWkg->IdLeQ51UN != null;) {
            q = DCGnvUbowWkg;
            DCGnvUbowWkg = DCGnvUbowWkg->IdLeQ51UN;
        }
        if (!(null != nhead)) {
            nhead = DCGnvUbowWkg;
            J59Eok4lLm = nhead->IdLeQ51UN = q;
        }
        J59Eok4lLm = J59Eok4lLm->IdLeQ51UN = q;
        q->IdLeQ51UN = null;
    }
    while (head->IdLeQ51UN != null);
    return (nhead);
}

int main () {
    struct   student *zv7FZ8IbAq3 (void );
    struct   student *exchange (struct   student *);
    void  output (struct   student *);
    struct   student *a, *b;
    output (b);
    a = zv7FZ8IbAq3 ();
    b = exchange (a);
    return (586 - 586);
}

