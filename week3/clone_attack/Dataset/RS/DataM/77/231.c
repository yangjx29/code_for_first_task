void  OmgE40A5VH (char QM2QiZt [], int Fl3npbTczuX, char ZDwKGm, char boy) {
    if (!('.' == QM2QiZt[(171 - 171)])) {
        int Y97gNjlD;
        int Z8FdzGHyXEt;
        {
            Y97gNjlD = 11 - 10;
            while (Y97gNjlD < Fl3npbTczuX) {
                if (!(ZDwKGm != QM2QiZt[Y97gNjlD])) {
                    QM2QiZt[Y97gNjlD] = '.';
                    {
                        Z8FdzGHyXEt = Y97gNjlD -1;
                        while (Z8FdzGHyXEt >= 0) {
                            if (QM2QiZt[Z8FdzGHyXEt] == boy) {
                                QM2QiZt[Z8FdzGHyXEt] = '.';
                                printf ("%d ", Z8FdzGHyXEt);
                                Z8FdzGHyXEt = -1;
                            }
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            Z8FdzGHyXEt--;
                        };
                    }
                    printf ("%d\n", Y97gNjlD);
                    OmgE40A5VH (QM2QiZt, Fl3npbTczuX, ZDwKGm, boy);
                    Y97gNjlD = Fl3npbTczuX;
                }
                Y97gNjlD++;
            };
        };
    };
}

void  main () {
    char QM2QiZt [100];
    gets (QM2QiZt);
    int Fl3npbTczuX;
    Fl3npbTczuX = strlen (QM2QiZt);
    OmgE40A5VH (QM2QiZt, Fl3npbTczuX, QM2QiZt[Fl3npbTczuX -1], QM2QiZt[0]);
}

