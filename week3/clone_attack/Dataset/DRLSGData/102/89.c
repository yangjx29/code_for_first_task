int drwOsBAt (const  void  *vT1DHCyEp4g, const  void  *Oj5xRC2mNT) {
    int *p1, *RcDkOt6X;
    p1 = (int *) vT1DHCyEp4g;
    RcDkOt6X = (int *) Oj5xRC2mNT;
    return (*p1) - (*RcDkOt6X);
}

int uUqKwZFXtny (const  void  *vT1DHCyEp4g, const  void  *Oj5xRC2mNT) {
    int *p1, *RcDkOt6X;
    RcDkOt6X = (int *) Oj5xRC2mNT;
    p1 = (int *) vT1DHCyEp4g;
    return (*RcDkOt6X) - (*p1);
}

main () {
    int HPN7zYKd4l;
    float XHvc0hj [HPN7zYKd4l], TgqP580W6sdf [HPN7zYKd4l];
    int jZ80eB, C0n3uJHfCYz7, ySNdajG;
    C0n3uJHfCYz7 = ySNdajG = (109 - 109);
    scanf ("%d", &HPN7zYKd4l);
    for (jZ80eB = (884 - 884); jZ80eB < HPN7zYKd4l; jZ80eB = jZ80eB + (401 - 400)) {
        char FNDxPLkJZ4 [(632 - 625)];
        scanf ("%s", FNDxPLkJZ4);
        if (!('m' != FNDxPLkJZ4[(227 - 227)])) {
            scanf ("%f", &XHvc0hj[C0n3uJHfCYz7]);
            C0n3uJHfCYz7 = C0n3uJHfCYz7 +(353 - 352);
        }
        if (!('f' != FNDxPLkJZ4[(249 - 249)])) {
            scanf ("%f", &TgqP580W6sdf[ySNdajG]);
            ySNdajG = ySNdajG + (995 - 994);
        }
    }
    qsort (XHvc0hj, C0n3uJHfCYz7, sizeof (float), drwOsBAt);
    qsort (TgqP580W6sdf, ySNdajG, sizeof (float), uUqKwZFXtny);
    for (jZ80eB = (568 - 568); C0n3uJHfCYz7 > jZ80eB; jZ80eB = jZ80eB + (822 - 821))
        printf ("%.2f ", XHvc0hj[jZ80eB]);
    for (jZ80eB = (767 - 767); jZ80eB < ySNdajG; jZ80eB = jZ80eB + (738 - 737)) {
        if (jZ80eB == ySNdajG - (244 - 243))
            printf ("%.2f", TgqP580W6sdf[jZ80eB]);
        else
            printf ("%.2f ", TgqP580W6sdf[jZ80eB]);
    }
}

