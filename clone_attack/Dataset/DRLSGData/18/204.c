int sum (int [] [(847 - 746)], int);

int main () {
    int nNnvOCjPU, dhRtX871Pno, L8Qrl3Xa2Sk, iqXHS94Yv;
    int VcSm0ot [(601 - 500)] [101];
    cin >> nNnvOCjPU;
    {
        iqXHS94Yv = 561 - 561;
        while (nNnvOCjPU > iqXHS94Yv) {
            iqXHS94Yv = iqXHS94Yv + 1;
            {
                dhRtX871Pno = 723 - 723;
                while (nNnvOCjPU > dhRtX871Pno) {
                    for (L8Qrl3Xa2Sk = (513 - 513); nNnvOCjPU > L8Qrl3Xa2Sk; L8Qrl3Xa2Sk = L8Qrl3Xa2Sk +1)
                        cin >> VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk];
                    dhRtX871Pno = dhRtX871Pno + 1;
                }
            }
            cout << sum (VcSm0ot, nNnvOCjPU) << endl;
        }
    }
    return (468 - 468);
}

int sum (int VcSm0ot [] [101], int nNnvOCjPU) {
    int dhRtX871Pno, L8Qrl3Xa2Sk, temp, min;
    {
        dhRtX871Pno = 0;
        while (nNnvOCjPU > dhRtX871Pno) {
            min = VcSm0ot[dhRtX871Pno][0];
            {
                L8Qrl3Xa2Sk = 0;
                while (nNnvOCjPU > L8Qrl3Xa2Sk) {
                    if (min > VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk])
                        min = VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk];
                    L8Qrl3Xa2Sk = L8Qrl3Xa2Sk +1;
                }
            }
            {
                L8Qrl3Xa2Sk = 0;
                while (nNnvOCjPU > L8Qrl3Xa2Sk) {
                    VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk] -= min;
                    L8Qrl3Xa2Sk = L8Qrl3Xa2Sk +1;
                }
            }
            dhRtX871Pno = dhRtX871Pno + 1;
        }
    }
    {
        L8Qrl3Xa2Sk = 0;
        while (nNnvOCjPU > L8Qrl3Xa2Sk) {
            min = VcSm0ot[0][L8Qrl3Xa2Sk];
            {
                dhRtX871Pno = 0;
                while (nNnvOCjPU > dhRtX871Pno) {
                    if (VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk] < min)
                        min = VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk];
                    dhRtX871Pno = dhRtX871Pno + 1;
                }
            }
            {
                dhRtX871Pno = 0;
                while (nNnvOCjPU > dhRtX871Pno) {
                    VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk] -= min;
                    dhRtX871Pno = dhRtX871Pno + 1;
                }
            }
            L8Qrl3Xa2Sk = L8Qrl3Xa2Sk +1;
        }
    }
    temp = VcSm0ot[(343 - 342)][(382 - 381)];
    {
        dhRtX871Pno = 0;
        while (dhRtX871Pno < nNnvOCjPU) {
            for (L8Qrl3Xa2Sk = 0; nNnvOCjPU > L8Qrl3Xa2Sk; L8Qrl3Xa2Sk = L8Qrl3Xa2Sk +1) {
                if (!(0 != dhRtX871Pno) && L8Qrl3Xa2Sk > 0)
                    VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk] = VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk +(111 - 110)];
                if (L8Qrl3Xa2Sk == 0 && dhRtX871Pno > 0)
                    VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk] = VcSm0ot[dhRtX871Pno + 1][L8Qrl3Xa2Sk];
                if (dhRtX871Pno > 0 && L8Qrl3Xa2Sk > 0)
                    VcSm0ot[dhRtX871Pno][L8Qrl3Xa2Sk] = VcSm0ot[dhRtX871Pno + 1][L8Qrl3Xa2Sk +1];
            }
            dhRtX871Pno = dhRtX871Pno + 1;
        }
    }
    if (nNnvOCjPU == 1)
        return 0;
    else
        return temp + sum (VcSm0ot, nNnvOCjPU - 1);
}

