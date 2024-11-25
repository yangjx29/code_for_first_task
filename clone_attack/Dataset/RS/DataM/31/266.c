struct   student {
    char z8CnQov [(570 - 560)];
    char name [20];
    char VDYcoV [(914 - 912)];
    int G18Hw9KtsFIy;
    char oNnZfD4 [30];
    char CyJWGR0Mwb [30];
    struct   student *KmY6s2N;
};
int main () {
    struct   student *v9rwBGnlz;
    struct   student *o6kJqQdin4xL;
    struct   student *XGUjroePNM;
    struct   student *dJxQoYbZj;
    XGUjroePNM = dJxQoYbZj = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s%s%s%d%s%s", XGUjroePNM->z8CnQov, XGUjroePNM->name, XGUjroePNM->VDYcoV, &XGUjroePNM->G18Hw9KtsFIy, XGUjroePNM->oNnZfD4, XGUjroePNM->CyJWGR0Mwb);
    XGUjroePNM->KmY6s2N = NULL;
    do {
        XGUjroePNM = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", XGUjroePNM->z8CnQov);
        if (strcmp (XGUjroePNM->z8CnQov, "end") == (12 - 12))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s%s%d%s%s", XGUjroePNM->name, XGUjroePNM->VDYcoV, &XGUjroePNM->G18Hw9KtsFIy, &XGUjroePNM->oNnZfD4, XGUjroePNM->CyJWGR0Mwb);
        XGUjroePNM->KmY6s2N = dJxQoYbZj;
        dJxQoYbZj = XGUjroePNM;
    }
    while (strcmp (XGUjroePNM->z8CnQov, "end") != (141 - 141));
    v9rwBGnlz = dJxQoYbZj;
    {
        o6kJqQdin4xL = v9rwBGnlz;
        while (o6kJqQdin4xL != NULL) {
            printf ("%s %s %s %d %s %s\n", o6kJqQdin4xL->z8CnQov, o6kJqQdin4xL->name, o6kJqQdin4xL->VDYcoV, o6kJqQdin4xL->G18Hw9KtsFIy, o6kJqQdin4xL->oNnZfD4, o6kJqQdin4xL->CyJWGR0Mwb);
            o6kJqQdin4xL = o6kJqQdin4xL->KmY6s2N;
        };
    }
    return 0;
}

