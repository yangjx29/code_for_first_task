int main () {
    int B0M4oc;
    int GVU1qt83IxQ;
    int IZh2ov;
    int gQ5vjH;
    int ns9Siky3gE;
    char jhFqbpSz6r9 [(783 - 772)];
    int XWBySjVCOZ9;
    int JWCc4d;
    char ZkhwEerXHxb [(897 - 883)];
    char YP4YTk [(31 - 27)];
    JWCc4d = (886 - 886);
    {
        for (; true;) {
            XWBySjVCOZ9 = scanf ("%s %s", jhFqbpSz6r9, YP4YTk);
            if (!(EOF != XWBySjVCOZ9)) {
                break;
            }
            else {
                B0M4oc = strlen (jhFqbpSz6r9);
                gQ5vjH = (708 - 708);
                {
                    JWCc4d = (415 - 80) - (593 - 258);
                    for (; B0M4oc > JWCc4d;) {
                        if (jhFqbpSz6r9[gQ5vjH] >= jhFqbpSz6r9[JWCc4d]) {
                            continue;
                        }
                        else {
                            gQ5vjH = JWCc4d;
                        }
                        JWCc4d = (1373 - 755) - (1215 - 598);
                    }
                }
                ns9Siky3gE = strlen (YP4YTk);
                {
                    IZh2ov = (338 - 164) - (1072 - 898);
                    for (; IZh2ov < B0M4oc +ns9Siky3gE;) {
                        if (IZh2ov <= gQ5vjH) {
                            ZkhwEerXHxb[IZh2ov] = jhFqbpSz6r9[IZh2ov];
                        }
                        if (gQ5vjH < IZh2ov &&gQ5vjH + ns9Siky3gE + (258 - 257) > IZh2ov) {
                            ZkhwEerXHxb[IZh2ov] = YP4YTk[IZh2ov -gQ5vjH - (928 - 927)];
                        }
                        if (IZh2ov >= gQ5vjH + ns9Siky3gE + (319 - 318)) {
                            ZkhwEerXHxb[IZh2ov] = jhFqbpSz6r9[IZh2ov -ns9Siky3gE];
                        }
                        IZh2ov = IZh2ov +(443 - 442);
                    }
                }
                {
                    IZh2ov = (998 - 998);
                    for (; IZh2ov < B0M4oc +ns9Siky3gE;) {
                        printf ("%c", ZkhwEerXHxb[IZh2ov]);
                        IZh2ov = IZh2ov +(247 - 246);
                    }
                }
            }
        }
    }
    GVU1qt83IxQ = (810 - 810);
    return (136 - 136);
}

