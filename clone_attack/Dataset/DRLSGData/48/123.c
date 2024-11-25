void  main () {
    int qF1Pgs, prjit1oIS7Q, VaMouE [11] [11] = {0}, NDdmWNslfU [10] [10] = {0}, wtZr1xU, L7z3RcMrOfto, TcvnLPatx;
    scanf ("%d%d", &qF1Pgs, &prjit1oIS7Q);
    VaMouE[5][5] = qF1Pgs;
    {
        TcvnLPatx = 1;
        while (prjit1oIS7Q >= TcvnLPatx) {
            for (wtZr1xU = 1; 9 >= wtZr1xU; wtZr1xU = wtZr1xU + 1) {
                for (L7z3RcMrOfto = 1; 9 >= L7z3RcMrOfto; L7z3RcMrOfto = L7z3RcMrOfto +1) {
                    NDdmWNslfU[wtZr1xU][L7z3RcMrOfto] = 2 * VaMouE[wtZr1xU][L7z3RcMrOfto] + VaMouE[wtZr1xU - 1][L7z3RcMrOfto -1] + VaMouE[wtZr1xU - 1][L7z3RcMrOfto] + VaMouE[wtZr1xU - 1][L7z3RcMrOfto +1] + VaMouE[wtZr1xU][L7z3RcMrOfto -1] + VaMouE[wtZr1xU][L7z3RcMrOfto +1] + VaMouE[wtZr1xU + 1][L7z3RcMrOfto -1] + VaMouE[wtZr1xU + 1][L7z3RcMrOfto] + VaMouE[wtZr1xU + 1][L7z3RcMrOfto +1];
                }
            }
            for (wtZr1xU = 1; 9 >= wtZr1xU; wtZr1xU++)
                for (L7z3RcMrOfto = 1; L7z3RcMrOfto <= 9; L7z3RcMrOfto++)
                    VaMouE[wtZr1xU][L7z3RcMrOfto] = NDdmWNslfU[wtZr1xU][L7z3RcMrOfto];
            TcvnLPatx = TcvnLPatx +1;
        }
    }
    {
        wtZr1xU = 1;
        while (wtZr1xU <= 9) {
            {
                L7z3RcMrOfto = 1;
                while (L7z3RcMrOfto <= 9) {
                    if (L7z3RcMrOfto < 9) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        printf ("%d ", VaMouE[wtZr1xU][L7z3RcMrOfto]);
                    }
                    else {
                        if (wtZr1xU != 9)
                            printf ("%d\n", VaMouE[wtZr1xU][L7z3RcMrOfto]);
                        else
                            printf ("%d", VaMouE[wtZr1xU][L7z3RcMrOfto]);
                    }
                    L7z3RcMrOfto++;
                }
            }
            wtZr1xU = wtZr1xU + 1;
        }
    }
}

