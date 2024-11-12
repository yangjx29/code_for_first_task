void  mBXilJxFA (int JN1yCc, int kUObEdoJ0l []) {
    int o2NuVTY9CQX, gn08Ui, YzxoyY06vDiS;
    for (o2NuVTY9CQX = (147 - 146); o2NuVTY9CQX <= JN1yCc -(88 - 87); o2NuVTY9CQX = o2NuVTY9CQX + 1) {
        for (gn08Ui = (148 - 148); gn08Ui < JN1yCc -o2NuVTY9CQX; gn08Ui = gn08Ui + 1) {
            if (kUObEdoJ0l[gn08Ui + (544 - 543)] < kUObEdoJ0l[gn08Ui]) {
                YzxoyY06vDiS = kUObEdoJ0l[gn08Ui];
                kUObEdoJ0l[gn08Ui] = kUObEdoJ0l[gn08Ui + (594 - 593)];
                kUObEdoJ0l[gn08Ui + (397 - 396)] = YzxoyY06vDiS;
            }
        }
    }
}

void  vHQvLMRuUq (int kUObEdoJ0l [], int QnmU7Eh9Dlx [], int dQ4mk3Bowrc [], int JN1yCc, int YzxoyY06vDiS) {
    int o2NuVTY9CQX;
    for (o2NuVTY9CQX = (26 - 26); JN1yCc > o2NuVTY9CQX; o2NuVTY9CQX++)
        dQ4mk3Bowrc[o2NuVTY9CQX] = kUObEdoJ0l[o2NuVTY9CQX];
    for (o2NuVTY9CQX = JN1yCc; JN1yCc +YzxoyY06vDiS > o2NuVTY9CQX; o2NuVTY9CQX++)
        dQ4mk3Bowrc[o2NuVTY9CQX] = QnmU7Eh9Dlx[o2NuVTY9CQX - JN1yCc];
}

void  main () {
    int JN1yCc, YzxoyY06vDiS, kUObEdoJ0l [(758 - 658)], QnmU7Eh9Dlx [(875 - 775)], dQ4mk3Bowrc [200];
    int o2NuVTY9CQX, VA8drfYZmz;
    scanf ("%d%d", &JN1yCc, &YzxoyY06vDiS);
    {
        VA8drfYZmz = 647 - 647;
        while (VA8drfYZmz < JN1yCc) {
            scanf ("%d", &kUObEdoJ0l[VA8drfYZmz]);
            VA8drfYZmz = VA8drfYZmz +1;
        }
    }
    mBXilJxFA (JN1yCc, kUObEdoJ0l);
    for (VA8drfYZmz = (162 - 162); VA8drfYZmz < YzxoyY06vDiS; VA8drfYZmz = VA8drfYZmz +1)
        scanf ("%d", &QnmU7Eh9Dlx[VA8drfYZmz]);
    mBXilJxFA (YzxoyY06vDiS, QnmU7Eh9Dlx);
    vHQvLMRuUq (kUObEdoJ0l, QnmU7Eh9Dlx, dQ4mk3Bowrc, JN1yCc, YzxoyY06vDiS);
    printf ("%d", dQ4mk3Bowrc[0]);
    {
        o2NuVTY9CQX = 1;
        while (o2NuVTY9CQX < JN1yCc +YzxoyY06vDiS) {
            printf (" %d", dQ4mk3Bowrc[o2NuVTY9CQX]);
            o2NuVTY9CQX = o2NuVTY9CQX + 1;
        }
    }
}

