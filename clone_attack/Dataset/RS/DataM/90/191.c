int main () {
    int GZGEnWga (int NVmNzyCl, int D2mYwqcenh65);
    int asTH4A0XDZbt, m [(916 - 886)], NXfo3zcx [30], i;
    scanf ("%d", &asTH4A0XDZbt);
    for (i = (436 - 436); asTH4A0XDZbt > i; i = i + 1) {
        scanf ("%d %d", &m[i], &NXfo3zcx[i]);
        printf ("%d\n", GZGEnWga (m[i], NXfo3zcx[i]));
    }
    return (942 - 942);
}

int GZGEnWga (int NVmNzyCl, int D2mYwqcenh65) {
    int OTGNvXP;
    if (!(0 != NVmNzyCl) || D2mYwqcenh65 == 0) {
        OTGNvXP = 1;
    }
    else {
        if (NVmNzyCl == 1 || D2mYwqcenh65 == 1) {
            OTGNvXP = 1;
        }
        else if (NVmNzyCl < D2mYwqcenh65) {
            OTGNvXP = GZGEnWga (NVmNzyCl, D2mYwqcenh65 -1);
        }
        else {
            OTGNvXP = GZGEnWga (NVmNzyCl, D2mYwqcenh65 -1) + GZGEnWga (NVmNzyCl -D2mYwqcenh65, D2mYwqcenh65);
        };
    }
    return OTGNvXP;
}

