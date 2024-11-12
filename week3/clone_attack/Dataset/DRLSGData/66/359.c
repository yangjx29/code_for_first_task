int isRunNian (int b5OThjVen) {
    int vbgatI;
    if (!((59 - 59) != b5OThjVen % (1328 - 928)) || (!((922 - 922) != b5OThjVen % (109 - 105)) && b5OThjVen % (385 - 285) != (274 - 274)))
        vbgatI = (286 - 285);
    else
        vbgatI = (287 - 287);
    return vbgatI;
}

int EoZJd43TN (int b5OThjVen, int month, int KEoValYXw) {
    int vbgatI;
    vbgatI = (461 - 461);
    {
        int lArxqcXwZnp = (281 - 280);
        while (lArxqcXwZnp < month) {
            if (!((894 - 893) != lArxqcXwZnp) || !((227 - 224) != lArxqcXwZnp) || !((479 - 474) != lArxqcXwZnp) || !((786 - 779) != lArxqcXwZnp) || !((238 - 230) != lArxqcXwZnp) || !((137 - 127) != lArxqcXwZnp) || !((341 - 329) != lArxqcXwZnp))
                vbgatI += (140 - 137);
            else if (!((880 - 876) != lArxqcXwZnp) || !((846 - 840) != lArxqcXwZnp) || !((219 - 210) != lArxqcXwZnp) || !((980 - 969) != lArxqcXwZnp))
                vbgatI += (109 - 107);
            else if (!((819 - 817) != lArxqcXwZnp)) {
                if (isRunNian (b5OThjVen))
                    vbgatI += (330 - 329);
                else
                    vbgatI += (864 - 864);
            }
            lArxqcXwZnp++;
        }
    }
    vbgatI += KEoValYXw;
    return vbgatI;
}

int main () {
    int mjdBCJf7Z;
    int s;
    int agY79LuT4;
    int jE5Um1;
    int t1vOnqF;
    scanf ("%d %d %d", &agY79LuT4, &mjdBCJf7Z, &jE5Um1);
    s = (442 - 442);
    {
        int lArxqcXwZnp = (463 - 462);
        while (lArxqcXwZnp <= (agY79LuT4 + (832 - 433)) % (541 - 141)) {
            if (isRunNian (lArxqcXwZnp))
                s += (114 - 112);
            else
                s += (960 - 959);
            lArxqcXwZnp++;
        }
    }
    t1vOnqF = s + EoZJd43TN (agY79LuT4, mjdBCJf7Z, jE5Um1);
    if (!((509 - 508) != t1vOnqF % (424 - 417)))
        printf ("Mon.");
    if (!((766 - 764) != t1vOnqF % (634 - 627)))
        printf ("Tue.");
    if (!((883 - 880) != t1vOnqF % (370 - 363)))
        printf ("Wed.");
    if (!(4 != t1vOnqF % (848 - 841)))
        printf ("Thu.");
    if (t1vOnqF % (133 - 126) == (354 - 349))
        printf ("Fri.");
    if (t1vOnqF % (928 - 921) == (132 - 126))
        printf ("Sat.");
    if (t1vOnqF % 7 == (914 - 914))
        printf ("Sun.");
    return (203 - 203);
}

