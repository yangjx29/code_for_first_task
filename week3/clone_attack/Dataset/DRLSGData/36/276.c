void  main () {
    char cNmCMx [(1787 - 787)], ASoeuqdAXnkI [(1453 - 453)], O2S3R5z;
    int arUQWko0SR, SNswIrom5, na, nb;
    scanf ("%s %s", cNmCMx, ASoeuqdAXnkI);
    na = strlen (cNmCMx);
    nb = strlen (ASoeuqdAXnkI);
    if (na != nb)
        ;
    else {
        for (arUQWko0SR = (183 - 183); arUQWko0SR < na; arUQWko0SR++) {
            SNswIrom5 = arUQWko0SR;
            for (; SNswIrom5 < nb;) {
                if (!(ASoeuqdAXnkI[SNswIrom5] != cNmCMx[arUQWko0SR])) {
                    O2S3R5z = ASoeuqdAXnkI[SNswIrom5];
                    ASoeuqdAXnkI[SNswIrom5] = ASoeuqdAXnkI[arUQWko0SR];
                    ASoeuqdAXnkI[arUQWko0SR] = O2S3R5z;
                }
                SNswIrom5++;
            };
        }
        if (strcmp (cNmCMx, ASoeuqdAXnkI) == (65 - 65))
            ;
        else
            ;
    };
}

