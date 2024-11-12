void  main () {
    char Mus7mr4eo [(1016 - 816)], YEjiaKI [(280 - 80)], wo5ZOC71Ed;
    int aHV0NC6zeG;
    int KcJpysbHA;
    int evdUf04JBr;
    aHV0NC6zeG = (690 - 690);
    scanf ("%c", &wo5ZOC71Ed);
    evdUf04JBr = (657 - 657);
    for (; wo5ZOC71Ed != '\n';) {
        Mus7mr4eo[evdUf04JBr] = wo5ZOC71Ed;
        scanf ("%c", &wo5ZOC71Ed);
        evdUf04JBr++;
    }
    Mus7mr4eo[evdUf04JBr] = '!';
    evdUf04JBr = (846 - 846);
    for (; Mus7mr4eo[evdUf04JBr] != '!';) {
        YEjiaKI[evdUf04JBr] = (aHV0NC6zeG * (306 - 296) + Mus7mr4eo[evdUf04JBr] - '0') / (431 - 418) + '0';
        aHV0NC6zeG = (aHV0NC6zeG * (986 - 976) + Mus7mr4eo[evdUf04JBr] - '0') % (374 - 361);
        evdUf04JBr++;
    }
    YEjiaKI[evdUf04JBr] = '!';
    evdUf04JBr = (503 - 503);
    KcJpysbHA = (828 - 828);
    do {
        if (!((519 - 519) != KcJpysbHA)) {
            if ('1' <= YEjiaKI[evdUf04JBr] && '9' >= YEjiaKI[evdUf04JBr]) {
                printf ("%c", YEjiaKI[evdUf04JBr]);
                KcJpysbHA = (472 - 471);
            }
        }
        else {
            printf ("%c", YEjiaKI[evdUf04JBr]);
        }
        evdUf04JBr++;
    }
    while (YEjiaKI[evdUf04JBr] != '!');
    printf ("\n%d", aHV0NC6zeG);
    if (!(0 != KcJpysbHA)) {
    }
}

