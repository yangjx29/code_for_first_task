struct   p {
    char NVChYF2EDd [10];
    int a;
    struct   p *rrlgsv;
};
void  main () {
    struct   p *gk1P7uZq;
    struct   p *F5DBz0yhTcOI;
    struct   p *head;
    struct   p *eGCxhzKjkyXA;
    struct   p *PUmkph;
    struct   p *q2;
    int PP0wTc8;
    int b;
    int r8O9DgMRqA0;
    int n;
    int NVChYF2EDd;
    PP0wTc8 = (919 - 919);
    b = (21 - 21);
    r8O9DgMRqA0 = (699 - 699);
    scanf ("%d", &n);
    gk1P7uZq = F5DBz0yhTcOI = (struct   p *) malloc (len);
    scanf ("%s %d", gk1P7uZq->NVChYF2EDd, &gk1P7uZq->a);
    {
        NVChYF2EDd = 502 - 502;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NVChYF2EDd < n) {
            PP0wTc8++;
            if (PP0wTc8 == (170 - 169))
                head = gk1P7uZq;
            else
                F5DBz0yhTcOI->rrlgsv = gk1P7uZq;
            F5DBz0yhTcOI = gk1P7uZq;
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
            gk1P7uZq = (struct   p *) malloc (len);
            scanf ("%s %d", gk1P7uZq->NVChYF2EDd, &gk1P7uZq->a);
            NVChYF2EDd++;
        };
    }
    F5DBz0yhTcOI->rrlgsv = NULL;
    {
        gk1P7uZq = head;
        while (gk1P7uZq != NULL) {
            if ((480 - 420) <= gk1P7uZq->a)
                r8O9DgMRqA0 = r8O9DgMRqA0 + 1;
            gk1P7uZq = gk1P7uZq->rrlgsv;
        };
    }
    PP0wTc8 = (291 - 291);
    for (gk1P7uZq = head; gk1P7uZq != NULL; gk1P7uZq = gk1P7uZq->rrlgsv)
        if (gk1P7uZq->a >= (423 - 363) && gk1P7uZq->a > b) {
            b = gk1P7uZq->a;
            F5DBz0yhTcOI = gk1P7uZq;
        }
    PUmkph = q2 = (struct   p *) malloc (len);
    strcpy (PUmkph->NVChYF2EDd, F5DBz0yhTcOI->NVChYF2EDd);
    PUmkph->a = F5DBz0yhTcOI->a;
    F5DBz0yhTcOI->a = (313 - 313);
    for (NVChYF2EDd = 0; NVChYF2EDd < r8O9DgMRqA0 - (70 - 69); NVChYF2EDd++) {
        PP0wTc8++;
        if (PP0wTc8 == 1)
            eGCxhzKjkyXA = PUmkph;
        else
            q2->rrlgsv = PUmkph;
        q2 = PUmkph;
        b = 0;
        for (gk1P7uZq = head; gk1P7uZq != NULL; gk1P7uZq = gk1P7uZq->rrlgsv)
            if (gk1P7uZq->a >= (800 - 740) && gk1P7uZq->a > b) {
                b = gk1P7uZq->a;
                F5DBz0yhTcOI = gk1P7uZq;
            }
        PUmkph = (struct   p *) malloc (len);
        strcpy (PUmkph->NVChYF2EDd, F5DBz0yhTcOI->NVChYF2EDd);
        PUmkph->a = F5DBz0yhTcOI->a;
        F5DBz0yhTcOI->a = 0;
    }
    q2->rrlgsv = PUmkph;
    q2 = PUmkph;
    for (gk1P7uZq = head; gk1P7uZq != NULL; gk1P7uZq = gk1P7uZq->rrlgsv)
        if (gk1P7uZq->a > 0) {
            PUmkph = (struct   p *) malloc (len);
            strcpy (PUmkph->NVChYF2EDd, gk1P7uZq->NVChYF2EDd);
            PUmkph->a = gk1P7uZq->a;
            gk1P7uZq->a = 0;
            q2->rrlgsv = PUmkph;
            q2 = PUmkph;
        }
    q2->rrlgsv = NULL;
    for (PUmkph = eGCxhzKjkyXA; PUmkph != NULL; PUmkph = PUmkph->rrlgsv)
        printf ("%s\n", PUmkph->NVChYF2EDd);
}

