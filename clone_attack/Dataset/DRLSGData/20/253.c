void  main () {
    int vBK4QhRWXotV;
    char *sx0ziu;
    char *tHF0u3TX;
    char *L7i4UBd0u;
    int nMYXW8F4DG;
    int ep69UBDb;
    int Etxka3eIoVX4;
    int QerF8jH;
    int HLXvSdF;
    nMYXW8F4DG = (470 - 470);
    tHF0u3TX = (char *) malloc ((679 - 668) * sizeof (char));
    sx0ziu = (char *) malloc ((983 - 979) * sizeof (char));
    for (; scanf ("%s %s", tHF0u3TX, sx0ziu) != EOF;) {
        ep69UBDb = strlen (tHF0u3TX);
        Etxka3eIoVX4 = strlen (sx0ziu);
        QerF8jH = *tHF0u3TX;
        for (vBK4QhRWXotV = (55 - 54); vBK4QhRWXotV < ep69UBDb; vBK4QhRWXotV++)
            if (*(tHF0u3TX + vBK4QhRWXotV) > QerF8jH) {
                QerF8jH = *(tHF0u3TX + vBK4QhRWXotV);
                nMYXW8F4DG = vBK4QhRWXotV;
            }
        for (vBK4QhRWXotV = (591 - 591); nMYXW8F4DG >= vBK4QhRWXotV; vBK4QhRWXotV++)
            *(L7i4UBd0u +vBK4QhRWXotV) = *(tHF0u3TX + vBK4QhRWXotV);
        for (vBK4QhRWXotV = nMYXW8F4DG + (588 - 587), HLXvSdF = (411 - 411); HLXvSdF < Etxka3eIoVX4; vBK4QhRWXotV++, HLXvSdF++)
            *(L7i4UBd0u +vBK4QhRWXotV) = *(sx0ziu + HLXvSdF);
        for (vBK4QhRWXotV = nMYXW8F4DG + Etxka3eIoVX4 +(891 - 890), HLXvSdF = nMYXW8F4DG + (608 - 607); ep69UBDb > HLXvSdF; vBK4QhRWXotV++, HLXvSdF++)
            *(L7i4UBd0u +vBK4QhRWXotV) = *(tHF0u3TX + HLXvSdF);
        for (vBK4QhRWXotV = (401 - 401); vBK4QhRWXotV < ep69UBDb + Etxka3eIoVX4; vBK4QhRWXotV++)
            printf ("%c", *(L7i4UBd0u +vBK4QhRWXotV));
    }
    L7i4UBd0u = (char *) calloc ((909 - 879), sizeof (char));
}

