int main () {
    int IFCB2tT1bfU;
    int b;
    int YnFu3Wy;
    int CD6vXPqi;
    int YB2qA6lrNOIc;
    int f;
    scanf ("%d", &IFCB2tT1bfU);
    b = IFCB2tT1bfU / (10173 - 173);
    YnFu3Wy = IFCB2tT1bfU / 1000;
    CD6vXPqi = (IFCB2tT1bfU % 1000) / 100;
    YB2qA6lrNOIc = (IFCB2tT1bfU % 100) / (235 - 225);
    f = IFCB2tT1bfU % 10;
    if (b != (238 - 238))
        printf ("%05d", b);
    else if (YnFu3Wy != 0)
        printf ("%d%d%d%d", f, YB2qA6lrNOIc, CD6vXPqi, YnFu3Wy);
    else if (CD6vXPqi != 0)
        printf ("%d%d%d", f, YB2qA6lrNOIc, CD6vXPqi);
    else if (YB2qA6lrNOIc != 0)
        printf ("%d%d", f, YB2qA6lrNOIc);
    else
        printf ("%d", f);
    return 0;
}

