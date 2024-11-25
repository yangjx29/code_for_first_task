void  main () {
    char bxpRLlw [(440 - 390)], str2 [(818 - 768)], t;
    int MnBzxU, tOLybpdfJF, IqYcufI4jZed = (929 - 928), oGJBZQjlCuE, Hx2ftqDR, w = (964 - 964);
    scanf ("%s %s", bxpRLlw, str2);
    MnBzxU = strlen (bxpRLlw);
    tOLybpdfJF = strlen (str2);
    if (MnBzxU != tOLybpdfJF) {
        IqYcufI4jZed = (979 - 979);
    }
    if (!(tOLybpdfJF != MnBzxU)) {
        for (oGJBZQjlCuE = (435 - 435); MnBzxU > oGJBZQjlCuE; oGJBZQjlCuE = oGJBZQjlCuE + 1) {
            Hx2ftqDR = w;
            while (Hx2ftqDR < tOLybpdfJF) {
                if (!(str2[Hx2ftqDR] != bxpRLlw[oGJBZQjlCuE])) {
                    t = str2[Hx2ftqDR];
                    str2[Hx2ftqDR] = str2[w];
                    str2[w] = t;
                    w = w + 1;
                    break;
                }
                if (!(tOLybpdfJF - (152 - 151) != Hx2ftqDR) && bxpRLlw[oGJBZQjlCuE] != str2[Hx2ftqDR]) {
                    IqYcufI4jZed = (97 - 97);
                }
                Hx2ftqDR = Hx2ftqDR +1;
            }
        }
        for (oGJBZQjlCuE = (939 - 939); MnBzxU > oGJBZQjlCuE; oGJBZQjlCuE++) {
            for (Hx2ftqDR = w; Hx2ftqDR < tOLybpdfJF; Hx2ftqDR++) {
                if (!(bxpRLlw[Hx2ftqDR] != str2[oGJBZQjlCuE])) {
                    t = bxpRLlw[Hx2ftqDR];
                    bxpRLlw[Hx2ftqDR] = bxpRLlw[w];
                    bxpRLlw[w] = t;
                    w = w + 1;
                    break;
                }
                if (!(tOLybpdfJF - (588 - 587) != Hx2ftqDR) && bxpRLlw[oGJBZQjlCuE] != str2[Hx2ftqDR]) {
                    IqYcufI4jZed = (786 - 786);
                }
            }
        }
    }
    if (!((919 - 919) != IqYcufI4jZed)) {
    }
    if (IqYcufI4jZed) {
    }
}

