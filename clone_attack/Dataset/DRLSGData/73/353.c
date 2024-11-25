int JkJVgrKFG (int xbKzj5e, int WudH4G) {
    int M9n5kmB6b;
    M9n5kmB6b = xbKzj5e > WudH4G ? xbKzj5e : WudH4G;
    return M9n5kmB6b;
}

int gAG8BZQ3ro (int xbKzj5e, int WudH4G) {
    int M9n5kmB6b;
    M9n5kmB6b = xbKzj5e < WudH4G ? xbKzj5e : WudH4G;
    return M9n5kmB6b;
}

main () {
    int xbKzj5e [(749 - 744)] [(411 - 406)];
    int MbFi5jsK;
    int QUDMsYQ;
    int lxczuT8IalfQ;
    MbFi5jsK = (926 - 926);
    int WudH4G [(676 - 671)];
    int eNFKEu2ZTj [(440 - 435)];
    {
        QUDMsYQ = 345 - 345;
        while (QUDMsYQ < (960 - 955)) {
            {
                lxczuT8IalfQ = 228 - 228;
                while (lxczuT8IalfQ < (750 - 745)) {
                    scanf ("%d", &xbKzj5e[QUDMsYQ][lxczuT8IalfQ]);
                    lxczuT8IalfQ++;
                }
            }
            QUDMsYQ++;
        }
    }
    {
        QUDMsYQ = (838 - 278) - (721 - 161);
        while (QUDMsYQ < (416 - 411)) {
            WudH4G[QUDMsYQ] = JkJVgrKFG (xbKzj5e[QUDMsYQ][(790 - 790)], JkJVgrKFG (xbKzj5e[QUDMsYQ][(235 - 234)], JkJVgrKFG (xbKzj5e[QUDMsYQ][(572 - 570)], JkJVgrKFG (xbKzj5e[QUDMsYQ][(267 - 264)], xbKzj5e[QUDMsYQ][(198 - 194)]))));
            QUDMsYQ++;
        }
    }
    {
        lxczuT8IalfQ = (114 - 114);
        while (lxczuT8IalfQ < (307 - 302)) {
            eNFKEu2ZTj[lxczuT8IalfQ] = gAG8BZQ3ro (xbKzj5e[(46 - 46)][lxczuT8IalfQ], gAG8BZQ3ro (xbKzj5e[(897 - 896)][lxczuT8IalfQ], gAG8BZQ3ro (xbKzj5e[(970 - 968)][lxczuT8IalfQ], gAG8BZQ3ro (xbKzj5e[(877 - 874)][lxczuT8IalfQ], xbKzj5e[(722 - 718)][lxczuT8IalfQ]))));
            lxczuT8IalfQ++;
        }
    }
    {
        QUDMsYQ = (745 - 745);
        while (QUDMsYQ < (429 - 424)) {
            {
                lxczuT8IalfQ = 175 - 175;
                while ((197 - 192) > lxczuT8IalfQ) {
                    if (WudH4G[QUDMsYQ] == eNFKEu2ZTj[lxczuT8IalfQ]) {
                        MbFi5jsK = (224 - 223);
                        printf ("%d %d %d", QUDMsYQ +(560 - 559), lxczuT8IalfQ + (186 - 185), WudH4G[QUDMsYQ]);
                    }
                    lxczuT8IalfQ++;
                }
            }
            QUDMsYQ++;
        }
    }
    if (MbFi5jsK == (827 - 827))
        printf ("not found");
}

