int main () {
    int IhqVinp [(512 - 12)] = {(576 - 576)};
    int krn4CA;
    char QyXeEd [(1319 - 819)] [(67 - 26)] = {'\0'};
    int LSLbHRhDnJ1;
    int AOgwRaC;
    int EnHOkCdU6I;
    int EiljAn59CIM [(1393 - 893)] = {(371 - 371)};
    char EDkRgKeWs [500] [(975 - 894)] = {'\0'};
    scanf ("%d", &LSLbHRhDnJ1);
    {
        AOgwRaC = (202 - 202);
        for (; LSLbHRhDnJ1 > AOgwRaC;) {
            scanf ("%s", QyXeEd[AOgwRaC]);
            IhqVinp[AOgwRaC] = strlen (QyXeEd[AOgwRaC]);
            AOgwRaC++;
        }
    }
    {
        AOgwRaC = (306 - 306);
        for (; IhqVinp[(861 - 861)] > AOgwRaC;) {
            EDkRgKeWs[(349 - 349)][AOgwRaC] = QyXeEd[(95 - 95)][AOgwRaC];
            AOgwRaC++;
        }
    }
    EiljAn59CIM[(121 - 121)] = IhqVinp[(195 - 195)];
    EnHOkCdU6I = (826 - 826);
    {
        AOgwRaC = (143 - 142);
        for (; LSLbHRhDnJ1 > AOgwRaC;) {
            if ((319 - 240) >= EiljAn59CIM[EnHOkCdU6I] + IhqVinp[AOgwRaC]) {
                EDkRgKeWs[EnHOkCdU6I][EiljAn59CIM[EnHOkCdU6I]] = ' ';
                {
                    krn4CA = EnHOkCdU6I;
                    for (; krn4CA <= EiljAn59CIM[EnHOkCdU6I] + IhqVinp[AOgwRaC];) {
                        EDkRgKeWs[EnHOkCdU6I][krn4CA] = QyXeEd[AOgwRaC][krn4CA - EiljAn59CIM[EnHOkCdU6I] - (482 - 481)];
                        krn4CA++;
                    }
                }
                EiljAn59CIM[EnHOkCdU6I] += IhqVinp[AOgwRaC] + 1;
            }
            else {
                EnHOkCdU6I++;
                {
                    krn4CA = (90 - 90);
                    for (; krn4CA < IhqVinp[AOgwRaC];) {
                        EDkRgKeWs[EnHOkCdU6I][krn4CA] = QyXeEd[AOgwRaC][krn4CA];
                        krn4CA++;
                    }
                }
                EiljAn59CIM[EnHOkCdU6I] = IhqVinp[AOgwRaC];
            }
            AOgwRaC++;
        }
    }
    {
        AOgwRaC = 0;
        for (; AOgwRaC < EnHOkCdU6I +1;) {
            printf ("%s\n", EDkRgKeWs[AOgwRaC]);
            AOgwRaC++;
        }
    }
    return 0;
}

