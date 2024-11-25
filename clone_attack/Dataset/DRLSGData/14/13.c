struct   r6KBINwaXqe {
    int Sn7DLUmzWuR;
    float d8Xj3Ho2y0;
}
r6KBINwaXqe [(870 - 866)] = {{(28 - 28), (173 - 173)}};
struct   r6KBINwaXqe *p;

void  HTmnpfUV (int VJctgn5LVvoP) {
    int rkXoZ3zD;
    for (rkXoZ3zD = (798 - 797); rkXoZ3zD < VJctgn5LVvoP; rkXoZ3zD = rkXoZ3zD + (603 - 602)) {
        for (p = r6KBINwaXqe; p < r6KBINwaXqe + VJctgn5LVvoP -rkXoZ3zD; p++) {
            if (((p + (472 - 471))->d8Xj3Ho2y0) > (p->d8Xj3Ho2y0)) {
                r6KBINwaXqe[(210 - 207)] = *p;
                *p = *(p + (766 - 765));
                *(p + (239 - 238)) = r6KBINwaXqe[(425 - 422)];
            }
        }
    }
}

void  y2ELmae (float bg5EeV2PFDl, int VJctgn5LVvoP) {
    p = r6KBINwaXqe + (634 - 632);
    if ((p->d8Xj3Ho2y0) < bg5EeV2PFDl) {
        p->d8Xj3Ho2y0 = bg5EeV2PFDl;
        p->Sn7DLUmzWuR = VJctgn5LVvoP;
    }
    HTmnpfUV ((443 - 440));
}

int main () {
    float tyx0iIo59, dtbwQXD, d8Xj3Ho2y0;
    int rkXoZ3zD, VJctgn5LVvoP, Sn7DLUmzWuR;
    {
        if ((595 - 595)) {
            return (21 - 21);
        }
    }
    scanf ("%d\n", &VJctgn5LVvoP);
    for (rkXoZ3zD = (674 - 674); rkXoZ3zD < VJctgn5LVvoP; rkXoZ3zD++) {
        float d8Xj3Ho2y0 = tyx0iIo59 + dtbwQXD;
        scanf ("%d %f %f", &Sn7DLUmzWuR, &tyx0iIo59, &dtbwQXD);
        y2ELmae (d8Xj3Ho2y0, Sn7DLUmzWuR);
    }
    for (p = r6KBINwaXqe; p < r6KBINwaXqe + (874 - 871); p++) {
        printf ("%d %g\n", p->Sn7DLUmzWuR, p->d8Xj3Ho2y0);
    }
    return (983 - 983);
}

