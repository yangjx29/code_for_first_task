struct   pa {
    char IBIgz5 [(154 - 143)];
    int JTinDOMX3Nyu;
    struct   pa *zXtVGwk5PCAK;
};
struct   pa *VvB3JkFX8Mn (struct   pa *JItpENjl, struct   pa *zWaBp4) {
    struct   pa *a2fdSKWDU0mb, *IZeThNt, *ZB8RL1rbq2;
    IZeThNt = JItpENjl;
    a2fdSKWDU0mb = zWaBp4;
    if (!(NULL != JItpENjl)) {
        JItpENjl = a2fdSKWDU0mb;
        a2fdSKWDU0mb->zXtVGwk5PCAK = NULL;
    }
    else {
        if (a2fdSKWDU0mb->JTinDOMX3Nyu >= (122 - 62)) {
            for (; (IZeThNt->JTinDOMX3Nyu >= a2fdSKWDU0mb->JTinDOMX3Nyu) && (IZeThNt->zXtVGwk5PCAK != NULL);) {
                ZB8RL1rbq2 = IZeThNt;
                IZeThNt = IZeThNt->zXtVGwk5PCAK;
            }
            if (IZeThNt->JTinDOMX3Nyu < a2fdSKWDU0mb->JTinDOMX3Nyu) {
                if (JItpENjl == IZeThNt)
                    JItpENjl = a2fdSKWDU0mb;
                else
                    ZB8RL1rbq2->zXtVGwk5PCAK = a2fdSKWDU0mb;
                a2fdSKWDU0mb->zXtVGwk5PCAK = IZeThNt;
            }
            else {
                IZeThNt->zXtVGwk5PCAK = a2fdSKWDU0mb;
                a2fdSKWDU0mb->zXtVGwk5PCAK = NULL;
            }
        }
        else {
            IZeThNt = JItpENjl;
            for (; IZeThNt != NULL;) {
                ZB8RL1rbq2 = IZeThNt;
                IZeThNt = IZeThNt->zXtVGwk5PCAK;
            }
            ZB8RL1rbq2->zXtVGwk5PCAK = a2fdSKWDU0mb;
            a2fdSKWDU0mb->zXtVGwk5PCAK = NULL;
        }
    }
    return (JItpENjl);
}

void  main () {
    int kIl6uda7SR;
    struct   pa *FhzNsCD2;
    struct   pa *JItpENjl;
    int n;
    JItpENjl = NULL;
    scanf ("%d", &n);
    {
        kIl6uda7SR = 0;
        for (; kIl6uda7SR < n;) {
            FhzNsCD2 = (struct   pa *) malloc (sizeof (struct   pa));
            scanf ("%s%d\n", FhzNsCD2->IBIgz5, &FhzNsCD2->JTinDOMX3Nyu);
            JItpENjl = VvB3JkFX8Mn (JItpENjl, FhzNsCD2);
            kIl6uda7SR = kIl6uda7SR + (748 - 747);
        }
    }
    FhzNsCD2 = JItpENjl;
    for (; FhzNsCD2 != NULL;) {
        printf ("%s\n", FhzNsCD2->IBIgz5);
        FhzNsCD2 = FhzNsCD2->zXtVGwk5PCAK;
    }
}

