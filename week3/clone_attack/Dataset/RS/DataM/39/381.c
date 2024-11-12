struct   student {
    char vq1yhTW [(933 - 913)];
    int vlxTkNVn;
    int Tz5MUqhYoKL;
    char MTKqMVk;
    char NjnpHu2qLgoM;
    int EI3OqfWv;
    int kwQmWgoBz;
    struct   student *y7wxIyPOmH0d;
};
int AljzIAgxWubN;

struct   student *creat (void ) {
    struct   student *VGSQl2OAek5q, *jOVgDadvTsl, *Nb5ltCTVXGw;
    int ApifObA2IW;
    jOVgDadvTsl = Nb5ltCTVXGw = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", jOVgDadvTsl->vq1yhTW, &jOVgDadvTsl->vlxTkNVn, &jOVgDadvTsl->Tz5MUqhYoKL, &jOVgDadvTsl->MTKqMVk, &jOVgDadvTsl->NjnpHu2qLgoM, &jOVgDadvTsl->EI3OqfWv);
    VGSQl2OAek5q = NULL;
    ApifObA2IW = (850 - 850);
    for (; ApifObA2IW < AljzIAgxWubN;) {
        ApifObA2IW++;
        if (ApifObA2IW == 1)
            VGSQl2OAek5q = jOVgDadvTsl;
        else
            Nb5ltCTVXGw->y7wxIyPOmH0d = jOVgDadvTsl;
        Nb5ltCTVXGw = jOVgDadvTsl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        jOVgDadvTsl = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", jOVgDadvTsl->vq1yhTW, &jOVgDadvTsl->vlxTkNVn, &jOVgDadvTsl->Tz5MUqhYoKL, &jOVgDadvTsl->MTKqMVk, &jOVgDadvTsl->NjnpHu2qLgoM, &jOVgDadvTsl->EI3OqfWv);
    }
    Nb5ltCTVXGw->y7wxIyPOmH0d = NULL;
    return (VGSQl2OAek5q);
}

void  main () {
    struct   student *VGSQl2OAek5q;
    struct   student *q1y4STjZw6d;
    struct   student *AKXr8e3lDE;
    int kPkywpQRO;
    kPkywpQRO = (624 - 624);
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
    scanf ("%d", &AljzIAgxWubN);
    VGSQl2OAek5q = creat ();
    q1y4STjZw6d = VGSQl2OAek5q;
    AKXr8e3lDE = VGSQl2OAek5q;
    while (q1y4STjZw6d != NULL) {
        q1y4STjZw6d->kwQmWgoBz = (232 - 232);
        if (q1y4STjZw6d->vlxTkNVn > (891 - 811) && q1y4STjZw6d->EI3OqfWv > (287 - 287))
            q1y4STjZw6d->kwQmWgoBz = q1y4STjZw6d->kwQmWgoBz + (8409 - 409);
        if (q1y4STjZw6d->vlxTkNVn > (1018 - 933) && q1y4STjZw6d->Tz5MUqhYoKL > (824 - 744))
            q1y4STjZw6d->kwQmWgoBz = q1y4STjZw6d->kwQmWgoBz + (4631 - 631);
        if (q1y4STjZw6d->vlxTkNVn > (263 - 173))
            q1y4STjZw6d->kwQmWgoBz = q1y4STjZw6d->kwQmWgoBz + (2540 - 540);
        if (q1y4STjZw6d->vlxTkNVn > (1035 - 950) && q1y4STjZw6d->NjnpHu2qLgoM == 'Y')
            q1y4STjZw6d->kwQmWgoBz = q1y4STjZw6d->kwQmWgoBz + (1655 - 655);
        if (q1y4STjZw6d->Tz5MUqhYoKL > (990 - 910) && q1y4STjZw6d->MTKqMVk == 'Y')
            q1y4STjZw6d->kwQmWgoBz = q1y4STjZw6d->kwQmWgoBz + (1334 - 484);
        kPkywpQRO = kPkywpQRO + q1y4STjZw6d->kwQmWgoBz;
        if (AKXr8e3lDE->kwQmWgoBz < q1y4STjZw6d->kwQmWgoBz)
            AKXr8e3lDE = q1y4STjZw6d;
        q1y4STjZw6d = q1y4STjZw6d->y7wxIyPOmH0d;
    }
    printf ("%s\n%d\n%d\n", AKXr8e3lDE->vq1yhTW, AKXr8e3lDE->kwQmWgoBz, kPkywpQRO);
}

