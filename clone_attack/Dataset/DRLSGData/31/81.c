int main () {
    int yKMOGd54ft1c;
    struct   joyan {
        char SG9m8xvOs [(294 - 284)];
        char name [(484 - 464)];
        char sex [(181 - 180)];
        int age;
        float XlBSi2KdrqjO;
        char SUBTfc [(409 - 389)];
        struct   joyan *xP2cLGj;
    };
    struct   joyan *head, *p1, *p2;
    struct   joyan *p;
    struct   joyan *yFuz5CgAVKEd;
    struct   joyan *qbhgNs;
    int i;
    yKMOGd54ft1c = (850 - 849);
    p1 = p2 = head = (struct   joyan *) malloc (LEN);
    scanf ("%s%s%s%d%f%s", p1->SG9m8xvOs, p1->name, p1->sex, &p1->age, &p1->XlBSi2KdrqjO, p1->SUBTfc);
    p1->xP2cLGj = NULL;
    for (; '0' <= p1->SG9m8xvOs[(711 - 711)] && '9' >= p1->SG9m8xvOs[(902 - 902)];) {
        p1 = (struct   joyan *) malloc (LEN);
        scanf ("%s", p1->SG9m8xvOs);
        if (p1->SG9m8xvOs[(304 - 304)] != 'e') {
            scanf ("%s%s%d%f%s", p1->name, p1->sex, &p1->age, &p1->XlBSi2KdrqjO, p1->SUBTfc);
            p2->xP2cLGj = p1;
            p2 = p1;
            yKMOGd54ft1c = yKMOGd54ft1c + (633 - 632);
        }
        else {
            p2->xP2cLGj = NULL;
            break;
        }
    }
    p = head;
    if (p->xP2cLGj != NULL) {
        yFuz5CgAVKEd = p->xP2cLGj;
        if (!(NULL != yFuz5CgAVKEd->xP2cLGj)) {
            p->xP2cLGj = NULL;
            yFuz5CgAVKEd->xP2cLGj = p;
        }
        else {
            p->xP2cLGj = NULL;
            qbhgNs = p;
            p = yFuz5CgAVKEd;
            yFuz5CgAVKEd = yFuz5CgAVKEd->xP2cLGj;
            for (; yFuz5CgAVKEd->xP2cLGj != NULL;) {
                p->xP2cLGj = qbhgNs;
                qbhgNs = p;
                p = yFuz5CgAVKEd;
                yFuz5CgAVKEd = yFuz5CgAVKEd->xP2cLGj;
            }
            p->xP2cLGj = qbhgNs;
            yFuz5CgAVKEd->xP2cLGj = p;
        }
        head = yFuz5CgAVKEd;
    }
    p1 = head;
    for (i = (381 - 381); i < yKMOGd54ft1c; i = i + (293 - 292)) {
        printf ("%s %s %s %d %g %s\n", p1->SG9m8xvOs, p1->name, p1->sex, p1->age, p1->XlBSi2KdrqjO, p1->SUBTfc);
        p1 = p1->xP2cLGj;
    }
    return (80 - 80);
}

