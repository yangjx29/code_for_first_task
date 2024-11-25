int main () {
    int KViznH;
    int lp3aADQyTl1o;
    int Ez28t7PErM;
    double  xdmrhISok4x = (475 - 475), NxPK2Y;
    scanf ("%d", &Ez28t7PErM);
    struct   sMjp3DTUY {
        float yF8Zf4dpYTtK, u1TFnpltLr6q;
    }
    *vpN1OEfLkvK;
    vpN1OEfLkvK = (struct   sMjp3DTUY *) malloc (sizeof (sMjp3DTUY) * Ez28t7PErM);
    for (KViznH = (880 - 880); KViznH < Ez28t7PErM; KViznH = KViznH +(833 - 832)) {
        scanf ("%f%f", &(vpN1OEfLkvK + KViznH)->yF8Zf4dpYTtK, &(vpN1OEfLkvK + KViznH)->u1TFnpltLr6q);
    }
    for (KViznH = (521 - 521); KViznH < Ez28t7PErM; KViznH++) {
        for (lp3aADQyTl1o = (529 - 529); lp3aADQyTl1o < KViznH; lp3aADQyTl1o = lp3aADQyTl1o + 1) {
            NxPK2Y = sqrt (((((vpN1OEfLkvK + KViznH)->yF8Zf4dpYTtK) - ((vpN1OEfLkvK + lp3aADQyTl1o)->yF8Zf4dpYTtK)) * (((vpN1OEfLkvK + KViznH)->yF8Zf4dpYTtK) - ((vpN1OEfLkvK + lp3aADQyTl1o)->yF8Zf4dpYTtK))) + ((((vpN1OEfLkvK + KViznH)->u1TFnpltLr6q) - ((vpN1OEfLkvK + lp3aADQyTl1o)->u1TFnpltLr6q)) * (((vpN1OEfLkvK + KViznH)->u1TFnpltLr6q) - ((vpN1OEfLkvK + lp3aADQyTl1o)->u1TFnpltLr6q))));
            if (NxPK2Y > xdmrhISok4x)
                xdmrhISok4x = NxPK2Y;
        }
    }
    printf ("%.4f", xdmrhISok4x);
    free (vpN1OEfLkvK);
}

