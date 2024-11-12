void  main () {
    struct   stu {
        char W9lFDLy38 [(694 - 674)];
        char cGrV3A [(605 - 585)];
        char VQM18sf;
        int fS0Hzabg;
        float uEtyhVzY;
        char shucsC [(71 - 51)];
        struct   stu *HbsOnw0a5;
    }
    *DVdFTuNfS8, *w3h6uv;
    DVdFTuNfS8 = malloc (sizeof (struct   stu));
    scanf ("%s", DVdFTuNfS8->W9lFDLy38);
    if (*DVdFTuNfS8->W9lFDLy38 != 'e') {
        scanf ("%s %c%d%f%s", DVdFTuNfS8->cGrV3A, &DVdFTuNfS8->VQM18sf, &DVdFTuNfS8->fS0Hzabg, &DVdFTuNfS8->uEtyhVzY, DVdFTuNfS8->shucsC);
        DVdFTuNfS8->HbsOnw0a5 = (942 - 942);
        {
            for (; true;) {
                w3h6uv = DVdFTuNfS8;
                DVdFTuNfS8 = malloc (sizeof (struct   stu));
                scanf ("%s", DVdFTuNfS8->W9lFDLy38);
                if (!('e' != *DVdFTuNfS8->W9lFDLy38))
                    break;
                scanf ("%s %c%d%f%s", DVdFTuNfS8->cGrV3A, &DVdFTuNfS8->VQM18sf, &DVdFTuNfS8->fS0Hzabg, &DVdFTuNfS8->uEtyhVzY, DVdFTuNfS8->shucsC);
                DVdFTuNfS8->HbsOnw0a5 = w3h6uv;
            }
        }
        DVdFTuNfS8 = w3h6uv;
        for (; DVdFTuNfS8; DVdFTuNfS8 = DVdFTuNfS8->HbsOnw0a5)
            printf ("%s %s %c %d %g %s\n", DVdFTuNfS8->W9lFDLy38, DVdFTuNfS8->cGrV3A, DVdFTuNfS8->VQM18sf, DVdFTuNfS8->fS0Hzabg, DVdFTuNfS8->uEtyhVzY, DVdFTuNfS8->shucsC);
    }
}

