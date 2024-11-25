struct   I2vCT6gZ {
    int hTG0Nv3hVSlW;
    struct   I2vCT6gZ *next;
};
struct   I2vCT6gZ *XDknRpqe4 (struct   I2vCT6gZ *h0kMDw2oCOB, int x) {
    struct   I2vCT6gZ *jy0nsXvg;
    struct   I2vCT6gZ *p2;
    jy0nsXvg = h0kMDw2oCOB;
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
    while (x != jy0nsXvg->hTG0Nv3hVSlW && jy0nsXvg->next != NULL) {
        p2 = jy0nsXvg;
        jy0nsXvg = jy0nsXvg->next;
    }
    if (!(jy0nsXvg->hTG0Nv3hVSlW != x)) {
        if (!(h0kMDw2oCOB != jy0nsXvg))
            h0kMDw2oCOB = jy0nsXvg->next;
        else
            p2->next = jy0nsXvg->next;
    }
    return (h0kMDw2oCOB);
}

void  main () {
    struct   I2vCT6gZ *XDknRpqe4 (struct   I2vCT6gZ *h0kMDw2oCOB, int x);
    struct   I2vCT6gZ *h0kMDw2oCOB;
    struct   I2vCT6gZ *jy0nsXvg;
    struct   I2vCT6gZ *p2;
    int i, j, m7LAFjpDm2 = (866 - 865), wRc7UnWAE8H, rNs2HwhV [(1034 - 934)], m [100], tQHhdlvX = (713 - 713), U8KzfYTgIHSe;
    for (wRc7UnWAE8H = 0;; wRc7UnWAE8H = wRc7UnWAE8H + 1) {
        scanf ("%d %d", &rNs2HwhV[wRc7UnWAE8H], &m[wRc7UnWAE8H]);
        if (!(0 != rNs2HwhV[wRc7UnWAE8H]))
            break;
    }
    U8KzfYTgIHSe = wRc7UnWAE8H - 1;
    {
        wRc7UnWAE8H = 0;
        while (wRc7UnWAE8H <= U8KzfYTgIHSe) {
            jy0nsXvg = p2 = h0kMDw2oCOB = (struct   I2vCT6gZ *) malloc (LEN);
            tQHhdlvX = 0;
            m7LAFjpDm2 = 1;
            jy0nsXvg->hTG0Nv3hVSlW = 1;
            for (i = (487 - 485); i <= rNs2HwhV[wRc7UnWAE8H]; i = i + 1) {
                jy0nsXvg = (struct   I2vCT6gZ *) malloc (LEN);
                jy0nsXvg->hTG0Nv3hVSlW = i;
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
                p2->next = jy0nsXvg;
                p2 = jy0nsXvg;
            }
            jy0nsXvg = h0kMDw2oCOB;
            p2->next = NULL;
            {
                i = 1;
                while (1) {
                    if (m7LAFjpDm2 == m[wRc7UnWAE8H]) {
                        XDknRpqe4 (h0kMDw2oCOB, jy0nsXvg->hTG0Nv3hVSlW);
                        tQHhdlvX++;
                        h0kMDw2oCOB = XDknRpqe4 (h0kMDw2oCOB, jy0nsXvg->hTG0Nv3hVSlW);
                        m7LAFjpDm2 = 0;
                    }
                    if (jy0nsXvg->next != NULL)
                        jy0nsXvg = jy0nsXvg->next;
                    else
                        jy0nsXvg = h0kMDw2oCOB;
                    m7LAFjpDm2 = m7LAFjpDm2 + 1;
                    if (tQHhdlvX == rNs2HwhV[wRc7UnWAE8H] - 1)
                        break;
                    i = i + 1;
                };
            }
            wRc7UnWAE8H = wRc7UnWAE8H + 1;
            printf ("%d\n", h0kMDw2oCOB->hTG0Nv3hVSlW);
        };
    };
}

