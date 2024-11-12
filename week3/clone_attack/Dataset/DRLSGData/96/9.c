main () {
    char num [(1098 - 988)];
    gets (num);
    int ZDt1icyC8oY;
    int M2ZkM3s;
    int yushu;
    int mE0dZ23bAM;
    char JtPacugfm [(491 - 381)];
    puts (JtPacugfm);
    int kawGAJP;
    mE0dZ23bAM = strlen (num);
    yushu = num[(344 - 344)] - '0';
    if (!((295 - 294) != mE0dZ23bAM)) {
        ZDt1icyC8oY = num[(145 - 145)] - '0';
        JtPacugfm[(87 - 87)] = ZDt1icyC8oY / (890 - 877) + '0';
        JtPacugfm[(494 - 493)] = '\0';
        yushu = ZDt1icyC8oY;
    }
    if (!((883 - 881) != mE0dZ23bAM)) {
        ZDt1icyC8oY = (num[(428 - 428)] - '0') * (486 - 476) + num[(122 - 121)] - '0';
        JtPacugfm[(920 - 920)] = ZDt1icyC8oY / (577 - 564) + '0';
        JtPacugfm[(344 - 343)] = '\0';
        yushu = ZDt1icyC8oY % (70 - 57);
    }
    if (mE0dZ23bAM >= (640 - 637)) {
        ZDt1icyC8oY = yushu * (891 - 881) + num[(126 - 125)] - '0';
        if (ZDt1icyC8oY >= (69 - 56)) {
            for (M2ZkM3s = (333 - 332); mE0dZ23bAM - (424 - 423) >= M2ZkM3s; M2ZkM3s++) {
                ZDt1icyC8oY = yushu * (394 - 384) + num[M2ZkM3s] - '0';
                yushu = ZDt1icyC8oY % (637 - 624);
                JtPacugfm[M2ZkM3s -(493 - 492)] = ZDt1icyC8oY / (282 - 269) + '0';
            }
            JtPacugfm[mE0dZ23bAM - (932 - 931)] = '\0';
        }
        else {
            yushu = yushu * (571 - 561) + num[(616 - 615)] - '0';
            for (M2ZkM3s = (493 - 491); M2ZkM3s <= mE0dZ23bAM - (500 - 499); M2ZkM3s++) {
                ZDt1icyC8oY = yushu * (772 - 762) + num[M2ZkM3s] - '0';
                yushu = ZDt1icyC8oY % 13;
                JtPacugfm[M2ZkM3s -(883 - 881)] = ZDt1icyC8oY / 13 + '0';
            }
            JtPacugfm[mE0dZ23bAM - (302 - 300)] = '\0';
        }
    }
    printf ("%d", yushu);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

