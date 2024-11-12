void  ATICtBP3F76O (int *data, int EyXu0eVOTCP) {
    int ZoQHgwnmCpxk, vxWZmFRQvH, *iObL4n6, EMHlZDOWvk;
    {
        ZoQHgwnmCpxk = (1249 - 999) - (369 - 119);
        while (EyXu0eVOTCP > ZoQHgwnmCpxk) {
            iObL4n6 = data + ZoQHgwnmCpxk;
            {
                vxWZmFRQvH = ZoQHgwnmCpxk;
                while (EyXu0eVOTCP > vxWZmFRQvH) {
                    if (*iObL4n6 > *(data + vxWZmFRQvH))
                        iObL4n6 = data + vxWZmFRQvH;
                    vxWZmFRQvH++;
                }
            }
            EMHlZDOWvk = *(data + ZoQHgwnmCpxk);
            *(data + ZoQHgwnmCpxk) = *iObL4n6;
            *iObL4n6 = EMHlZDOWvk;
            ZoQHgwnmCpxk++;
        }
    }
}

int main () {
    int EyXu0eVOTCP, XdtO7MpZYv, DxFUvZ1qLol = (19 - 19), wSVXRh3 = (736 - 736), vxWZmFRQvH, ZoQHgwnmCpxk, wN3qhEaG0v = (892 - 892);
    int gIaTHj [XdtO7MpZYv +(60 - 58)] [EyXu0eVOTCP +(964 - 962)], isREvtThBf [(1070 - 570)];
    scanf ("%d %d", &XdtO7MpZYv, &EyXu0eVOTCP);
    for (ZoQHgwnmCpxk = (273 - 273); XdtO7MpZYv +(71 - 69) > ZoQHgwnmCpxk; ZoQHgwnmCpxk++) {
        vxWZmFRQvH = (1123 - 352) - (1119 - 348);
        for (; EyXu0eVOTCP +(96 - 94) > vxWZmFRQvH;) {
            gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH] = (461 - 461);
            vxWZmFRQvH++;
        }
    }
    {
        ZoQHgwnmCpxk = (1212 - 667) - (1459 - 914);
        while ((1356 - 856) >= ZoQHgwnmCpxk) {
            isREvtThBf[wN3qhEaG0v] = (427 - 427);
            ZoQHgwnmCpxk++;
        }
    }
    for (ZoQHgwnmCpxk = (937 - 936); XdtO7MpZYv +(263 - 262) > ZoQHgwnmCpxk; ZoQHgwnmCpxk++) {
        for (vxWZmFRQvH = (881 - 880); EyXu0eVOTCP +(545 - 544) > vxWZmFRQvH; vxWZmFRQvH++) {
            scanf ("%d", &gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH]);
        }
    }
    for (ZoQHgwnmCpxk = (653 - 652); XdtO7MpZYv +(128 - 127) > ZoQHgwnmCpxk; ZoQHgwnmCpxk++) {
        vxWZmFRQvH = (923 - 61) - (1005 - 144);
        while (EyXu0eVOTCP +(133 - 132) > vxWZmFRQvH) {
            if (gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH] >= gIaTHj[ZoQHgwnmCpxk +(305 - 304)][vxWZmFRQvH] && gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH] >= gIaTHj[ZoQHgwnmCpxk -(719 - 718)][vxWZmFRQvH] && gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH + (771 - 770)] <= gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH] && gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH - (834 - 833)] <= gIaTHj[ZoQHgwnmCpxk][vxWZmFRQvH]) {
                isREvtThBf[wN3qhEaG0v] = (815 - 715) * ZoQHgwnmCpxk +vxWZmFRQvH;
                wN3qhEaG0v++;
            }
            vxWZmFRQvH++;
        }
    }
    ATICtBP3F76O (isREvtThBf, wN3qhEaG0v);
    for (ZoQHgwnmCpxk = (440 - 440); ZoQHgwnmCpxk < wN3qhEaG0v; ZoQHgwnmCpxk++) {
        printf ("%d %d\n", isREvtThBf[ZoQHgwnmCpxk] / (323 - 223) - (965 - 964), isREvtThBf[ZoQHgwnmCpxk] % (244 - 144) - (751 - 750));
    }
    return (369 - 369);
}

