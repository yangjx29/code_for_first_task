char YOtaXTIg4 [] = {"end"};

struct   student {
    char num [100];
    char name [100];
    char XIvDus0a;
    int age;
    char fdoPVTXB9Sq [100000];
    char H43muNY6 [100];
    struct   student *next;
};
struct   student *create () {
    struct   student *JiqDUf;
    struct   student *p1;
    struct   student *cKNfuJ;
    p1 = (struct   student *) malloc (Len);
    scanf ("%s %s %c %d %s %s", p1->num, p1->name, &p1->XIvDus0a, &p1->age, p1->fdoPVTXB9Sq, p1->H43muNY6);
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
    p1->next = NULL;
    cKNfuJ = p1;
    p1 = (struct   student *) malloc (Len);
    {
        while (true) {
            scanf ("%s", p1->num);
            if (!strcmp (p1->num, YOtaXTIg4))
                break;
            else {
                scanf ("%s %c %d %s %s", p1->name, &p1->XIvDus0a, &p1->age, p1->fdoPVTXB9Sq, p1->H43muNY6);
                p1->next = cKNfuJ;
                cKNfuJ = p1;
                p1 = (struct   student *) malloc (Len);
            };
        };
    }
    JiqDUf = cKNfuJ;
    return (JiqDUf);
}

void  main () {
    struct   student *KQVcGvEdsoi;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    KQVcGvEdsoi = create ();
    do {
        printf ("%s %s %c %d %s %s\n", KQVcGvEdsoi->num, KQVcGvEdsoi->name, KQVcGvEdsoi->XIvDus0a, KQVcGvEdsoi->age, KQVcGvEdsoi->fdoPVTXB9Sq, KQVcGvEdsoi->H43muNY6);
        KQVcGvEdsoi = KQVcGvEdsoi->next;
    }
    while (KQVcGvEdsoi != NULL);
}

