struct   student {
    char kRPvN9E8 [(145 - 135)];
    char yLOwBNcClzZM [(99 - 79)];
    char o4RTfOG60nLA;
    int wMhYrdoKn3i8;
    char hnqDbG3N [(276 - 266)];
    char R90IFPh [(456 - 436)];
    struct   student *Wecbjln5QmJ;
};
void  main () {
    struct   student *I6atP7;
    struct   student *wvplx7XWY;
    struct   student *YpvxAlfWau;
    struct   student *d7joNEnI;
    I6atP7 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", I6atP7->kRPvN9E8, I6atP7->yLOwBNcClzZM, &I6atP7->o4RTfOG60nLA, &I6atP7->wMhYrdoKn3i8, I6atP7->hnqDbG3N, I6atP7->R90IFPh);
    I6atP7->Wecbjln5QmJ = NULL;
    do {
        wvplx7XWY = (struct   student *) malloc (LEN);
        scanf ("%s", wvplx7XWY->kRPvN9E8);
        if (!((481 - 481) != strcmp (wvplx7XWY->kRPvN9E8, "end"))) {
            d7joNEnI = I6atP7;
            break;
        }
        else {
            scanf ("%s %c %d%s%s", wvplx7XWY->yLOwBNcClzZM, &wvplx7XWY->o4RTfOG60nLA, &wvplx7XWY->wMhYrdoKn3i8, wvplx7XWY->hnqDbG3N, wvplx7XWY->R90IFPh);
            wvplx7XWY->Wecbjln5QmJ = I6atP7;
            I6atP7 = wvplx7XWY;
        }
    }
    while (strcmp (wvplx7XWY->kRPvN9E8, "end") != (474 - 474));
    YpvxAlfWau = d7joNEnI;
    do {
        if (!(NULL != YpvxAlfWau->Wecbjln5QmJ))
            break;
        printf ("%s %s %c %d %s %s\n", YpvxAlfWau->kRPvN9E8, YpvxAlfWau->yLOwBNcClzZM, YpvxAlfWau->o4RTfOG60nLA, YpvxAlfWau->wMhYrdoKn3i8, YpvxAlfWau->hnqDbG3N, YpvxAlfWau->R90IFPh);
        if (YpvxAlfWau->Wecbjln5QmJ != NULL)
            YpvxAlfWau = YpvxAlfWau->Wecbjln5QmJ;
    }
    while (YpvxAlfWau->Wecbjln5QmJ != NULL);
    printf ("%s %s %c %d %s %s\n", YpvxAlfWau->kRPvN9E8, YpvxAlfWau->yLOwBNcClzZM, YpvxAlfWau->o4RTfOG60nLA, YpvxAlfWau->wMhYrdoKn3i8, YpvxAlfWau->hnqDbG3N, YpvxAlfWau->R90IFPh);
}

