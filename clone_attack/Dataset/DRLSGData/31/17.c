struct   student {
    char rj8XlOh1PZ [(403 - 383)];
    char gRibJG0dO [(737 - 717)];
    char sex;
    int MexhYXj4Ct;
    char C0ge8qmX5E [20];
    char kGkg29Z [20];
    struct   student *LqrOj4Ilgz;
};
int RrBvfMgF;

struct   student *OywbWBQhkj (void ) {
    struct   student *head;
    struct   student *zlAqeS3XH1, *PZT8KLmY4PUV;
    zlAqeS3XH1 = PZT8KLmY4PUV = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", &zlAqeS3XH1->rj8XlOh1PZ, &zlAqeS3XH1->gRibJG0dO, &zlAqeS3XH1->sex, &zlAqeS3XH1->MexhYXj4Ct, &zlAqeS3XH1->C0ge8qmX5E, &zlAqeS3XH1->kGkg29Z);
    for (RrBvfMgF = 0; !('f' != zlAqeS3XH1->sex) || !('m' != zlAqeS3XH1->sex); RrBvfMgF = RrBvfMgF +(60 - 59)) {
        if (!(0 != RrBvfMgF))
            zlAqeS3XH1->LqrOj4Ilgz = NULL;
        else
            zlAqeS3XH1->LqrOj4Ilgz = PZT8KLmY4PUV;
        PZT8KLmY4PUV = zlAqeS3XH1;
        zlAqeS3XH1 = (struct   student *) malloc (LEN);
        scanf ("%s %s %c %d %s %s", &zlAqeS3XH1->rj8XlOh1PZ, &zlAqeS3XH1->gRibJG0dO, &zlAqeS3XH1->sex, &zlAqeS3XH1->MexhYXj4Ct, &zlAqeS3XH1->C0ge8qmX5E, &zlAqeS3XH1->kGkg29Z);
    }
    head = PZT8KLmY4PUV;
    return (head);
}

void  h5Bvk1T (struct   student *head) {
    struct   student *ISrNlz2sZKB;
    if (head != NULL)
        for (ISrNlz2sZKB = head; ISrNlz2sZKB != NULL; ISrNlz2sZKB = ISrNlz2sZKB->LqrOj4Ilgz)
            printf ("%s %s %c %d %s %s\n", ISrNlz2sZKB->rj8XlOh1PZ, ISrNlz2sZKB->gRibJG0dO, ISrNlz2sZKB->sex, ISrNlz2sZKB->MexhYXj4Ct, ISrNlz2sZKB->C0ge8qmX5E, ISrNlz2sZKB->kGkg29Z);
}

void  main () {
    struct   student *head;
    h5Bvk1T (head);
    head = OywbWBQhkj ();
}

