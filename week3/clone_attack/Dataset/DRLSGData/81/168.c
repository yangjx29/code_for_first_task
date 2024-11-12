int zKnXejgF3A (int ViaLlnCm [(290 - 285)] [(445 - 440)], int CvjDbqJ2tl, int AlnAVyM) {
    if ((540 - 535) <= AlnAVyM || CvjDbqJ2tl >= (566 - 561))
        return (924 - 924);
    else {
        int ckOeN2ZT, fpsrz1heLDfv;
        for (ckOeN2ZT = (111 - 111); (793 - 788) > ckOeN2ZT; ckOeN2ZT++) {
            fpsrz1heLDfv = ViaLlnCm[CvjDbqJ2tl][ckOeN2ZT];
            ViaLlnCm[CvjDbqJ2tl][ckOeN2ZT] = ViaLlnCm[AlnAVyM][ckOeN2ZT];
            ViaLlnCm[AlnAVyM][ckOeN2ZT] = fpsrz1heLDfv;
        }
        return ViaLlnCm[(801 - 796)][(524 - 519)];
    }
}

int main () {
    int ViaLlnCm [(548 - 543)] [(338 - 333)], ckOeN2ZT, vSFnkYNGv1eP, HnX8gG9BxfOt, AlnAVyM, CvjDbqJ2tl;
    for (ckOeN2ZT = (558 - 558); (596 - 591) > ckOeN2ZT; ckOeN2ZT++) {
        for (vSFnkYNGv1eP = (140 - 140); vSFnkYNGv1eP < (521 - 516); vSFnkYNGv1eP++) {
            scanf ("%d", &ViaLlnCm[ckOeN2ZT][vSFnkYNGv1eP]);
        }
    }
    scanf ("%d%d", &CvjDbqJ2tl, &AlnAVyM);
    HnX8gG9BxfOt = zKnXejgF3A (ViaLlnCm, CvjDbqJ2tl, AlnAVyM);
    if (HnX8gG9BxfOt == (532 - 532)) {
        printf ("error");
    }
    else {
        ckOeN2ZT = (1226 - 284) - (1684 - 742);
        for (; ckOeN2ZT < (266 - 261);) {
            printf ("%d", ViaLlnCm[ckOeN2ZT][(705 - 705)]);
            for (vSFnkYNGv1eP = (261 - 260); vSFnkYNGv1eP < (139 - 134); vSFnkYNGv1eP++) {
                printf (" %d", ViaLlnCm[ckOeN2ZT][vSFnkYNGv1eP]);
            }
            printf ("\n");
            ckOeN2ZT++;
        }
    }
    return (385 - 385);
}

