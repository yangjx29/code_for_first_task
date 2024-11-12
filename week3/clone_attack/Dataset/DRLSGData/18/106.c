void  OY6ocStfwa (int vbzUmnNMg20 [100] [100], int csXMvyj4cl) {
    int bu7dLxtsXf, IBasmoP5;
    {
        IBasmoP5 = 0;
        bu7dLxtsXf = 0;
        for (; csXMvyj4cl > bu7dLxtsXf;) {
            int ttkF4x = 10000;
            {
                IBasmoP5 = 0;
                for (; csXMvyj4cl > IBasmoP5;) {
                    ttkF4x = (vbzUmnNMg20[bu7dLxtsXf][IBasmoP5] > ttkF4x) ? ttkF4x : vbzUmnNMg20[bu7dLxtsXf][IBasmoP5];
                    IBasmoP5++;
                }
            }
            {
                IBasmoP5 = 0;
                for (; csXMvyj4cl > IBasmoP5;) {
                    vbzUmnNMg20[bu7dLxtsXf][IBasmoP5] = vbzUmnNMg20[bu7dLxtsXf][IBasmoP5] - ttkF4x;
                    IBasmoP5++;
                }
            }
            bu7dLxtsXf++;
        }
    }
    for (bu7dLxtsXf = IBasmoP5 = 0; csXMvyj4cl > bu7dLxtsXf; bu7dLxtsXf++) {
        int ttkF4x = 10000;
        for (IBasmoP5 = 0; csXMvyj4cl > IBasmoP5; IBasmoP5++)
            ttkF4x = (ttkF4x < vbzUmnNMg20[IBasmoP5][bu7dLxtsXf]) ? ttkF4x : vbzUmnNMg20[IBasmoP5][bu7dLxtsXf];
        for (IBasmoP5 = 0; IBasmoP5 < csXMvyj4cl; IBasmoP5++)
            vbzUmnNMg20[IBasmoP5][bu7dLxtsXf] = vbzUmnNMg20[IBasmoP5][bu7dLxtsXf] - ttkF4x;
    }
}

void  GgDMRHJ (int vbzUmnNMg20 [100] [100], int k) {
    int bu7dLxtsXf, IBasmoP5;
    {
        bu7dLxtsXf = 0;
        for (; k > bu7dLxtsXf;) {
            {
                IBasmoP5 = 0;
                for (; IBasmoP5 < k;) {
                    printf ("%d%c", vbzUmnNMg20[bu7dLxtsXf][IBasmoP5], (!(k != IBasmoP5 +1)) ? '\n' : ',');
                    IBasmoP5++;
                }
            }
            bu7dLxtsXf++;
        }
    }
}

void  lxhlUPgHI (int vbzUmnNMg20 [100] [100], int csXMvyj4cl) {
    int bu7dLxtsXf, IBasmoP5;
    {
        bu7dLxtsXf = 0;
        IBasmoP5 = 0;
        for (; bu7dLxtsXf < csXMvyj4cl;) {
            {
                IBasmoP5 = 0;
                for (; IBasmoP5 < csXMvyj4cl;) {
                    if (bu7dLxtsXf == 0 && !(0 != IBasmoP5))
                        vbzUmnNMg20[bu7dLxtsXf][IBasmoP5] = vbzUmnNMg20[bu7dLxtsXf][IBasmoP5];
                    else if (bu7dLxtsXf == 0 && 0 < IBasmoP5)
                        vbzUmnNMg20[bu7dLxtsXf][IBasmoP5] = vbzUmnNMg20[bu7dLxtsXf][IBasmoP5 +1];
                    else if (bu7dLxtsXf > 0 && IBasmoP5 == 0)
                        vbzUmnNMg20[bu7dLxtsXf][IBasmoP5] = vbzUmnNMg20[bu7dLxtsXf + 1][IBasmoP5];
                    else if (bu7dLxtsXf > 0 && IBasmoP5 > 0)
                        vbzUmnNMg20[bu7dLxtsXf][IBasmoP5] = vbzUmnNMg20[bu7dLxtsXf + 1][IBasmoP5 +1];
                    IBasmoP5++;
                }
            }
            bu7dLxtsXf++;
        }
    }
}

void  q6iMQvG (int csXMvyj4cl) {
    int vbzUmnNMg20 [100] [100] = {0};
    int bu7dLxtsXf = 0, IBasmoP5, SYU45JFoREQ;
    for (bu7dLxtsXf = IBasmoP5 = 0; bu7dLxtsXf < csXMvyj4cl; bu7dLxtsXf++)
        for (IBasmoP5 = 0; IBasmoP5 < csXMvyj4cl; IBasmoP5++)
            scanf ("%d", &vbzUmnNMg20[bu7dLxtsXf][IBasmoP5]);
    for (bu7dLxtsXf = 0, SYU45JFoREQ = 0; bu7dLxtsXf < csXMvyj4cl; bu7dLxtsXf++) {
        OY6ocStfwa (vbzUmnNMg20, csXMvyj4cl - bu7dLxtsXf);
        SYU45JFoREQ = SYU45JFoREQ +vbzUmnNMg20[1][1];
        lxhlUPgHI (vbzUmnNMg20, csXMvyj4cl - bu7dLxtsXf);
    }
    printf ("%d\n", SYU45JFoREQ);
}

void  main () {
    int bu7dLxtsXf = 0, csXMvyj4cl;
    scanf ("%d", &csXMvyj4cl);
    for (; bu7dLxtsXf++ < csXMvyj4cl;)
        q6iMQvG (csXMvyj4cl);
}

