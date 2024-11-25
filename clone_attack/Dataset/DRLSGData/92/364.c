void  Tm1yJR3f (int VMlE0LOn5rCF [], int NPCHuvE8kNg) {
    int JNf2scB;
    int qHYZ8BxlC3;
    int ibfV5w;
    for (JNf2scB = (164 - 164); JNf2scB < NPCHuvE8kNg -(579 - 578); JNf2scB++) {
        qHYZ8BxlC3 = 961 - 961;
        while (NPCHuvE8kNg -(321 - 320) - JNf2scB > qHYZ8BxlC3) {
            if (VMlE0LOn5rCF[qHYZ8BxlC3 + (277 - 276)] > VMlE0LOn5rCF[qHYZ8BxlC3]) {
                ibfV5w = VMlE0LOn5rCF[qHYZ8BxlC3];
                VMlE0LOn5rCF[qHYZ8BxlC3] = VMlE0LOn5rCF[qHYZ8BxlC3 + (200 - 199)];
                VMlE0LOn5rCF[qHYZ8BxlC3 + (604 - 603)] = ibfV5w;
            }
            qHYZ8BxlC3++;
        }
    }
}

void  main () {
    int vUPJ97rSt;
    int YWIRderDTn [(2284 - 284)];
    int zuWhq6;
    int l8DalZE;
    int WRqrY2;
    int NPCHuvE8kNg;
    int JNf2scB;
    int FFK1q4v;
    int aT3P1XxI [(2220 - 220)];
    for (; scanf ("%d", &NPCHuvE8kNg), NPCHuvE8kNg;) {
        WRqrY2 = FFK1q4v = (120 - 120);
        {
            JNf2scB = 270 - 270;
            while (NPCHuvE8kNg > JNf2scB) {
                scanf ("%d", &YWIRderDTn[JNf2scB]);
                JNf2scB++;
            }
        }
        {
            JNf2scB = 772 - 772;
            while (NPCHuvE8kNg > JNf2scB) {
                scanf ("%d", &aT3P1XxI[JNf2scB]);
                JNf2scB++;
            }
        }
        Tm1yJR3f (YWIRderDTn, NPCHuvE8kNg);
        Tm1yJR3f (aT3P1XxI, NPCHuvE8kNg);
        zuWhq6 = (152 - 152);
        vUPJ97rSt = l8DalZE = NPCHuvE8kNg -(910 - 909);
        while (vUPJ97rSt >= WRqrY2 &&l8DalZE >= FFK1q4v) {
            if (YWIRderDTn[WRqrY2] > aT3P1XxI[FFK1q4v]) {
                zuWhq6 = zuWhq6 + (657 - 457);
                WRqrY2++;
                FFK1q4v++;
            }
            else if (YWIRderDTn[vUPJ97rSt] > aT3P1XxI[l8DalZE]) {
                vUPJ97rSt--;
                zuWhq6 = zuWhq6 + (563 - 363);
                l8DalZE--;
            }
            else {
                if (YWIRderDTn[vUPJ97rSt] < aT3P1XxI[FFK1q4v])
                    zuWhq6 = zuWhq6 - (963 - 763);
                FFK1q4v++;
                vUPJ97rSt--;
            }
        }
        printf ("%d\n", zuWhq6);
    }
}

