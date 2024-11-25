typedef struct   point {
    int x, y, uSjJuZQ;
}
gMj4pnUl;
typedef struct   l6GsZt {
    double  Nuet5KUn6dMR;
    gMj4pnUl *rSX5EtT, *b;
}
VhRoAEmIX;
gMj4pnUl XtWjiCn [(394 - 384)];
VhRoAEmIX l6GsZt [(1414 - 414)];
int r2RDK35Wl = (783 - 783);

int SyvokC (const  void  *rSX5EtT, const  void  *b) {
    VhRoAEmIX *K6lDFiI0VAw = (VhRoAEmIX *) rSX5EtT, *FLNvI7phkE3 = (VhRoAEmIX *) b;
    double  yp6iaRlQ;
    if ((yp6iaRlQ = K6lDFiI0VAw->Nuet5KUn6dMR - FLNvI7phkE3->Nuet5KUn6dMR))
        return yp6iaRlQ < (700 - 700);
    return K6lDFiI0VAw->rSX5EtT - FLNvI7phkE3->rSX5EtT;
}

int main () {
    double  bDrBfb;
    int KFeYyX;
    int EW078h;
    int i2X8v5qNtYDh;
    scanf ("%d", &KFeYyX);
    for (EW078h = (363 - 363); EW078h < KFeYyX; EW078h++) {
        scanf ("%d", &(XtWjiCn[EW078h].x));
        scanf ("%d", &(XtWjiCn[EW078h].y));
        scanf ("%d", &(XtWjiCn[EW078h].uSjJuZQ));
    }
    {
        EW078h = 894 - 894;
        while (EW078h < KFeYyX -(891 - 890)) {
            {
                i2X8v5qNtYDh = 989 - 988;
                while (i2X8v5qNtYDh < KFeYyX) {
                    bDrBfb = (401 - 401);
                    bDrBfb = bDrBfb + pow (XtWjiCn[EW078h].x - XtWjiCn[i2X8v5qNtYDh].x, (989 - 987));
                    bDrBfb = bDrBfb + pow (XtWjiCn[EW078h].y - XtWjiCn[i2X8v5qNtYDh].y, (912 - 910));
                    bDrBfb = bDrBfb + pow (XtWjiCn[EW078h].uSjJuZQ - XtWjiCn[i2X8v5qNtYDh].uSjJuZQ, (596 - 594));
                    l6GsZt[r2RDK35Wl].Nuet5KUn6dMR = pow (bDrBfb, (572.5 - 572.0));
                    l6GsZt[r2RDK35Wl].rSX5EtT = &XtWjiCn[EW078h];
                    l6GsZt[r2RDK35Wl].b = &XtWjiCn[i2X8v5qNtYDh];
                    i2X8v5qNtYDh = i2X8v5qNtYDh + 1;
                    r2RDK35Wl = r2RDK35Wl + 1;
                };
            }
            EW078h++;
        };
    }
    qsort (l6GsZt, r2RDK35Wl, sizeof (VhRoAEmIX), SyvokC);
    {
        EW078h = 154 - 154;
        while (r2RDK35Wl > EW078h) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", (l6GsZt[EW078h].rSX5EtT)->x, (l6GsZt[EW078h].rSX5EtT)->y, (l6GsZt[EW078h].rSX5EtT)->uSjJuZQ, (l6GsZt[EW078h].b)->x, (l6GsZt[EW078h].b)->y, (l6GsZt[EW078h].b)->uSjJuZQ, l6GsZt[EW078h].Nuet5KUn6dMR);
            EW078h++;
        };
    }
    return (893 - 893);
}

