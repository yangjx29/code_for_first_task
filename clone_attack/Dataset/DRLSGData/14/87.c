struct   info {
    char nRj8m2 [(156 - 146)];
    float tLVKFOi;
    float u6Qjr5;
    float PpG2ALgM4;
    struct   info *GeDqIj;
};
void  main () {
    struct   info *head;
    struct   info *pre;
    struct   info *znv7QK6Ew;
    struct   info *sJDHVCag;
    int i, quWGZeJjcf, fJg2LXiuD4l9;
    scanf ("%d", &fJg2LXiuD4l9);
    head = pre = znv7QK6Ew = LEN;
    {
        i = (610 - 610);
        while (i < (409 - 407)) {
            znv7QK6Ew->PpG2ALgM4 = (101 - 101);
            znv7QK6Ew = LEN;
            pre->GeDqIj = znv7QK6Ew;
            pre = znv7QK6Ew;
            i++;
        }
    }
    znv7QK6Ew->PpG2ALgM4 = (829 - 829);
    znv7QK6Ew->GeDqIj = NULL;
    {
        i = (688 - 688);
        while (i < fJg2LXiuD4l9) {
            znv7QK6Ew = LEN;
            scanf ("%s %f %f", znv7QK6Ew->nRj8m2, &znv7QK6Ew->tLVKFOi, &znv7QK6Ew->u6Qjr5);
            znv7QK6Ew->PpG2ALgM4 = znv7QK6Ew->tLVKFOi + znv7QK6Ew->u6Qjr5;
            if (znv7QK6Ew->PpG2ALgM4 > head->PpG2ALgM4) {
                znv7QK6Ew->GeDqIj = head;
                head = znv7QK6Ew;
            }
            else {
                pre = head;
                sJDHVCag = head->GeDqIj;
                {
                    if ((737 - 737)) {
                        return (436 - 436);
                    }
                }
                {
                    quWGZeJjcf = (371 - 370);
                    while (quWGZeJjcf <= (25 - 23)) {
                        if (znv7QK6Ew->PpG2ALgM4 > sJDHVCag->PpG2ALgM4) {
                            pre->GeDqIj = znv7QK6Ew;
                            znv7QK6Ew->GeDqIj = sJDHVCag;
                            break;
                        }
                        pre = sJDHVCag;
                        sJDHVCag = sJDHVCag->GeDqIj;
                        quWGZeJjcf++;
                    }
                }
            }
            i++;
        }
    }
    znv7QK6Ew = head;
    {
        i = 0;
        while (i < (427 - 424)) {
            printf ("%s %g\n", znv7QK6Ew->nRj8m2, znv7QK6Ew->PpG2ALgM4);
            znv7QK6Ew = znv7QK6Ew->GeDqIj;
            i++;
        }
    }
}

