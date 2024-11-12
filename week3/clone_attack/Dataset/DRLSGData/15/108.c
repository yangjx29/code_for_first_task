void  main () {
    int h42wm5unyov;
    int thrdsY;
    int XnHOLTKX;
    int KYyvZdwMh3c5 [100] [100];
    int dzH5GPF2;
    int YSlzjByf9;
    int Uf82ujyNWG;
    int dj8nFZES;
    int rAln65;
    rAln65 = 0;
    thrdsY = 0;
    dj8nFZES = 0;
    scanf ("%d", &Uf82ujyNWG);
    for (YSlzjByf9 = 0; Uf82ujyNWG > YSlzjByf9; YSlzjByf9 = YSlzjByf9 +1) {
        dzH5GPF2 = 0;
        for (; dzH5GPF2 < Uf82ujyNWG;) {
            scanf ("%d", &KYyvZdwMh3c5[YSlzjByf9][dzH5GPF2]);
            dzH5GPF2 = dzH5GPF2 + 1;
        }
    }
    h42wm5unyov = 0;
    {
        YSlzjByf9 = 0;
        for (; Uf82ujyNWG > YSlzjByf9;) {
            {
                dzH5GPF2 = 0;
                for (; dzH5GPF2 < Uf82ujyNWG;) {
                    if (!(0 != KYyvZdwMh3c5[YSlzjByf9][dzH5GPF2])) {
                        rAln65 = YSlzjByf9;
                        h42wm5unyov = dzH5GPF2;
                        break;
                    }
                    dzH5GPF2 = dzH5GPF2 + 1;
                }
            }
            if ((!(0 != KYyvZdwMh3c5[YSlzjByf9][dzH5GPF2])) && (Uf82ujyNWG > dzH5GPF2))
                break;
            YSlzjByf9 = YSlzjByf9 +1;
        }
    }
    {
        YSlzjByf9 = rAln65;
        while (YSlzjByf9 < Uf82ujyNWG) {
            if (KYyvZdwMh3c5[YSlzjByf9][h42wm5unyov] != 0) {
                thrdsY = YSlzjByf9 -1;
                break;
            }
            else
                continue;
            YSlzjByf9 = YSlzjByf9 +1;
        }
    }
    for (dzH5GPF2 = h42wm5unyov; Uf82ujyNWG > dzH5GPF2; dzH5GPF2 = dzH5GPF2 + 1) {
        if (KYyvZdwMh3c5[thrdsY][dzH5GPF2] != 0) {
            dj8nFZES = dzH5GPF2 - 1;
            break;
        }
        else
            continue;
    }
    XnHOLTKX = (thrdsY - rAln65 - 1) * (dj8nFZES - h42wm5unyov - 1);
    printf ("%d\n", XnHOLTKX);
}

