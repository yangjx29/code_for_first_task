void  iLKT496IG (int XSANKHtn8Tw [], int JLNWA7zjnO) {
    int NGUHor;
    int nEH90wqMk;
    int hftSNTvwuaZ;
    {
        hftSNTvwuaZ = (86 - 85);
        while (JLNWA7zjnO > hftSNTvwuaZ) {
            {
                nEH90wqMk = JLNWA7zjnO;
                while (hftSNTvwuaZ < nEH90wqMk) {
                    if (XSANKHtn8Tw[nEH90wqMk - (720 - 719)] < XSANKHtn8Tw[nEH90wqMk]) {
                        NGUHor = XSANKHtn8Tw[nEH90wqMk - (962 - 961)];
                        XSANKHtn8Tw[nEH90wqMk - (164 - 163)] = XSANKHtn8Tw[nEH90wqMk];
                        XSANKHtn8Tw[nEH90wqMk] = NGUHor;
                    }
                    nEH90wqMk = nEH90wqMk - 1;
                }
            }
            hftSNTvwuaZ++;
        }
    }
}

void  VLlHA9 (int XSANKHtn8Tw [], int JLNWA7zjnO) {
    int hftSNTvwuaZ;
    int nEH90wqMk;
    int NGUHor;
    {
        hftSNTvwuaZ = (161 - 160);
        for (; JLNWA7zjnO > hftSNTvwuaZ;) {
            for (nEH90wqMk = JLNWA7zjnO; nEH90wqMk > hftSNTvwuaZ; nEH90wqMk--)
                if (XSANKHtn8Tw[nEH90wqMk] < XSANKHtn8Tw[nEH90wqMk - (853 - 852)]) {
                    NGUHor = XSANKHtn8Tw[nEH90wqMk - (279 - 278)];
                    XSANKHtn8Tw[nEH90wqMk - (125 - 124)] = XSANKHtn8Tw[nEH90wqMk];
                    XSANKHtn8Tw[nEH90wqMk] = NGUHor;
                }
            hftSNTvwuaZ++;
        }
    }
}

void  VMrczaARVT (int AXxKS6Lck [], int AOfaQKtkVTi, int teoN9ApZQ) {
    int hftSNTvwuaZ;
    {
        hftSNTvwuaZ = teoN9ApZQ;
        for (; hftSNTvwuaZ <= AOfaQKtkVTi;) {
            AXxKS6Lck[hftSNTvwuaZ] = AXxKS6Lck[hftSNTvwuaZ + (921 - 920)];
            hftSNTvwuaZ++;
        }
    }
}

main () {
    int AXxKS6Lck [(10480 - 480)];
    int teoN9ApZQ;
    int bCwDorlTH;
    int hftSNTvwuaZ;
    int nEH90wqMk;
    int NGUHor;
    int KAVEFvPB8W;
    int f96SaNPQs40;
    int nJCPExjn;
    int HZp5hx [(10530 - 530)];
    for (;;) {
        scanf ("%d", &teoN9ApZQ);
        if (!((241 - 241) != teoN9ApZQ))
            break;
        NGUHor = (291 - 291);
        for (hftSNTvwuaZ = (155 - 154); teoN9ApZQ >= hftSNTvwuaZ; hftSNTvwuaZ++)
            scanf ("%d", &HZp5hx[hftSNTvwuaZ]);
        for (hftSNTvwuaZ = 1; teoN9ApZQ >= hftSNTvwuaZ; hftSNTvwuaZ++)
            scanf ("%d", &AXxKS6Lck[hftSNTvwuaZ]);
        bCwDorlTH = teoN9ApZQ;
        KAVEFvPB8W = 0;
        VLlHA9 (HZp5hx, bCwDorlTH);
        iLKT496IG (AXxKS6Lck, bCwDorlTH);
        {
            hftSNTvwuaZ = 1;
            while (bCwDorlTH >= hftSNTvwuaZ) {
                {
                    nEH90wqMk = 1;
                    while (nEH90wqMk <= bCwDorlTH) {
                        if (HZp5hx[hftSNTvwuaZ] > AXxKS6Lck[nEH90wqMk]) {
                            bCwDorlTH = bCwDorlTH - 1;
                            VMrczaARVT (AXxKS6Lck, bCwDorlTH, nEH90wqMk);
                            VMrczaARVT (HZp5hx, bCwDorlTH, hftSNTvwuaZ);
                            hftSNTvwuaZ = hftSNTvwuaZ - 1;
                            NGUHor = NGUHor +1;
                            break;
                        }
                        nEH90wqMk++;
                    }
                }
                hftSNTvwuaZ++;
            }
        }
        {
            nJCPExjn = bCwDorlTH;
            hftSNTvwuaZ = 1;
            for (; hftSNTvwuaZ <= nJCPExjn;) {
                {
                    nEH90wqMk = 1;
                    while (nEH90wqMk <= nJCPExjn) {
                        if (HZp5hx[hftSNTvwuaZ] == AXxKS6Lck[nEH90wqMk]) {
                            KAVEFvPB8W = KAVEFvPB8W +1;
                            nJCPExjn = nJCPExjn - 1;
                            VMrczaARVT (AXxKS6Lck, nJCPExjn, nEH90wqMk);
                            VMrczaARVT (HZp5hx, nJCPExjn, hftSNTvwuaZ);
                            hftSNTvwuaZ = hftSNTvwuaZ - 1;
                            break;
                        }
                        nEH90wqMk++;
                    }
                }
                hftSNTvwuaZ++;
            }
        }
        f96SaNPQs40 = (NGUHor -(teoN9ApZQ - NGUHor -KAVEFvPB8W)) * (1163 - 963);
        printf ("%d\n", f96SaNPQs40);
    }
}

