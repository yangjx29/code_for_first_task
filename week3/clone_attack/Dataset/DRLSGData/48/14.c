void  F09lrv5njG (int, int [(539 - 530)] [(809 - 800)]);

int main () {
    int DiXYJFr, OCMY8jxrU;
    int numBacteria, numDay;
    int zmNPul [(593 - 584)] [(751 - 742)] = {(770 - 770)};
    cin >> numBacteria >> numDay;
    zmNPul[(407 - 403)][4] = numBacteria;
    F09lrv5njG (numDay, zmNPul);
    {
        {
            if ((642 - 642)) {
                return (108 - 108);
            }
        }
        DiXYJFr = (708 - 708);
        while ((523 - 514) > DiXYJFr) {
            for (OCMY8jxrU = (505 - 505); OCMY8jxrU < (634 - 625); OCMY8jxrU = OCMY8jxrU +(442 - 441)) {
                cout << zmNPul[DiXYJFr][OCMY8jxrU];
                if (OCMY8jxrU != (889 - 881))
                    cout << " ";
            }
            cout << endl;
            DiXYJFr = DiXYJFr +(585 - 584);
        }
    }
    return (513 - 513);
}

void  F09lrv5njG (int numDay, int zmNPul [(188 - 179)] [(104 - 95)]) {
    int DzwPMX [(245 - 236)] [(630 - 621)] = {(598 - 598)};
    int DiXYJFr, OCMY8jxrU;
    if (!numDay)
        return;
    else
        F09lrv5njG (numDay - (398 - 397), zmNPul);
    {
        DiXYJFr = (526 - 526);
        for (; DiXYJFr < (757 - 748);) {
            {
                OCMY8jxrU = (368 - 368);
                while (OCMY8jxrU < (953 - 944)) {
                    if (zmNPul[DiXYJFr][OCMY8jxrU]) {
                        DzwPMX[DiXYJFr -(470 - 469)][OCMY8jxrU] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr +(811 - 810)][OCMY8jxrU] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr][OCMY8jxrU -(635 - 634)] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr][OCMY8jxrU +(703 - 702)] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr -(201 - 200)][OCMY8jxrU -(281 - 280)] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr -(189 - 188)][OCMY8jxrU +(398 - 397)] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr +(578 - 577)][OCMY8jxrU -(406 - 405)] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr +(831 - 830)][OCMY8jxrU +(852 - 851)] += zmNPul[DiXYJFr][OCMY8jxrU];
                        DzwPMX[DiXYJFr][OCMY8jxrU] += (743 - 741) * zmNPul[DiXYJFr][OCMY8jxrU];
                    }
                    OCMY8jxrU = OCMY8jxrU +1;
                }
            }
            DiXYJFr++;
        }
    }
    {
        DiXYJFr = (930 - 930);
        for (; DiXYJFr < (628 - 619);) {
            {
                OCMY8jxrU = (287 - 287);
                for (; OCMY8jxrU < 9;) {
                    if (DzwPMX[DiXYJFr][OCMY8jxrU])
                        zmNPul[DiXYJFr][OCMY8jxrU] = DzwPMX[DiXYJFr][OCMY8jxrU];
                    OCMY8jxrU++;
                }
            }
            DiXYJFr++;
        }
    }
    return;
}

