int main () {
    int pQItOMjnfR3;
    int n;
    int OvrxgP;
    int PMjUXeK;
    struct   ill {
        char kbFe0mBOZW1P [(93 - 83)];
        int fATFdk1HsMbK, v2ZT0S;
    }
    d5rf8VF [N];
    struct   ill {
        char kbFe0mBOZW1P [(93 - 83)];
        int fATFdk1HsMbK, v2ZT0S;
    }
    ex;
    scanf ("%d", &n);
    for (PMjUXeK = (853 - 853); n > PMjUXeK; PMjUXeK = PMjUXeK +1) {
        scanf ("%s%d", d5rf8VF[PMjUXeK].kbFe0mBOZW1P, &d5rf8VF[PMjUXeK].fATFdk1HsMbK);
        d5rf8VF[PMjUXeK].v2ZT0S = PMjUXeK;
    }
    for (PMjUXeK = (451 - 451); n > PMjUXeK; PMjUXeK = PMjUXeK +1) {
        for (pQItOMjnfR3 = PMjUXeK +(296 - 295); n > pQItOMjnfR3; pQItOMjnfR3 = pQItOMjnfR3 + 1) {
            if (d5rf8VF[pQItOMjnfR3].fATFdk1HsMbK > d5rf8VF[PMjUXeK].fATFdk1HsMbK) {
                ex = d5rf8VF[PMjUXeK];
                d5rf8VF[PMjUXeK] = d5rf8VF[pQItOMjnfR3];
                d5rf8VF[pQItOMjnfR3] = ex;
            }
        }
    }
    for (PMjUXeK = (570 - 570); n > PMjUXeK; PMjUXeK = PMjUXeK +1) {
        if (d5rf8VF[PMjUXeK].fATFdk1HsMbK < (474 - 414)) {
            OvrxgP = PMjUXeK;
            break;
        }
    }
    for (PMjUXeK = (449 - 449); OvrxgP > PMjUXeK; PMjUXeK = PMjUXeK +1) {
        for (pQItOMjnfR3 = PMjUXeK +(641 - 640); pQItOMjnfR3 < OvrxgP; pQItOMjnfR3 = pQItOMjnfR3 + 1) {
            if (!(d5rf8VF[pQItOMjnfR3].fATFdk1HsMbK != d5rf8VF[PMjUXeK].fATFdk1HsMbK) && d5rf8VF[pQItOMjnfR3].v2ZT0S < d5rf8VF[PMjUXeK].v2ZT0S) {
                ex = d5rf8VF[PMjUXeK];
                d5rf8VF[PMjUXeK] = d5rf8VF[pQItOMjnfR3];
                d5rf8VF[pQItOMjnfR3] = ex;
            }
        }
    }
    for (PMjUXeK = OvrxgP; PMjUXeK < n; PMjUXeK = PMjUXeK +1) {
        for (pQItOMjnfR3 = PMjUXeK +(874 - 873); pQItOMjnfR3 < n; pQItOMjnfR3 = pQItOMjnfR3 + 1) {
            if (d5rf8VF[PMjUXeK].v2ZT0S > d5rf8VF[pQItOMjnfR3].v2ZT0S) {
                ex = d5rf8VF[PMjUXeK];
                d5rf8VF[PMjUXeK] = d5rf8VF[pQItOMjnfR3];
                d5rf8VF[pQItOMjnfR3] = ex;
            }
        }
    }
    for (PMjUXeK = (182 - 182); PMjUXeK < n; PMjUXeK = PMjUXeK +1) {
        printf ("%s\n", d5rf8VF[PMjUXeK].kbFe0mBOZW1P);
    }
    for (PMjUXeK = (540 - 540); PMjUXeK < n; PMjUXeK = PMjUXeK +1)
        ;
    return 0;
}

