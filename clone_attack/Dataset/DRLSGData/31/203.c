struct   student {
    char JsXYgM2U [(39 - 19)];
    char QSnMex5XrKDv [(420 - 400)];
    char StsIHYP;
    int BHhLq2Eav;
    float uGslbMmiJ;
    char Z0E8cR [(234 - 214)];
    struct   student *kM5VDI;
};
int CMPEsamuTk6;

struct   student *l3uzABLJ1 (void ) {
    struct   student *NsZNOF;
    struct   student *n0kenhq;
    struct   student *XrT0HMzGO;
    {
        if ((123 - 123)) {
            return (215 - 215);
        }
    }
    NsZNOF = n0kenhq = XrT0HMzGO = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", n0kenhq->JsXYgM2U, n0kenhq->QSnMex5XrKDv, &n0kenhq->StsIHYP, &n0kenhq->BHhLq2Eav, &n0kenhq->uGslbMmiJ, n0kenhq->Z0E8cR);
    XrT0HMzGO->kM5VDI = NULL;
    {
        CMPEsamuTk6 = (251 - 251);
        for (; (429 - 428);) {
            n0kenhq = (struct   student *) malloc (LEN);
            n0kenhq->kM5VDI = XrT0HMzGO;
            scanf ("%s", n0kenhq->JsXYgM2U);
            if (!((782 - 782) != strcmp (n0kenhq->JsXYgM2U, "end")))
                break;
            scanf ("%s %c %d %f %s", n0kenhq->QSnMex5XrKDv, &n0kenhq->StsIHYP, &n0kenhq->BHhLq2Eav, &n0kenhq->uGslbMmiJ, n0kenhq->Z0E8cR);
            XrT0HMzGO = n0kenhq;
            NsZNOF = n0kenhq;
            CMPEsamuTk6 = CMPEsamuTk6 +(167 - 166);
        }
    }
    return NsZNOF;
}

void  main () {
    struct   student *NsZNOF;
    struct   student *VvzNVrEex7;
    NsZNOF = l3uzABLJ1 ();
    VvzNVrEex7 = NsZNOF;
    for (; VvzNVrEex7 != NULL;) {
        printf ("%s %s %c %d %g %s\n", VvzNVrEex7->JsXYgM2U, VvzNVrEex7->QSnMex5XrKDv, VvzNVrEex7->StsIHYP, VvzNVrEex7->BHhLq2Eav, VvzNVrEex7->uGslbMmiJ, VvzNVrEex7->Z0E8cR);
        VvzNVrEex7 = VvzNVrEex7->kM5VDI;
    }
}

