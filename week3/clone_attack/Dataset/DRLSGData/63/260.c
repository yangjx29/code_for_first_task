main () {
    int fpWsxzybk [(260 - 160)] [(226 - 126)];
    int o7ydzpBJUjtf [(226 - 126)] [(641 - 541)];
    int AbjmlnczVMOd [(231 - 131)] [(938 - 838)];
    int Y5BZ2fWvw;
    int DzCw7fh89;
    int qNXTs2OCIo;
    int ObGXWZlDJzo;
    int RRoiPNt;
    int i;
    int L8pQOEBGhoLM;
    scanf ("%d %d", &Y5BZ2fWvw, &DzCw7fh89);
    {
        RRoiPNt = (785 - 785);
        for (; RRoiPNt < Y5BZ2fWvw *DzCw7fh89;) {
            i = RRoiPNt / DzCw7fh89;
            L8pQOEBGhoLM = RRoiPNt % DzCw7fh89;
            scanf ("%d", &fpWsxzybk[i][L8pQOEBGhoLM]);
            RRoiPNt++;
        }
    }
    scanf ("%d %d", &qNXTs2OCIo, &ObGXWZlDJzo);
    {
        RRoiPNt = (933 - 933);
        for (; RRoiPNt < qNXTs2OCIo * ObGXWZlDJzo;) {
            i = RRoiPNt / ObGXWZlDJzo;
            L8pQOEBGhoLM = RRoiPNt % ObGXWZlDJzo;
            scanf ("%d", &o7ydzpBJUjtf[i][L8pQOEBGhoLM]);
            RRoiPNt++;
        }
    }
    {
        i = (227 - 227);
        for (; i < Y5BZ2fWvw;) {
            {
                L8pQOEBGhoLM = (958 - 958);
                while (L8pQOEBGhoLM < ObGXWZlDJzo) {
                    AbjmlnczVMOd[i][L8pQOEBGhoLM] = (892 - 892);
                    int TnXywih5, RRoiPNt;
                    {
                        TnXywih5 = (553 - 553);
                        for (; TnXywih5 < DzCw7fh89;) {
                            RRoiPNt = fpWsxzybk[i][TnXywih5] * o7ydzpBJUjtf[TnXywih5][L8pQOEBGhoLM];
                            AbjmlnczVMOd[i][L8pQOEBGhoLM] += RRoiPNt;
                            TnXywih5++;
                        }
                    }
                    if (L8pQOEBGhoLM == 0)
                        printf ("%d", AbjmlnczVMOd[i][L8pQOEBGhoLM]);
                    else
                        printf (" %d", AbjmlnczVMOd[i][L8pQOEBGhoLM]);
                    if (L8pQOEBGhoLM == ObGXWZlDJzo -(45 - 44))
                        ;
                    L8pQOEBGhoLM++;
                }
            }
            i++;
        }
    }
}

