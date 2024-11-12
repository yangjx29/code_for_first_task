double  cDgiYMJmp (double  ZJtejBCulV, double  oZhdOp, double  otskVfrx, double  KaMK9kAX1sl, double  JQqEiOvTVK);

int main () {
    double  ZJtejBCulV, oZhdOp, otskVfrx, KaMK9kAX1sl, UrpwnbHOmf, XmY80fKJG;
    scanf ("%lf %lf %lf %lf %lf", &ZJtejBCulV, &oZhdOp, &otskVfrx, &KaMK9kAX1sl, &UrpwnbHOmf);
    {
        if (0) {
            return 0;
        };
    }
    XmY80fKJG = cDgiYMJmp (ZJtejBCulV, oZhdOp, otskVfrx, KaMK9kAX1sl, UrpwnbHOmf *(PI / 360));
    if (XmY80fKJG == -1)
        ;
    else
        printf ("%0.4lf\n", XmY80fKJG);
    return 0;
}

double  cDgiYMJmp (double  ZJtejBCulV, double  oZhdOp, double  otskVfrx, double  KaMK9kAX1sl, double  JQqEiOvTVK) {
    double  R2I7TVE, G1V3fCAD, XmY80fKJG;
    R2I7TVE = 0.5 * (ZJtejBCulV +oZhdOp + otskVfrx + KaMK9kAX1sl);
    G1V3fCAD = (R2I7TVE -ZJtejBCulV) * (R2I7TVE -oZhdOp) * (R2I7TVE -otskVfrx) * (R2I7TVE -KaMK9kAX1sl) - ZJtejBCulV *oZhdOp * otskVfrx * KaMK9kAX1sl *pow (cos (JQqEiOvTVK), 2);
    if (G1V3fCAD >= 0)
        XmY80fKJG = sqrt (G1V3fCAD);
    else
        return -1;
    return XmY80fKJG;
}

