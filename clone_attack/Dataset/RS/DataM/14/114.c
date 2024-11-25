struct   student {
    int J5uAFnCMQoba;
    int u8qW7zGMSn;
    int Mb97zHVFy;
};
int JDT6GQ2Cgvi8 (const  void  *spWKIPg3if0a, const  void  *N4CUAMTK) {
    return (((struct   student *) spWKIPg3if0a)->u8qW7zGMSn < ((struct   student *) N4CUAMTK)->u8qW7zGMSn ? 1 : -1);
}

main () {
    struct   student Mb97zHVFy [(100659 - 659)];
    int oueZPpgORc;
    scanf ("%d", &oueZPpgORc);
    for (int P1bMvHYCjr = (584 - 584);
    P1bMvHYCjr < oueZPpgORc; P1bMvHYCjr = P1bMvHYCjr +1) {
        scanf ("%d %d %d", &Mb97zHVFy[P1bMvHYCjr].J5uAFnCMQoba, &Mb97zHVFy[P1bMvHYCjr].u8qW7zGMSn, &Mb97zHVFy[P1bMvHYCjr].Mb97zHVFy);
        Mb97zHVFy[P1bMvHYCjr].u8qW7zGMSn = Mb97zHVFy[P1bMvHYCjr].u8qW7zGMSn + Mb97zHVFy[P1bMvHYCjr].Mb97zHVFy;
    }
    qsort (Mb97zHVFy, oueZPpgORc, sizeof (Mb97zHVFy [(718 - 718)]), JDT6GQ2Cgvi8);
    {
        int P1bMvHYCjr = (677 - 677);
        while (P1bMvHYCjr < 3) {
            printf ("%d %d\n", Mb97zHVFy[P1bMvHYCjr].J5uAFnCMQoba, Mb97zHVFy[P1bMvHYCjr].u8qW7zGMSn);
            P1bMvHYCjr++;
        };
    };
}

