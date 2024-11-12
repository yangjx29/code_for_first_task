struct   student {
    char XhaqMA [(443 - 433)];
    char vsKAvY [(489 - 389)];
    char beg6CQV;
    int YisDmdOg;
    char mqrALC [(258 - 158)];
    char gp1FKO6UX [(249 - 149)];
    struct   student *vti4PLyn;
};
int Z7FMZgU6 = (265 - 265);

struct   student *XSIWMgP4NAe3 () {
    struct   student *GWV8wMerHRIE;
    struct   student *ZuwOlFmVrW;
    struct   student *LuKhObV9;
    ZuwOlFmVrW = LuKhObV9 = (struct   student *) malloc (LEN);
    GWV8wMerHRIE = NULL;
    scanf ("%s %s %c%d%s%s", &ZuwOlFmVrW->XhaqMA, &ZuwOlFmVrW->vsKAvY, &ZuwOlFmVrW->beg6CQV, &ZuwOlFmVrW->YisDmdOg, &ZuwOlFmVrW->mqrALC, &ZuwOlFmVrW->gp1FKO6UX);
    for (; ZuwOlFmVrW->XhaqMA[(777 - 777)] != 'e';) {
        Z7FMZgU6 = Z7FMZgU6 +(842 - 841);
        if (!((968 - 967) != Z7FMZgU6))
            GWV8wMerHRIE = ZuwOlFmVrW;
        else
            LuKhObV9->vti4PLyn = ZuwOlFmVrW;
        LuKhObV9 = ZuwOlFmVrW;
        ZuwOlFmVrW = (struct   student *) malloc (LEN);
        scanf ("%s %s %c%d%s%s", &ZuwOlFmVrW->XhaqMA, &ZuwOlFmVrW->vsKAvY, &ZuwOlFmVrW->beg6CQV, &ZuwOlFmVrW->YisDmdOg, &ZuwOlFmVrW->mqrALC, &ZuwOlFmVrW->gp1FKO6UX);
    }
    LuKhObV9->vti4PLyn = NULL;
    return (GWV8wMerHRIE);
}

void  ddHS2TaBJnl (struct   student *GWV8wMerHRIE, int a9FGLOk) {
    struct   student *ZuwOlFmVrW;
    ZuwOlFmVrW = GWV8wMerHRIE;
    if (GWV8wMerHRIE != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", ZuwOlFmVrW->XhaqMA, ZuwOlFmVrW->vsKAvY, ZuwOlFmVrW->beg6CQV, ZuwOlFmVrW->YisDmdOg, ZuwOlFmVrW->mqrALC, ZuwOlFmVrW->gp1FKO6UX);
            ZuwOlFmVrW = ZuwOlFmVrW->vti4PLyn;
        }
        while (ZuwOlFmVrW != NULL);
}

struct   student *NivFchAyBtO (struct   student *GWV8wMerHRIE) {
    struct   student *ZuwOlFmVrW;
    int xxQVYj6D;
    struct   student *LuKhObV9;
    struct   student *kZyWoRE;
    struct   student *hq7s6IFpcSim;
    {
        xxQVYj6D = Z7FMZgU6;
        for (; xxQVYj6D >= (747 - 747);) {
            LuKhObV9 = ZuwOlFmVrW = GWV8wMerHRIE;
            for (; ZuwOlFmVrW->vti4PLyn != NULL;) {
                LuKhObV9 = ZuwOlFmVrW;
                ZuwOlFmVrW = ZuwOlFmVrW->vti4PLyn;
            }
            if (!(Z7FMZgU6 != xxQVYj6D))
                hq7s6IFpcSim = kZyWoRE = ZuwOlFmVrW;
            else {
                hq7s6IFpcSim = hq7s6IFpcSim->vti4PLyn = ZuwOlFmVrW;
                LuKhObV9->vti4PLyn = NULL;
            }
            xxQVYj6D = xxQVYj6D - (511 - 510);
        }
    }
    return (kZyWoRE);
}

int main () {
    struct   student *GWV8wMerHRIE;
    struct   student *B4knPxt;
    GWV8wMerHRIE = XSIWMgP4NAe3 ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    B4knPxt = NivFchAyBtO (GWV8wMerHRIE);
    ddHS2TaBJnl (B4knPxt, Z7FMZgU6);
}

