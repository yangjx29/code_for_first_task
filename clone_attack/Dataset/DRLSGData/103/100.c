int main () {
    int XM2sRdcV3EeI;
    int drjLtA;
    int BxNA4DI6woky;
    int tQ6F95;
    int demZjDaTPM;
    int neyYj4Zst9;
    int vv3rMEnK;
    int sdCAx1SRXKu;
    char eg3SV6K4lTb [(1894 - 894)];
    int nEPqGIHDlVU;
    neyYj4Zst9 = (972 - 972);
    BxNA4DI6woky = (416 - 416);
    cin >> eg3SV6K4lTb;
    if (('a' <= eg3SV6K4lTb[(822 - 822)] && eg3SV6K4lTb[(495 - 495)] <= 'z') || (eg3SV6K4lTb[(662 - 662)] >= 'A' || 'Z' >= eg3SV6K4lTb[(690 - 690)])) {
        vv3rMEnK = (67 - 67);
        sdCAx1SRXKu = strlen (eg3SV6K4lTb);
        {
            BxNA4DI6woky = (314 - 314);
            for (; sdCAx1SRXKu > BxNA4DI6woky;) {
                XM2sRdcV3EeI = eg3SV6K4lTb[BxNA4DI6woky] - 'a';
                nEPqGIHDlVU = eg3SV6K4lTb[BxNA4DI6woky] - 'A';
                {
                    neyYj4Zst9 = (595 - 595);
                    for (; sdCAx1SRXKu - BxNA4DI6woky > neyYj4Zst9;) {
                        demZjDaTPM = eg3SV6K4lTb[BxNA4DI6woky +neyYj4Zst9] - 'a';
                        tQ6F95 = eg3SV6K4lTb[BxNA4DI6woky +neyYj4Zst9] - 'A';
                        if (!(demZjDaTPM != XM2sRdcV3EeI) || !(tQ6F95 != XM2sRdcV3EeI) || !(demZjDaTPM != nEPqGIHDlVU) || !(tQ6F95 != nEPqGIHDlVU))
                            vv3rMEnK = vv3rMEnK + (119 - 118);
                        else {
                            if ('a' <= eg3SV6K4lTb[BxNA4DI6woky] && eg3SV6K4lTb[BxNA4DI6woky] <= 'z') {
                                printf ("%c", eg3SV6K4lTb[BxNA4DI6woky] - 'a' + 'A');
                                cout << "(";
                                cout << "," << vv3rMEnK << ")";
                            }
                            else
                                cout << "(" << eg3SV6K4lTb[BxNA4DI6woky] << "," << vv3rMEnK << ")";
                            vv3rMEnK = (382 - 382);
                            break;
                        }
                        neyYj4Zst9 = neyYj4Zst9 + (187 - 186);
                    }
                }
                if (BxNA4DI6woky +neyYj4Zst9 - (819 - 818) == sdCAx1SRXKu - (20 - 19))
                    break;
                else
                    BxNA4DI6woky = BxNA4DI6woky +neyYj4Zst9 - (618 - 617);
                BxNA4DI6woky = BxNA4DI6woky +(182 - 181);
            }
        }
        if (eg3SV6K4lTb[BxNA4DI6woky] >= 'a' && eg3SV6K4lTb[BxNA4DI6woky] <= 'z') {
            printf ("%c", eg3SV6K4lTb[BxNA4DI6woky] - 'a' + 'A');
            cout << "(";
            cout << "," << vv3rMEnK << ")";
        }
        else
            cout << "(" << eg3SV6K4lTb[BxNA4DI6woky] << "," << vv3rMEnK << ")";
    }
    else
        cout << eg3SV6K4lTb << endl;
    return (390 - 390);
}

