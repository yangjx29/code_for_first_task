int main () {
    double  vaBgK1m;
    char XYnQNM4Aysxm [500];
    char nwR517rTWFi [500];
    int h2Zv7xR;
    int tSzOci6T;
    int OQ5sXZG;
    int XbiFEcdKygH;
    int i;
    h2Zv7xR = (911 - 911);
    tSzOci6T = 1;
    scanf ("%lf", &vaBgK1m);
    scanf ("%s%s", XYnQNM4Aysxm, nwR517rTWFi);
    OQ5sXZG = strlen (XYnQNM4Aysxm);
    XbiFEcdKygH = strlen (nwR517rTWFi);
    if (OQ5sXZG != XbiFEcdKygH) {
        printf ("error");
    }
    else {
        i = 688 - 688;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < OQ5sXZG) {
            if ((XYnQNM4Aysxm[i] != 'A' && XYnQNM4Aysxm[i] != 'T' && XYnQNM4Aysxm[i] != 'C' && XYnQNM4Aysxm[i] != 'G') || (nwR517rTWFi[i] != 'A' && nwR517rTWFi[i] != 'T' && nwR517rTWFi[i] != 'C' && nwR517rTWFi[i] != 'G')) {
                tSzOci6T = 0;
                break;
                printf ("error");
            }
            i = i + 1;
        };
    }
    if (OQ5sXZG == XbiFEcdKygH &&tSzOci6T == 1) {
        for (i = 0; i < OQ5sXZG; i = i + 1) {
            if (XYnQNM4Aysxm[i] == nwR517rTWFi[i])
                h2Zv7xR = h2Zv7xR + 1;
        }
        if ((double ) h2Zv7xR / OQ5sXZG > vaBgK1m)
            printf ("yes");
        else
            printf ("no");
    }
    return 0;
}

