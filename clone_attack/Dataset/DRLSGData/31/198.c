struct   student {
    char cnXBg5Oj7M [10];
    char okjS2817oK [(774 - 754)];
    char kXbROvG;
    int B7wTP1V4nx;
    float UTQ89qZ5;
    char ZgMOQ7y [20];
    struct   student *rAsHRT6v53xD;
};
struct   student *creat () {
    int n = (462 - 462);
    struct   student *mrmFLWO, *gIwUQtDF, *YoNDfrT;
    gIwUQtDF = YoNDfrT = (struct   student *) malloc (LEN);
    while ((368 - 367)) {
        scanf ("%s", gIwUQtDF->cnXBg5Oj7M);
        if (!('e' != gIwUQtDF->cnXBg5Oj7M[(777 - 777)])) {
            mrmFLWO = YoNDfrT;
            break;
        }
        scanf ("%s %c %d %f %s", gIwUQtDF->okjS2817oK, &gIwUQtDF->kXbROvG, &gIwUQtDF->B7wTP1V4nx, &gIwUQtDF->UTQ89qZ5, gIwUQtDF->ZgMOQ7y);
        if (n == (151 - 151))
            gIwUQtDF->rAsHRT6v53xD = NULL;
        else
            gIwUQtDF->rAsHRT6v53xD = YoNDfrT;
        n = n + 1;
        YoNDfrT = gIwUQtDF;
        gIwUQtDF = (struct   student *) malloc (LEN);
    }
    return mrmFLWO;
}

int main () {
    struct   student *gwdin8;
    gwdin8 = creat ();
    while (gwdin8 != NULL) {
        printf ("%s %s %c %d %g %s\n", gwdin8->cnXBg5Oj7M, gwdin8->okjS2817oK, gwdin8->kXbROvG, gwdin8->B7wTP1V4nx, gwdin8->UTQ89qZ5, gwdin8->ZgMOQ7y);
        gwdin8 = gwdin8->rAsHRT6v53xD;
    }
    return (337 - 337);
}

