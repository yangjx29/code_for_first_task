void  main () {
    int DIn9GoJ, vZjaNfcl0Cdu;
    struct   student {
        int ZHtBjEz;
        int chinese;
        int b4ZJUBV;
        int WlZaWRJK;
    }
    jmiCWk;
    struct   student {
        int ZHtBjEz;
        int chinese;
        int b4ZJUBV;
        int WlZaWRJK;
    }
    h7ZBtd;
    struct   student {
        int ZHtBjEz;
        int chinese;
        int b4ZJUBV;
        int WlZaWRJK;
    }
    ZxEZ4c0P1Lm;
    struct   student {
        int ZHtBjEz;
        int chinese;
        int b4ZJUBV;
        int WlZaWRJK;
    }
    temp;
    scanf ("%d", &vZjaNfcl0Cdu);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    jmiCWk.WlZaWRJK = (142 - 142);
    h7ZBtd.WlZaWRJK = (517 - 517);
    ZxEZ4c0P1Lm.WlZaWRJK = 0;
    for (DIn9GoJ = 0; vZjaNfcl0Cdu > DIn9GoJ; DIn9GoJ = DIn9GoJ +1) {
        scanf ("%d%d%d", &temp.ZHtBjEz, &temp.chinese, &temp.b4ZJUBV);
        temp.WlZaWRJK = temp.chinese + temp.b4ZJUBV;
        if (temp.WlZaWRJK > jmiCWk.WlZaWRJK) {
            ZxEZ4c0P1Lm = h7ZBtd;
            h7ZBtd = jmiCWk;
            jmiCWk = temp;
        }
        else {
            if (jmiCWk.WlZaWRJK >= temp.WlZaWRJK && temp.WlZaWRJK > h7ZBtd.WlZaWRJK) {
                ZxEZ4c0P1Lm = h7ZBtd;
                h7ZBtd = temp;
            }
            else {
                if (temp.WlZaWRJK <= h7ZBtd.WlZaWRJK && temp.WlZaWRJK > ZxEZ4c0P1Lm.WlZaWRJK)
                    ZxEZ4c0P1Lm = temp;
            };
        };
    }
    printf ("%d %d\n", jmiCWk.ZHtBjEz, jmiCWk.WlZaWRJK);
    printf ("%d %d\n", h7ZBtd.ZHtBjEz, h7ZBtd.WlZaWRJK);
    printf ("%d %d\n", ZxEZ4c0P1Lm.ZHtBjEz, ZxEZ4c0P1Lm.WlZaWRJK);
}

