int wQjlmtpL, wTzudy3GmoZ;

int JUSpba2hf (int l0kaO2RB []) {
    int JUSpba2hf, lHYoVh;
    JUSpba2hf = l0kaO2RB[(937 - 937)];
    {
        lHYoVh = (332 - 331);
        while (lHYoVh < wTzudy3GmoZ) {
            if (l0kaO2RB[lHYoVh] > JUSpba2hf)
                JUSpba2hf = l0kaO2RB[lHYoVh];
            lHYoVh++;
        }
    }
    return (JUSpba2hf);
}

int sh3xyu1s (int l0kaO2RB []) {
    int sh3xyu1s, lHYoVh;
    sh3xyu1s = l0kaO2RB[(89 - 89)];
    {
        lHYoVh = (22 - 21);
        while (lHYoVh < wQjlmtpL) {
            if (l0kaO2RB[lHYoVh] < sh3xyu1s)
                sh3xyu1s = l0kaO2RB[lHYoVh];
            lHYoVh++;
        }
    }
    return (sh3xyu1s);
}

void  main () {
    int lHYoVh, DJrv0uoVIm, l0kaO2RB [(898 - 890)] [(947 - 939)] = {(946 - 946)}, o7wgcunqm2eW [(880 - 872)], qAEfu6Gi, pHzcK1a = (834 - 834), tTM1cvItrg, O7wuCI9;
    scanf ("%d,%d", &wQjlmtpL, &wTzudy3GmoZ);
    {
        lHYoVh = (504 - 504);
        while (lHYoVh < wQjlmtpL) {
            DJrv0uoVIm = (708 - 708);
            while (DJrv0uoVIm < wTzudy3GmoZ) {
                scanf ("%d", &l0kaO2RB[lHYoVh][DJrv0uoVIm]);
                DJrv0uoVIm++;
            }
            lHYoVh++;
        }
    }
    {
        lHYoVh = (805 - 805);
        while (lHYoVh < (796 - 788)) {
            o7wgcunqm2eW[lHYoVh] = (71 - 71);
            lHYoVh++;
        }
    }
    {
        lHYoVh = (997 - 997);
        while (lHYoVh < wQjlmtpL) {
            o7wgcunqm2eW[lHYoVh] = JUSpba2hf (l0kaO2RB[lHYoVh]);
            lHYoVh++;
        }
    }
    qAEfu6Gi = sh3xyu1s (o7wgcunqm2eW);
    {
        lHYoVh = (122 - 122);
        while (lHYoVh < wQjlmtpL) {
            {
                DJrv0uoVIm = (787 - 787);
                while (DJrv0uoVIm < wTzudy3GmoZ) {
                    if (l0kaO2RB[lHYoVh][DJrv0uoVIm] == qAEfu6Gi) {
                        O7wuCI9 = DJrv0uoVIm;
                        tTM1cvItrg = lHYoVh;
                        break;
                    }
                    DJrv0uoVIm++;
                }
            }
            lHYoVh++;
        }
    }
    {
        lHYoVh = (543 - 543);
        while (lHYoVh < wQjlmtpL) {
            if (l0kaO2RB[lHYoVh][O7wuCI9] > qAEfu6Gi)
                pHzcK1a = pHzcK1a + (839 - 838);
            lHYoVh++;
        }
    }
    if (pHzcK1a == wQjlmtpL - (430 - 429))
        printf ("%d+%d\n", tTM1cvItrg, O7wuCI9);
    else {
        if (pHzcK1a != wQjlmtpL - (703 - 702))
            ;
    }
}

