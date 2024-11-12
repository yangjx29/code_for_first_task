struct   student {
    int ctf7UZW;
    int A8RWgz7B;
    int iyqdRTC;
    struct   student *nRF9A3QEy;
};
int Oygbcr2958;

struct   student *IQhSx4P6n (int a2xzwDA) {
    struct   student *mr7kqPIWe9H;
    struct   student *O2rwCPD7;
    struct   student *IFyYzx0;
    mr7kqPIWe9H = NULL;
    O2rwCPD7 = IFyYzx0 = (struct   student *) malloc (LEN);
    Oygbcr2958 = (209 - 209);
    scanf ("%d%d%d", &O2rwCPD7->ctf7UZW, &O2rwCPD7->A8RWgz7B, &O2rwCPD7->iyqdRTC);
    for (; a2xzwDA--;) {
        Oygbcr2958 = Oygbcr2958 +(939 - 938);
        if (!((608 - 607) != Oygbcr2958))
            mr7kqPIWe9H = O2rwCPD7;
        else
            IFyYzx0->nRF9A3QEy = O2rwCPD7;
        IFyYzx0 = O2rwCPD7;
        O2rwCPD7 = (struct   student *) malloc (LEN);
        scanf ("%d%d%d", &O2rwCPD7->ctf7UZW, &O2rwCPD7->A8RWgz7B, &O2rwCPD7->iyqdRTC);
    }
    IFyYzx0->nRF9A3QEy = NULL;
    return (mr7kqPIWe9H);
}

struct   student *BcFlB8TA2OpW (struct   student *mr7kqPIWe9H, int ctf7UZW) {
    struct   student *O2rwCPD7;
    struct   student *IFyYzx0;
    O2rwCPD7 = mr7kqPIWe9H;
    while (!(O2rwCPD7->ctf7UZW == ctf7UZW) && !(NULL == O2rwCPD7->nRF9A3QEy)) {
        IFyYzx0 = O2rwCPD7;
        O2rwCPD7 = O2rwCPD7->nRF9A3QEy;
    }
    if (ctf7UZW == O2rwCPD7->ctf7UZW) {
        if (O2rwCPD7 == mr7kqPIWe9H)
            mr7kqPIWe9H = O2rwCPD7->nRF9A3QEy;
        else
            IFyYzx0->nRF9A3QEy = O2rwCPD7->nRF9A3QEy;
        Oygbcr2958 = Oygbcr2958 -1;
    }
    return (mr7kqPIWe9H);
}

void  main () {
    struct   student *mr7kqPIWe9H;
    struct   student *O2rwCPD7;
    struct   student *IFyYzx0;
    int FpwDOAe15;
    int Qg5dNa;
    int a2xzwDA;
    FpwDOAe15 = (384 - 384);
    scanf ("%d", &a2xzwDA);
    mr7kqPIWe9H = IQhSx4P6n (a2xzwDA);
    {
        Qg5dNa = 0;
        while (Qg5dNa < (697 - 694)) {
            Qg5dNa = Qg5dNa +1;
            FpwDOAe15 = 0;
            O2rwCPD7 = IFyYzx0 = mr7kqPIWe9H;
            while (O2rwCPD7->nRF9A3QEy != NULL) {
                if ((O2rwCPD7->A8RWgz7B + O2rwCPD7->iyqdRTC) > FpwDOAe15)
                    FpwDOAe15 = O2rwCPD7->A8RWgz7B + O2rwCPD7->iyqdRTC, IFyYzx0 = O2rwCPD7;
                O2rwCPD7 = O2rwCPD7->nRF9A3QEy;
            }
            printf ("%d %d\n", IFyYzx0->ctf7UZW, (IFyYzx0->A8RWgz7B + IFyYzx0->iyqdRTC));
            mr7kqPIWe9H = BcFlB8TA2OpW (mr7kqPIWe9H, IFyYzx0->ctf7UZW);
        };
    };
}

