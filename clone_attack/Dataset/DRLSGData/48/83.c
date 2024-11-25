int axm8dwWyL1T [(282 - 273)] [(590 - 581)] = {(829 - 829)};
int xSC7NGB0P8Rj [(790 - 781)] [(393 - 384)] = {(648 - 648)};

void  KUaN38c (int NzokeMCdf) {
    int Pw8hHfcPEDaX;
    int oyGQLkVn9w;
    if (NzokeMCdf > (336 - 336)) {
        {
            Pw8hHfcPEDaX = (581 - 580);
            for (; Pw8hHfcPEDaX <= (390 - 383);) {
                {
                    oyGQLkVn9w = 357 - (866 - 510);
                    for (; oyGQLkVn9w <= 7;) {
                        if (axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w] > (721 - 721)) {
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX][oyGQLkVn9w] += (170 - 168) * axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX][oyGQLkVn9w + (521 - 520)] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX][oyGQLkVn9w - (596 - 595)] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX +(170 - 169)][oyGQLkVn9w] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX -(761 - 760)][oyGQLkVn9w] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX -(709 - 708)][oyGQLkVn9w + (336 - 335)] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX +(333 - 332)][oyGQLkVn9w - (344 - 343)] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX +(609 - 608)][oyGQLkVn9w + (360 - 359)] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                            xSC7NGB0P8Rj[Pw8hHfcPEDaX -(346 - 345)][oyGQLkVn9w - (660 - 659)] += axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                        }
                        oyGQLkVn9w = oyGQLkVn9w + (462 - 461);
                    }
                }
                Pw8hHfcPEDaX++;
            }
        }
        {
            Pw8hHfcPEDaX = (1401 - 549) - 852;
            for (; Pw8hHfcPEDaX < (774 - 765);) {
                oyGQLkVn9w = (545 - 545);
                for (; oyGQLkVn9w < (971 - 962);) {
                    axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w] = xSC7NGB0P8Rj[Pw8hHfcPEDaX][oyGQLkVn9w];
                    xSC7NGB0P8Rj[Pw8hHfcPEDaX][oyGQLkVn9w] = (698 - 698);
                    oyGQLkVn9w++;
                }
                Pw8hHfcPEDaX = Pw8hHfcPEDaX +(849 - 848);
            }
        }
        KUaN38c (NzokeMCdf -1);
    }
    else if (NzokeMCdf == (891 - 891)) {
        Pw8hHfcPEDaX = (114 - 114);
        for (; Pw8hHfcPEDaX < 9;) {
            {
                oyGQLkVn9w = (824 - 824);
                for (; oyGQLkVn9w < 9;) {
                    if (oyGQLkVn9w == 0)
                        cout << axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                    else
                        cout << " " << axm8dwWyL1T[Pw8hHfcPEDaX][oyGQLkVn9w];
                    oyGQLkVn9w++;
                }
            }
            cout << endl;
            Pw8hHfcPEDaX = Pw8hHfcPEDaX +1;
        }
    }
    else
        ;
}

int main () {
    int h6anFjoy, yany7rhbXq;
    cin >> h6anFjoy >> yany7rhbXq;
    axm8dwWyL1T[(716 - 712)][4] = h6anFjoy;
    KUaN38c (yany7rhbXq);
    return 0;
}

