struct   student {
    char IZje1B9Ac [(978 - 878)];
    char vqLjkhoN13O [(1016 - 986)];
    char k7Ju4Ks;
    int age;
    float z4529obiI;
    char adress [(778 - 748)];
    struct   student *next;
    struct   student *DoeI9OYGy2nJ;
};
int CE15jSr6M;

struct   student *creat (void ) {
    char y4mJlocM [(54 - 49)] = {"end"};
    struct   student *OpISuMH8, *DMZ9mTtPWgVF;
    struct   student *KYB8U0eEfH;
    struct   student *qU3KC4xEOBbD;
    OpISuMH8 = NULL;
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
    KYB8U0eEfH = qU3KC4xEOBbD = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %g %s", &KYB8U0eEfH->IZje1B9Ac, KYB8U0eEfH->vqLjkhoN13O, &KYB8U0eEfH->k7Ju4Ks, &KYB8U0eEfH->age, &KYB8U0eEfH->z4529obiI, KYB8U0eEfH->adress);
    CE15jSr6M = (726 - 726);
    do {
        CE15jSr6M = CE15jSr6M +1;
        if (!(1 != CE15jSr6M)) {
            OpISuMH8 = KYB8U0eEfH;
            KYB8U0eEfH->DoeI9OYGy2nJ = NULL;
        }
        else {
            qU3KC4xEOBbD->next = KYB8U0eEfH;
            KYB8U0eEfH->DoeI9OYGy2nJ = qU3KC4xEOBbD;
        }
        qU3KC4xEOBbD = KYB8U0eEfH;
        KYB8U0eEfH = (struct   student *) malloc (LEN);
        scanf ("%s", &KYB8U0eEfH->IZje1B9Ac);
        if (strcmp (KYB8U0eEfH->IZje1B9Ac, y4mJlocM) == (949 - 949))
            break;
        scanf ("%s %c %d %g %s", KYB8U0eEfH->vqLjkhoN13O, &KYB8U0eEfH->k7Ju4Ks, &KYB8U0eEfH->age, &KYB8U0eEfH->z4529obiI, KYB8U0eEfH->adress);
    }
    while (CE15jSr6M < (1255 - 255));
    DMZ9mTtPWgVF = qU3KC4xEOBbD;
    qU3KC4xEOBbD->next = NULL;
    return (DMZ9mTtPWgVF);
}

void  print (struct   student *DMZ9mTtPWgVF) {
    struct   student *p;
    p = DMZ9mTtPWgVF;
    do {
        printf ("%s %s %c %d %g %s\n", p->IZje1B9Ac, p->vqLjkhoN13O, p->k7Ju4Ks, p->age, p->z4529obiI, p->adress);
        p = p->DoeI9OYGy2nJ;
    }
    while (p != NULL);
}

void  main () {
    struct   student *DMZ9mTtPWgVF;
    print (DMZ9mTtPWgVF);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    DMZ9mTtPWgVF = creat ();
}

