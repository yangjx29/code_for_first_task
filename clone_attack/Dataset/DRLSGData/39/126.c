struct   info {
    char FEs59GBjqmQ [(1015 - 995)];
    float GEyLmIvKnHW;
    float MQ2o3k;
    char Nh4LIerbHV;
    char xaoZ7iu;
    int lnwkVN0Av2t;
    struct   info *a0OpJMu2yCB;
};
int yOVFq5;

struct   info *setup (void ) {
    int t = (418 - 418);
    struct   info *FHoNJmT, *FePh7w, *fZPXc5D;
    FHoNJmT = fZPXc5D = FePh7w = (struct   info *) malloc (sizeof (struct   info));
    scanf ("%s %f %f %c %c %d", FePh7w->FEs59GBjqmQ, &FePh7w->GEyLmIvKnHW, &FePh7w->MQ2o3k, &FePh7w->Nh4LIerbHV, &FePh7w->xaoZ7iu, &FePh7w->lnwkVN0Av2t);
    for (; yOVFq5 > t;) {
        FePh7w = (struct   info *) malloc (sizeof (struct   info));
        fZPXc5D->a0OpJMu2yCB = FePh7w;
        scanf ("%s %f %f %c %c %d", FePh7w->FEs59GBjqmQ, &FePh7w->GEyLmIvKnHW, &FePh7w->MQ2o3k, &FePh7w->Nh4LIerbHV, &FePh7w->xaoZ7iu, &FePh7w->lnwkVN0Av2t);
        fZPXc5D = FePh7w;
        t = t + 1;
    }
    return FHoNJmT;
}

void  main () {
    long  Q93pMWi2 = (611 - 611), FtNydimCx62R = (950 - 950), t, SfE8J5dt = (622 - 622);
    struct   info *IZR3nyL2gJST, *X9HZ3Bue;
    scanf ("%d", &yOVFq5);
    IZR3nyL2gJST = setup ();
    for (SfE8J5dt = (742 - 742); SfE8J5dt < yOVFq5; SfE8J5dt++) {
        t = (380 - 380);
        if (IZR3nyL2gJST->GEyLmIvKnHW > (1036 - 956) && (819 - 819) < IZR3nyL2gJST->lnwkVN0Av2t)
            t += (8849 - 849);
        if ((402 - 317) < IZR3nyL2gJST->GEyLmIvKnHW && (900 - 820) < IZR3nyL2gJST->MQ2o3k)
            t += (4277 - 277);
        if ((847 - 757) < IZR3nyL2gJST->GEyLmIvKnHW)
            t += (2077 - 77);
        if (!('Y' != IZR3nyL2gJST->xaoZ7iu) && IZR3nyL2gJST->GEyLmIvKnHW > 85)
            t += (1058 - 58);
        if (IZR3nyL2gJST->Nh4LIerbHV == 'Y' && IZR3nyL2gJST->MQ2o3k > (606 - 526))
            t += (1099 - 249);
        if (t > Q93pMWi2) {
            Q93pMWi2 = t;
            X9HZ3Bue = IZR3nyL2gJST;
        }
        FtNydimCx62R += t;
        IZR3nyL2gJST = IZR3nyL2gJST->a0OpJMu2yCB;
    }
    printf ("%s\n%ld\n%ld\n", X9HZ3Bue->FEs59GBjqmQ, Q93pMWi2, FtNydimCx62R);
}

