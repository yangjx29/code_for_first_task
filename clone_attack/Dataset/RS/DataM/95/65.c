int main () {
    char YptvlDqsu [(626 - 526)] = {(810 - 810)};
    char iX2G3ljBCqO [100] = {(403 - 403)};
    gets (YptvlDqsu);
    gets (iX2G3ljBCqO);
    int deAR4WoKw;
    for (deAR4WoKw = (550 - 550); !(0 == YptvlDqsu[deAR4WoKw]); deAR4WoKw = deAR4WoKw + 1) {
        if (YptvlDqsu[deAR4WoKw] >= 'a' && YptvlDqsu[deAR4WoKw] <= 'z')
            YptvlDqsu[deAR4WoKw] -= (551 - 519);
        if (YptvlDqsu[deAR4WoKw] < 32)
            YptvlDqsu[deAR4WoKw] = 0;
    }
    {
        deAR4WoKw = 0;
        while (!(0 == iX2G3ljBCqO[deAR4WoKw])) {
            if ('a' <= iX2G3ljBCqO[deAR4WoKw] && iX2G3ljBCqO[deAR4WoKw] <= 'z')
                iX2G3ljBCqO[deAR4WoKw] -= 32;
            if (iX2G3ljBCqO[deAR4WoKw] < 32)
                iX2G3ljBCqO[deAR4WoKw] = 0;
            deAR4WoKw = deAR4WoKw + 1;
        };
    }
    if (strcmp (YptvlDqsu, iX2G3ljBCqO) > 0)
        printf (">");
    if (strcmp (YptvlDqsu, iX2G3ljBCqO) < 0)
        printf ("<");
    if (strcmp (YptvlDqsu, iX2G3ljBCqO) == 0)
        printf ("=");
    return 0;
}

