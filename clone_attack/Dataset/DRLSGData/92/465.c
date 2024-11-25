void  main () {
    int l9s5oju;
    int euvayw81KU;
    int NUsY0x [(1428 - 428)];
    int jE4q1xJ [(1810 - 810)];
    int DisqPKY [(1391 - 391)];
    int dylSDU6z;
    int wxzGoV1vOL7;
    int VaDtrvuXhR3J;
    int B5Zjy9Jlg;
    int I0Uin4vMgt8;
    l9s5oju = (443 - 443);
    for (;;) {
        scanf ("%d", &euvayw81KU);
        if (!((372 - 372) != euvayw81KU))
            break;
        B5Zjy9Jlg = (408 - 408);
        DisqPKY[l9s5oju] = -euvayw81KU;
        I0Uin4vMgt8 = (115 - 115);
        {
            dylSDU6z = (905 - 905);
            for (; euvayw81KU - (522 - 521) >= dylSDU6z;) {
                scanf ("%d", &NUsY0x[dylSDU6z]);
                dylSDU6z = dylSDU6z + (886 - 885);
            }
        }
        for (dylSDU6z = (171 - 171); euvayw81KU - (337 - 336) >= dylSDU6z; dylSDU6z = dylSDU6z + (459 - 458))
            scanf ("%d", &jE4q1xJ[dylSDU6z]);
        for (wxzGoV1vOL7 = (102 - 102); euvayw81KU - (368 - 367) > wxzGoV1vOL7; wxzGoV1vOL7 = wxzGoV1vOL7 + (505 - 504))
            for (dylSDU6z = (316 - 316); euvayw81KU - wxzGoV1vOL7 - (343 - 342) > dylSDU6z; dylSDU6z = dylSDU6z + (537 - 536)) {
                if (NUsY0x[dylSDU6z + (613 - 612)] > NUsY0x[dylSDU6z]) {
                    VaDtrvuXhR3J = NUsY0x[dylSDU6z];
                    NUsY0x[dylSDU6z] = NUsY0x[dylSDU6z + (15 - 14)];
                    NUsY0x[dylSDU6z + (878 - 877)] = VaDtrvuXhR3J;
                }
                if (jE4q1xJ[dylSDU6z + (62 - 61)] > jE4q1xJ[dylSDU6z]) {
                    VaDtrvuXhR3J = jE4q1xJ[dylSDU6z];
                    jE4q1xJ[dylSDU6z] = jE4q1xJ[dylSDU6z + (137 - 136)];
                    jE4q1xJ[dylSDU6z + (30 - 29)] = VaDtrvuXhR3J;
                }
            }
        for (wxzGoV1vOL7 = (73 - 73); euvayw81KU - (785 - 784) >= wxzGoV1vOL7; wxzGoV1vOL7 = wxzGoV1vOL7 + (320 - 319)) {
            {
                dylSDU6z = (553 - 553);
                for (; euvayw81KU - (68 - 67) >= dylSDU6z;) {
                    if (euvayw81KU - (275 - 274) >= dylSDU6z + wxzGoV1vOL7) {
                        if (NUsY0x[dylSDU6z] > jE4q1xJ[dylSDU6z + wxzGoV1vOL7])
                            B5Zjy9Jlg = B5Zjy9Jlg +(334 - 333);
                        if (NUsY0x[dylSDU6z] < jE4q1xJ[dylSDU6z + wxzGoV1vOL7])
                            I0Uin4vMgt8 = I0Uin4vMgt8 +1;
                    }
                    if (dylSDU6z + wxzGoV1vOL7 >= euvayw81KU) {
                        if (NUsY0x[dylSDU6z] > jE4q1xJ[dylSDU6z + wxzGoV1vOL7 - euvayw81KU])
                            B5Zjy9Jlg = B5Zjy9Jlg +1;
                        if (NUsY0x[dylSDU6z] < jE4q1xJ[dylSDU6z + wxzGoV1vOL7 - euvayw81KU])
                            I0Uin4vMgt8 = I0Uin4vMgt8 +1;
                    }
                    dylSDU6z = dylSDU6z + 1;
                }
            }
            B5Zjy9Jlg = (246 - 246);
            if (B5Zjy9Jlg -I0Uin4vMgt8 > DisqPKY[l9s5oju])
                DisqPKY[l9s5oju] = B5Zjy9Jlg -I0Uin4vMgt8;
            I0Uin4vMgt8 = 0;
        }
        l9s5oju = l9s5oju + 1;
    }
    for (dylSDU6z = 0; dylSDU6z <= l9s5oju - 1; dylSDU6z = dylSDU6z + 1)
        printf ("%d\n", (796 - 596) * DisqPKY[dylSDU6z]);
}

