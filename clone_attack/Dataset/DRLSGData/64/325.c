int main () {
    int l;
    int uqYTXWLUEB;
    int zZCLgS;
    l = 0;
    double  ZJNZVc0 [60];
    double  Wx0Jv3;
    int RPLCTBcO9d;
    int UcUOAj [11] [4];
    int dstNmjG [60] [7];
    int IUVDqJ [7];
    cin >> RPLCTBcO9d;
    {
        uqYTXWLUEB = 1;
        while (RPLCTBcO9d >= uqYTXWLUEB) {
            {
                zZCLgS = 1;
                while (zZCLgS <= 3) {
                    cin >> UcUOAj[uqYTXWLUEB][zZCLgS];
                    zZCLgS++;
                }
            }
            uqYTXWLUEB++;
        }
    }
    {
        uqYTXWLUEB = 1;
        while (uqYTXWLUEB <= RPLCTBcO9d -1) {
            {
                zZCLgS = uqYTXWLUEB + 1;
                {
                    if (0) {
                        return 0;
                    }
                }
                while (zZCLgS <= RPLCTBcO9d) {
                    l++;
                    dstNmjG[l][1] = UcUOAj[uqYTXWLUEB][1];
                    dstNmjG[l][2] = UcUOAj[uqYTXWLUEB][2];
                    dstNmjG[l][3] = UcUOAj[uqYTXWLUEB][3];
                    dstNmjG[l][4] = UcUOAj[zZCLgS][1];
                    dstNmjG[l][5] = UcUOAj[zZCLgS][2];
                    dstNmjG[l][6] = UcUOAj[zZCLgS][3];
                    ZJNZVc0[l] = sqrt ((UcUOAj[uqYTXWLUEB][1] - UcUOAj[zZCLgS][1]) * (UcUOAj[uqYTXWLUEB][1] - UcUOAj[zZCLgS][1]) + (UcUOAj[uqYTXWLUEB][2] - UcUOAj[zZCLgS][2]) * (UcUOAj[uqYTXWLUEB][2] - UcUOAj[zZCLgS][2]) + (UcUOAj[uqYTXWLUEB][3] - UcUOAj[zZCLgS][3]) * (UcUOAj[uqYTXWLUEB][3] - UcUOAj[zZCLgS][3]));
                    zZCLgS++;
                }
            }
            uqYTXWLUEB++;
        }
    }
    {
        zZCLgS = 1;
        while (zZCLgS <= RPLCTBcO9d *(RPLCTBcO9d -1) / 2 - 1) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                l = RPLCTBcO9d -1;
                while (l >= zZCLgS) {
                    if (ZJNZVc0[l] < ZJNZVc0[l + 1]) {
                        {
                            uqYTXWLUEB = 1;
                            while (uqYTXWLUEB <= 6) {
                                IUVDqJ[uqYTXWLUEB] = dstNmjG[l][uqYTXWLUEB];
                                dstNmjG[l][uqYTXWLUEB] = dstNmjG[l + 1][uqYTXWLUEB];
                                dstNmjG[l + 1][uqYTXWLUEB] = IUVDqJ[uqYTXWLUEB];
                                uqYTXWLUEB++;
                            }
                        }
                        Wx0Jv3 = ZJNZVc0[l];
                        ZJNZVc0[l] = ZJNZVc0[l + 1];
                        ZJNZVc0[l + 1] = Wx0Jv3;
                    }
                    l--;
                }
            }
            zZCLgS++;
        }
    }
    {
        l = 1;
        while (l <= RPLCTBcO9d *(RPLCTBcO9d -1) / 2) {
            cout << "(" << dstNmjG[l][1] << "," << dstNmjG[l][2] << "," << dstNmjG[l][3] << ")" << "-" << "(" << dstNmjG[l][4] << "," << dstNmjG[l][5] << "," << dstNmjG[l][6] << ")" << "=" << fixed << setprecision (2) << ZJNZVc0[l] << endl;
            l++;
        }
    }
    return 0;
}

