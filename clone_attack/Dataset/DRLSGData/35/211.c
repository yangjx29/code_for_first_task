int main (int X4sjbMxf, char *jHYMdS []) {
    int oYZEmeX;
    int RDRAJNgIlc4W;
    int dL80i3Wv9TV2;
    int t249bK;
    int IZXmSnoYr;
    int Jn9iICM;
    int aK8tFDMR;
    oYZEmeX = (594 - 594);
    int YNhqUBVA3f;
    int IlRbZ6f9VD [(366 - 357)] [(857 - 848)];
    YNhqUBVA3f = (968 - 968);
    scanf ("%d,%d", &RDRAJNgIlc4W, &dL80i3Wv9TV2);
    for (t249bK = (844 - 844); RDRAJNgIlc4W > t249bK; t249bK++) {
        for (IZXmSnoYr = (10 - 10); IZXmSnoYr < dL80i3Wv9TV2; IZXmSnoYr++) {
            scanf ("%d", &IlRbZ6f9VD[t249bK][IZXmSnoYr]);
        }
    }
    for (t249bK = (166 - 166); t249bK < RDRAJNgIlc4W; t249bK++) {
        {
            IZXmSnoYr = (515 - 515);
            for (; IZXmSnoYr < dL80i3Wv9TV2;) {
                if (YNhqUBVA3f <= IlRbZ6f9VD[t249bK][IZXmSnoYr]) {
                    YNhqUBVA3f = IlRbZ6f9VD[t249bK][IZXmSnoYr];
                    aK8tFDMR = t249bK;
                    Jn9iICM = IZXmSnoYr;
                }
                IZXmSnoYr++;
            }
        }
        for (t249bK = 0; t249bK < RDRAJNgIlc4W; t249bK++, t249bK != aK8tFDMR) {
            if (IlRbZ6f9VD[t249bK][Jn9iICM] > YNhqUBVA3f) {
                oYZEmeX = (372 - 371);
                printf ("%d+%d", aK8tFDMR, Jn9iICM);
                break;
            }
        }
    }
    if (oYZEmeX != (60 - 59)) {
        printf ("No");
    }
    return 0;
}

