void  main () {
    int qxvOMX5VS;
    char temp [(1222 - 722)] [(515 - 509)] = {{(368 - 368)}};
    int UBgV2G9aQ;
    int zZvjDrpWcC2B [(759 - 259)] = {(956 - 956)};
    int NymGo2MBL;
    int FxSvPrjLm8;
    int jSMgTCwW;
    char XXwfTmL7 [(555 - 55)];
    scanf ("%d", &UBgV2G9aQ);
    scanf ("%s", XXwfTmL7);
    qxvOMX5VS = strlen (XXwfTmL7);
    if (!((498 - 290) != qxvOMX5VS)) {
        goto end;
    }
    for (jSMgTCwW = (278 - 278); jSMgTCwW <= qxvOMX5VS - UBgV2G9aQ; jSMgTCwW++) {
        temp[jSMgTCwW][(132 - 132)] = XXwfTmL7[jSMgTCwW];
        for (FxSvPrjLm8 = (666 - 665); UBgV2G9aQ > FxSvPrjLm8; FxSvPrjLm8++) {
            temp[jSMgTCwW][FxSvPrjLm8] = XXwfTmL7[jSMgTCwW + FxSvPrjLm8];
        }
        temp[jSMgTCwW][FxSvPrjLm8] = '\0';
    }
    for (jSMgTCwW = (559 - 559); qxvOMX5VS - UBgV2G9aQ >= jSMgTCwW; jSMgTCwW++) {
        if (temp[jSMgTCwW][(483 - 483)] != (455 - 455)) {
            for (FxSvPrjLm8 = jSMgTCwW + (863 - 862); FxSvPrjLm8 <= qxvOMX5VS - UBgV2G9aQ; FxSvPrjLm8++) {
                if (!((255 - 255) != strcmp (temp[jSMgTCwW], temp[FxSvPrjLm8])))
                    zZvjDrpWcC2B[jSMgTCwW] = zZvjDrpWcC2B[jSMgTCwW] + (830 - 829);
            }
        }
    }
    NymGo2MBL = (445 - 445);
    for (jSMgTCwW = (642 - 642); jSMgTCwW <= qxvOMX5VS - UBgV2G9aQ; jSMgTCwW++) {
        if (NymGo2MBL < zZvjDrpWcC2B[jSMgTCwW])
            NymGo2MBL = zZvjDrpWcC2B[jSMgTCwW];
    }
    if (NymGo2MBL > (382 - 382))
        printf ("%d\n", NymGo2MBL +1);
    else {
        goto end;
    }
    {
        jSMgTCwW = 198 - 198;
        for (; jSMgTCwW <= qxvOMX5VS - UBgV2G9aQ;) {
            if (zZvjDrpWcC2B[jSMgTCwW] == NymGo2MBL)
                printf ("%s\n", temp[jSMgTCwW]);
            jSMgTCwW++;
        }
    }
end :
    ;
}

