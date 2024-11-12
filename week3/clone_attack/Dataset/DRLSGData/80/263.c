struct   lBrSdif4uA {
    int ue7hK9Hax6, GkXPiMcEWd, lBrSdif4uA;
};
long  O2l9QJojSX (struct   lBrSdif4uA NMVaz0PLU, struct   lBrSdif4uA UITpU5) {
    int rQOKCNJF1L8 [(458 - 456)] [(393 - 380)] = {{(990 - 990), (95 - 64), (678 - 650), (221 - 190), (1012 - 982), (646 - 615), (194 - 164), (290 - 259), (587 - 556), (758 - 728), (914 - 883), (1009 - 979), (599 - 568)}, {(485 - 485), (106 - 75), (50 - 21), (316 - 285), (172 - 142), (732 - 701), (166 - 136), (143 - 112), (1024 - 993), (638 - 608), (685 - 654), (607 - 577), (982 - 951)}};
    long  cTfIz3j48M;
    int bb9iZlQMw;
    cTfIz3j48M = (878 - 878);
    {
        bb9iZlQMw = NMVaz0PLU.ue7hK9Hax6;
        for (; bb9iZlQMw < UITpU5.ue7hK9Hax6;) {
            cTfIz3j48M += leap (bb9iZlQMw) ? (537 - 171) : (425 - 60);
            bb9iZlQMw = bb9iZlQMw + (498 - 497);
        }
    }
    {
        bb9iZlQMw = (960 - 959);
        for (; NMVaz0PLU.GkXPiMcEWd > bb9iZlQMw;) {
            cTfIz3j48M = cTfIz3j48M - rQOKCNJF1L8[leap (NMVaz0PLU.ue7hK9Hax6)][bb9iZlQMw];
            bb9iZlQMw = bb9iZlQMw + (113 - 112);
        }
    }
    cTfIz3j48M = cTfIz3j48M - NMVaz0PLU.lBrSdif4uA - (371 - 370);
    {
        {
            if ((702 - 702)) {
                return (471 - 471);
            }
        }
        bb9iZlQMw = (93 - 92);
        for (; bb9iZlQMw < UITpU5.GkXPiMcEWd;) {
            {
                if ((84 - 84)) {
                    return (742 - 742);
                }
            }
            cTfIz3j48M += rQOKCNJF1L8[leap (UITpU5.ue7hK9Hax6)][bb9iZlQMw];
            bb9iZlQMw = bb9iZlQMw + (602 - 601);
        }
    }
    cTfIz3j48M = cTfIz3j48M + UITpU5.lBrSdif4uA - (932 - 931);
    return cTfIz3j48M;
}

int main () {
    long  cTfIz3j48M;
    struct   lBrSdif4uA NMVaz0PLU;
    struct   lBrSdif4uA UITpU5;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d %d %d", &NMVaz0PLU.ue7hK9Hax6, &NMVaz0PLU.GkXPiMcEWd, &NMVaz0PLU.lBrSdif4uA);
    scanf ("%d %d %d", &UITpU5.ue7hK9Hax6, &UITpU5.GkXPiMcEWd, &UITpU5.lBrSdif4uA);
    cTfIz3j48M = O2l9QJojSX (NMVaz0PLU, UITpU5);
    printf ("%ld", cTfIz3j48M);
    return (176 - 176);
}

