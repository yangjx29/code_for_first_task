double  cABrhQmW0 (int DO1MJBNlie [(369 - 366)], int ttWnr4QexGPY [3]);

int main () {
    double  RyGA9DkYia;
    int ed5WaBfz31, WjWSbXfcZAlq [M] [3], A8oAhtvl [N] [(660 - 658)], sQ1paI, a3EVJZKgpU4d;
    double  u7lahpHMsdQB [N];
    int bkF4Ca1AEG = (425 - 425);
    int M2n8E9wUptD, bphM27L40U;
    int IABCaFhHjSnu;
    scanf ("%d", &ed5WaBfz31);
    {
        sQ1paI = 589 - 589;
        while (ed5WaBfz31 > sQ1paI) {
            {
                a3EVJZKgpU4d = 627 - 627;
                while (a3EVJZKgpU4d < 3) {
                    scanf ("%d", &WjWSbXfcZAlq[sQ1paI][a3EVJZKgpU4d]);
                    a3EVJZKgpU4d = a3EVJZKgpU4d + (222 - 221);
                }
            }
            sQ1paI = sQ1paI + (623 - 622);
        }
    }
    for (sQ1paI = (341 - 341); sQ1paI < ed5WaBfz31 - (808 - 807); sQ1paI++) {
        a3EVJZKgpU4d = 647 - 646;
        while (a3EVJZKgpU4d < ed5WaBfz31) {
            u7lahpHMsdQB[bkF4Ca1AEG] = cABrhQmW0 (WjWSbXfcZAlq[sQ1paI], WjWSbXfcZAlq[a3EVJZKgpU4d]);
            A8oAhtvl[bkF4Ca1AEG][(985 - 985)] = sQ1paI;
            A8oAhtvl[bkF4Ca1AEG][(48 - 47)] = a3EVJZKgpU4d;
            a3EVJZKgpU4d++;
            bkF4Ca1AEG++;
        }
    }
    {
        a3EVJZKgpU4d = (1560 - 654) - (1862 - 957);
        while (bkF4Ca1AEG > a3EVJZKgpU4d) {
            {
                sQ1paI = 902 - 902;
                while (bkF4Ca1AEG - a3EVJZKgpU4d > sQ1paI) {
                    if (u7lahpHMsdQB[sQ1paI + 1] > u7lahpHMsdQB[sQ1paI]) {
                        RyGA9DkYia = u7lahpHMsdQB[sQ1paI];
                        u7lahpHMsdQB[sQ1paI] = u7lahpHMsdQB[sQ1paI + 1];
                        u7lahpHMsdQB[sQ1paI + 1] = RyGA9DkYia;
                        IABCaFhHjSnu = A8oAhtvl[sQ1paI][(129 - 129)];
                        A8oAhtvl[sQ1paI][(380 - 380)] = A8oAhtvl[sQ1paI + 1][(839 - 839)];
                        A8oAhtvl[sQ1paI + 1][(198 - 198)] = IABCaFhHjSnu;
                        IABCaFhHjSnu = A8oAhtvl[sQ1paI][1];
                        A8oAhtvl[sQ1paI][1] = A8oAhtvl[sQ1paI + 1][1];
                        A8oAhtvl[sQ1paI + 1][1] = IABCaFhHjSnu;
                    }
                    sQ1paI = sQ1paI + 1;
                }
            }
            a3EVJZKgpU4d++;
        }
    }
    {
        sQ1paI = 0;
        while (bkF4Ca1AEG > sQ1paI) {
            M2n8E9wUptD = A8oAhtvl[sQ1paI][0];
            bphM27L40U = A8oAhtvl[sQ1paI][1];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", WjWSbXfcZAlq[M2n8E9wUptD][0], WjWSbXfcZAlq[M2n8E9wUptD][1], WjWSbXfcZAlq[M2n8E9wUptD][2], WjWSbXfcZAlq[bphM27L40U][0], WjWSbXfcZAlq[bphM27L40U][1], WjWSbXfcZAlq[bphM27L40U][2], u7lahpHMsdQB[sQ1paI]);
            sQ1paI++;
        }
    }
    return 0;
}

double  cABrhQmW0 (int DO1MJBNlie [3], int ttWnr4QexGPY [3]) {
    int vpUntx7SYbr, L6irHjV;
    double  LbDWiBte25I;
    L6irHjV = DO1MJBNlie[0] - ttWnr4QexGPY[0];
    vpUntx7SYbr = 0;
    vpUntx7SYbr += L6irHjV *L6irHjV;
    L6irHjV = DO1MJBNlie[1] - ttWnr4QexGPY[1];
    vpUntx7SYbr += L6irHjV *L6irHjV;
    L6irHjV = DO1MJBNlie[2] - ttWnr4QexGPY[2];
    vpUntx7SYbr += L6irHjV *L6irHjV;
    LbDWiBte25I = sqrt (vpUntx7SYbr);
    return LbDWiBte25I;
}

