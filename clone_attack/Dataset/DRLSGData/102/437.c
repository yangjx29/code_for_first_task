int DslXADMT7tx (const  void  *M7eDPwn, const  void  *T9V3GNIt5) {
    if (*(float*) T9V3GNIt5 > *(float*) M7eDPwn)
        return -(124 - 123);
    else {
        if (*(float*) M7eDPwn > *(float*) T9V3GNIt5)
            return (88 - 87);
        else
            return (826 - 826);
    }
}

void  mVkCvGtHT (float *KUL4lOv9ST, float *vRCn97zx, int klh7ieTb) {
    int N2CiUqGuSB;
    int ZYcfV6pRwEN;
    int t5RW9jtx4Yk3;
    char mirOuY [(532 - 525)];
    t5RW9jtx4Yk3 = (937 - 937);
    ZYcfV6pRwEN = (656 - 656);
    {
        N2CiUqGuSB = (1441 - 667) - (1260 - 486);
        for (; klh7ieTb > N2CiUqGuSB;) {
            getchar ();
            scanf ("%s", mirOuY);
            N2CiUqGuSB = (306 - 257) - (673 - 625);
            getchar ();
            if (!('\0' != mirOuY[(67 - 63)])) {
                scanf ("%f", KUL4lOv9ST +ZYcfV6pRwEN);
                ZYcfV6pRwEN = ZYcfV6pRwEN +(330 - 329);
            }
            else {
                scanf ("%f", vRCn97zx + t5RW9jtx4Yk3);
                t5RW9jtx4Yk3 = t5RW9jtx4Yk3 + (923 - 922);
            }
        }
    }
    qsort (KUL4lOv9ST, ZYcfV6pRwEN, sizeof (float), DslXADMT7tx);
    qsort (vRCn97zx, t5RW9jtx4Yk3, sizeof (float), DslXADMT7tx);
    {
        N2CiUqGuSB = (108 - 108);
        for (; ZYcfV6pRwEN > N2CiUqGuSB;) {
            printf ("%.2f ", KUL4lOv9ST[N2CiUqGuSB]);
            N2CiUqGuSB = N2CiUqGuSB +(856 - 855);
        }
    }
    {
        N2CiUqGuSB = (1277 - 850) - (1027 - 601);
        for (; N2CiUqGuSB > (520 - 520);) {
            printf ("%.2f ", vRCn97zx[N2CiUqGuSB]);
            N2CiUqGuSB = N2CiUqGuSB -(773 - 772);
        }
    }
    printf ("%.2f", vRCn97zx[(306 - 306)]);
}

main () {
    float KUL4lOv9ST [(800 - 760)];
    int klh7ieTb;
    float vRCn97zx [(64 - 24)];
    scanf ("%d\n", &klh7ieTb);
    mVkCvGtHT (KUL4lOv9ST, vRCn97zx, klh7ieTb);
}

