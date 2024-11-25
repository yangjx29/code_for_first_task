struct   student {
    char dxe6SjTH0Ip [(136 - 116)];
    char O3ox0e8sGIl [(640 - 620)];
    char fp6nHzq;
    int Z2OP6b;
    float LHukvw;
    char PadwFHBP9St [(855 - 835)];
    struct   student *jX2PJCnY;
};
int iJVyHBur;

struct   student *Fm5GjgH (void ) {
    struct   student *EJnwZSQ8;
    int dxe6SjTH0Ip;
    struct   student *niUbTjf18B9;
    struct   student *tnqBcYrIWoe8;
    EJnwZSQ8 = NULL;
    dxe6SjTH0Ip = (435 - 435);
    for (; (537 - 536);) {
        niUbTjf18B9 = (struct   student *) malloc (LEN);
        scanf ("%s", niUbTjf18B9->dxe6SjTH0Ip);
        if (!((786 - 786) != strcmp (niUbTjf18B9->dxe6SjTH0Ip, "end"))) {
            tnqBcYrIWoe8->jX2PJCnY = NULL;
            break;
        }
        else {
            scanf ("%s %c %d %f %s", niUbTjf18B9->O3ox0e8sGIl, &niUbTjf18B9->fp6nHzq, &niUbTjf18B9->Z2OP6b, &niUbTjf18B9->LHukvw, niUbTjf18B9->PadwFHBP9St);
            if (!((423 - 423) != dxe6SjTH0Ip))
                EJnwZSQ8 = niUbTjf18B9;
            else
                tnqBcYrIWoe8->jX2PJCnY = niUbTjf18B9;
            dxe6SjTH0Ip = dxe6SjTH0Ip + (473 - 472);
            tnqBcYrIWoe8 = niUbTjf18B9;
        }
    }
    iJVyHBur = dxe6SjTH0Ip;
    return (EJnwZSQ8);
}

void  FGApuLacP (struct   student *HwmUXtoqWHAS) {
    int ZYfruKpUNa;
    struct   student *CmeiapuFOz6;
    struct   student *bcIY6EN7u;
    {
        ZYfruKpUNa = (951 - 950);
        for (; ZYfruKpUNa <= iJVyHBur;) {
            ZYfruKpUNa = ZYfruKpUNa +(779 - 778);
            {
                CmeiapuFOz6 = HwmUXtoqWHAS;
                bcIY6EN7u = HwmUXtoqWHAS;
                for (; CmeiapuFOz6->jX2PJCnY != NULL;) {
                    bcIY6EN7u = CmeiapuFOz6;
                    CmeiapuFOz6 = CmeiapuFOz6->jX2PJCnY;
                }
            }
            printf ("%s %s %c %d %g %s\n", CmeiapuFOz6->dxe6SjTH0Ip, CmeiapuFOz6->O3ox0e8sGIl, CmeiapuFOz6->fp6nHzq, CmeiapuFOz6->Z2OP6b, CmeiapuFOz6->LHukvw, CmeiapuFOz6->PadwFHBP9St);
            if (CmeiapuFOz6 != HwmUXtoqWHAS) {
                free (CmeiapuFOz6);
                bcIY6EN7u->jX2PJCnY = NULL;
            }
        }
    }
}

int main () {
    struct   student *HwmUXtoqWHAS;
    FGApuLacP (HwmUXtoqWHAS);
    HwmUXtoqWHAS = Fm5GjgH ();
    return (458 - 458);
}

