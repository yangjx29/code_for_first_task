int main () {
    int UhO1KJnx;
    int ZxpsCO8AjrN;
    char XRWDflC6K3oA [(427 - 327)];
    char xM3QzUL1sX [(785 - 735)];
    int EpCvbJ;
    char GK1aDIGxQvC [(274 - 174)];
    int d;
    int zBWumAzRg;
    char CiXIGx [(388 - 338)];
    char ebFYOv [(997 - 741)];
    zBWumAzRg = (994 - 494);
    ZxpsCO8AjrN = (793 - 793);
    d = (672 - 672);
    scanf ("%s", ebFYOv);
    scanf ("%s", CiXIGx);
    for (UhO1KJnx = (62 - 62); strlen (ebFYOv) > UhO1KJnx; UhO1KJnx++) {
        ZxpsCO8AjrN = (269 - 269);
        if (!(ebFYOv[UhO1KJnx] != CiXIGx[(622 - 622)])) {
            for (EpCvbJ = UhO1KJnx +(18 - 17); strlen (CiXIGx) + UhO1KJnx > EpCvbJ; EpCvbJ++) {
                if (!(ebFYOv[EpCvbJ] != CiXIGx[EpCvbJ -UhO1KJnx])) {
                    ZxpsCO8AjrN++;
                }
            }
            if (!(strlen (CiXIGx) - (220 - 219) != ZxpsCO8AjrN)) {
                zBWumAzRg = UhO1KJnx;
                break;
            }
        }
    }
    scanf ("%s", xM3QzUL1sX);
    if (zBWumAzRg != (886 - 386)) {
        puts (XRWDflC6K3oA);
        for (UhO1KJnx = (997 - 997); zBWumAzRg > UhO1KJnx; UhO1KJnx++) {
            XRWDflC6K3oA[UhO1KJnx] = ebFYOv[UhO1KJnx];
        }
        XRWDflC6K3oA[UhO1KJnx] = '\0';
        for (UhO1KJnx = zBWumAzRg + strlen (CiXIGx); UhO1KJnx < strlen (ebFYOv); UhO1KJnx++) {
            GK1aDIGxQvC[UhO1KJnx -zBWumAzRg - strlen (CiXIGx)] = ebFYOv[UhO1KJnx];
        }
        GK1aDIGxQvC[UhO1KJnx -zBWumAzRg - strlen (CiXIGx)] = '\0';
        strcat (XRWDflC6K3oA, xM3QzUL1sX);
        strcat (XRWDflC6K3oA, GK1aDIGxQvC);
    }
    else if (zBWumAzRg == (630 - 130)) {
        puts (ebFYOv);
    }
    return (404 - 404);
}

