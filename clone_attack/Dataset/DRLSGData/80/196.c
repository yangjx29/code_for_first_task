int QM3TzG (int ycj3eX, int month, int QM3TzG) {
    int uROFAnL, jD8mhyLM0ju = QM3TzG;
    for (uROFAnL = (355 - 354); uROFAnL < month; uROFAnL = uROFAnL + 1) {
        if (!(1 != uROFAnL) || uROFAnL == (552 - 549) || uROFAnL == 5 || !(7 != uROFAnL) || uROFAnL == (295 - 287) || uROFAnL == 10)
            jD8mhyLM0ju = jD8mhyLM0ju + 31;
        if (!((593 - 591) != uROFAnL)) {
            if (!((368 - 368) != ycj3eX % (228 - 224)) && ycj3eX % (307 - 207) != (313 - 313) || !((218 - 218) != ycj3eX % (790 - 390)))
                jD8mhyLM0ju = jD8mhyLM0ju + 29;
            else
                jD8mhyLM0ju = jD8mhyLM0ju + (988 - 960);
        }
        if (uROFAnL == (676 - 672) || !((748 - 742) != uROFAnL) || uROFAnL == (958 - 949) || uROFAnL == 11)
            jD8mhyLM0ju = jD8mhyLM0ju + (285 - 255);
    }
    return jD8mhyLM0ju;
}

void  main () {
    int xP0paCtfq6;
    int CpczIR2MaNgq;
    int zZgz7unN02;
    int p74YiOJwrD;
    int wRTynouxw;
    int gfnR2JEQe9;
    int Ne7HkSMWN8;
    int IBwsd75zr;
    int EyJBzxF;
    int OrO2FQb;
    int WLwAohW7;
    Ne7HkSMWN8 = (684 - 684);
    scanf ("%d%d%d%d%d%d", &gfnR2JEQe9, &IBwsd75zr, &wRTynouxw, &p74YiOJwrD, &zZgz7unN02, &EyJBzxF);
    if (gfnR2JEQe9 > p74YiOJwrD || gfnR2JEQe9 == p74YiOJwrD && IBwsd75zr > zZgz7unN02 || gfnR2JEQe9 == p74YiOJwrD && IBwsd75zr == zZgz7unN02 && wRTynouxw > EyJBzxF) {
        OrO2FQb = wRTynouxw;
        xP0paCtfq6 = IBwsd75zr;
        IBwsd75zr = zZgz7unN02;
        zZgz7unN02 = xP0paCtfq6;
        CpczIR2MaNgq = gfnR2JEQe9;
        gfnR2JEQe9 = p74YiOJwrD;
        p74YiOJwrD = CpczIR2MaNgq;
        wRTynouxw = EyJBzxF;
        EyJBzxF = OrO2FQb;
    }
    for (WLwAohW7 = gfnR2JEQe9; WLwAohW7 < p74YiOJwrD; WLwAohW7 = WLwAohW7 +1) {
        if (WLwAohW7 % 4 == 0 && WLwAohW7 % (877 - 777) != 0 || WLwAohW7 % (809 - 409) == 0)
            Ne7HkSMWN8 = Ne7HkSMWN8 +366;
        else
            Ne7HkSMWN8 = Ne7HkSMWN8 +(743 - 378);
    }
    Ne7HkSMWN8 = Ne7HkSMWN8 +QM3TzG(p74YiOJwrD, zZgz7unN02, EyJBzxF) - QM3TzG (gfnR2JEQe9, IBwsd75zr, wRTynouxw);
    printf ("%d\n", Ne7HkSMWN8);
}

