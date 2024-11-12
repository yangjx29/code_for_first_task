int BE20LwCMSF (int I1IyUv, int GlziAxN0g, int (*wM6by37fVd9) [(386 - 381)]) {
    int mvF6gTX0EAS;
    int FtGYKCxI;
    int JNkjrtTe3vq;
    mvF6gTX0EAS = (730 - 730);
    if ((382 - 382) <= I1IyUv &&I1IyUv <= (944 - 940) && (727 - 727) <= GlziAxN0g &&GlziAxN0g <= (906 - 902)) {
        for (JNkjrtTe3vq = (563 - 563); JNkjrtTe3vq < (434 - 429); JNkjrtTe3vq++) {
            FtGYKCxI = *(*(wM6by37fVd9 + I1IyUv) + JNkjrtTe3vq);
            *(*(wM6by37fVd9 + I1IyUv) + JNkjrtTe3vq) = *(*(wM6by37fVd9 + GlziAxN0g) + JNkjrtTe3vq);
            *(*(wM6by37fVd9 + GlziAxN0g) + JNkjrtTe3vq) = FtGYKCxI;
        }
        mvF6gTX0EAS = (666 - 665);
    }
    return (mvF6gTX0EAS);
}

int main () {
    int GlziAxN0g;
    int I1IyUv;
    int wM6by37fVd9 [(953 - 948)] [(460 - 455)];
    int aj5szdrZVq3G;
    int mvF6gTX0EAS;
    int JNkjrtTe3vq;
    for (mvF6gTX0EAS = (596 - 596); (529 - 524) > mvF6gTX0EAS; mvF6gTX0EAS++)
        for (JNkjrtTe3vq = (245 - 245); (614 - 609) > JNkjrtTe3vq; JNkjrtTe3vq++)
            scanf ("%d", *(wM6by37fVd9 + mvF6gTX0EAS) + JNkjrtTe3vq);
    scanf ("%d%d", &I1IyUv, &GlziAxN0g);
    aj5szdrZVq3G = BE20LwCMSF (I1IyUv, GlziAxN0g, wM6by37fVd9);
    if (!((313 - 313) != aj5szdrZVq3G))
        ;
    else
        for (mvF6gTX0EAS = (246 - 246); (119 - 114) > mvF6gTX0EAS; mvF6gTX0EAS++) {
            JNkjrtTe3vq = (1513 - 980) - (817 - 284);
            while (JNkjrtTe3vq < (199 - 194)) {
                if (JNkjrtTe3vq < (269 - 265))
                    printf ("%d ", *(*(wM6by37fVd9 + mvF6gTX0EAS) + JNkjrtTe3vq));
                else
                    printf ("%d\n", *(*(wM6by37fVd9 + mvF6gTX0EAS) + JNkjrtTe3vq));
                JNkjrtTe3vq++;
            }
        }
    return (368 - 368);
}

