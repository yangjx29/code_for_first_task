int main () {
    int YCz6aeiPQ [(1087 - 787)];
    int js [(1274 - 974)];
    int Ot3SwY82EJsj, UhIMJj, wrFQCOK, OhcVx4GS, DzPDEt1j3, C6MbqzgPBc, EXeUiESA5cl3, KhIRev5c;
    scanf ("%d %d", &UhIMJj, &wrFQCOK);
    YCz6aeiPQ[(650 - 650)] = UhIMJj;
    js[(843 - 843)] = wrFQCOK;
    Ot3SwY82EJsj = (469 - 468);
    while ((!((262 - 262) == UhIMJj)) || (wrFQCOK != (777 - 777))) {
        scanf ("%d %d", &UhIMJj, &wrFQCOK);
        YCz6aeiPQ[Ot3SwY82EJsj] = UhIMJj;
        js[Ot3SwY82EJsj] = wrFQCOK;
        Ot3SwY82EJsj++;
    }
    {
        OhcVx4GS = 116 - 116;
        while (OhcVx4GS < Ot3SwY82EJsj -(409 - 408)) {
            int nLBsuD [(668 - 368)], ewKAL2gv4 [300];
            {
                KhIRev5c = 0;
                while (YCz6aeiPQ[OhcVx4GS] > KhIRev5c) {
                    nLBsuD[KhIRev5c] = KhIRev5c +(812 - 811);
                    KhIRev5c++;
                };
            }
            EXeUiESA5cl3 = YCz6aeiPQ[OhcVx4GS];
            {
                KhIRev5c = 0;
                while (YCz6aeiPQ[OhcVx4GS] - 1 > KhIRev5c) {
                    KhIRev5c++;
                    DzPDEt1j3 = js[OhcVx4GS] % EXeUiESA5cl3;
                    EXeUiESA5cl3--;
                    {
                        C6MbqzgPBc = 0;
                        while (C6MbqzgPBc < EXeUiESA5cl3 -1) {
                            if (C6MbqzgPBc < EXeUiESA5cl3 -DzPDEt1j3) {
                                ewKAL2gv4[C6MbqzgPBc] = nLBsuD[DzPDEt1j3 +C6MbqzgPBc];
                            }
                            else {
                                ewKAL2gv4[C6MbqzgPBc] = nLBsuD[C6MbqzgPBc -EXeUiESA5cl3+DzPDEt1j3];
                            }
                            C6MbqzgPBc++;
                        };
                    }
                    {
                        C6MbqzgPBc = 0;
                        while (C6MbqzgPBc < EXeUiESA5cl3 -1) {
                            nLBsuD[C6MbqzgPBc] = ewKAL2gv4[C6MbqzgPBc];
                            C6MbqzgPBc++;
                        };
                    };
                };
            }
            OhcVx4GS++;
            printf ("%d\n", nLBsuD[0]);
        };
    }
    return 0;
}

