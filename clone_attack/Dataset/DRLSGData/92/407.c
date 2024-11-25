int OKcOiNnIP [(1456 - 432)], zqje54NrVA [1024];

int EDcYwzL (int hH2ZJO3F, int UjRVvPo7) {
    if (OKcOiNnIP[hH2ZJO3F] < zqje54NrVA[UjRVvPo7])
        return -(191 - 190);
    else {
        if (!(zqje54NrVA[UjRVvPo7] != OKcOiNnIP[hH2ZJO3F]))
            return (989 - 989);
        else
            return 1;
    }
}

int main () {
    int LxfEAUJIcS;
    for (; !(1 != scanf ("%d", &LxfEAUJIcS)) && LxfEAUJIcS != (586 - 586);) {
        int q831Ye = 0, JzRSn16xj = LxfEAUJIcS -1, IwxmrzE8L3 = 0, M2dXWjmyhe = LxfEAUJIcS -1;
        int qZ7km98 = 0;
        {
            int HqGNEdAVw2 = 0;
            for (; LxfEAUJIcS > HqGNEdAVw2;) {
                scanf ("%d", OKcOiNnIP +HqGNEdAVw2);
                ++HqGNEdAVw2;
            }
        }
        {
            int HqGNEdAVw2 = 0;
            for (; LxfEAUJIcS > HqGNEdAVw2;) {
                scanf ("%d", zqje54NrVA + HqGNEdAVw2);
                ++HqGNEdAVw2;
            }
        }
        sort (OKcOiNnIP, OKcOiNnIP +LxfEAUJIcS);
        sort (zqje54NrVA, zqje54NrVA + LxfEAUJIcS);
        while (JzRSn16xj >= q831Ye) {
            if (OKcOiNnIP[q831Ye] > zqje54NrVA[IwxmrzE8L3]) {
                qZ7km98 += EDcYwzL (q831Ye, IwxmrzE8L3);
                ++q831Ye, ++IwxmrzE8L3;
            }
            else {
                if (zqje54NrVA[IwxmrzE8L3] > OKcOiNnIP[q831Ye]) {
                    qZ7km98 += EDcYwzL (q831Ye, M2dXWjmyhe);
                    ++q831Ye, M2dXWjmyhe = M2dXWjmyhe -1;
                }
                else {
                    if (OKcOiNnIP[JzRSn16xj] > zqje54NrVA[M2dXWjmyhe]) {
                        qZ7km98 += EDcYwzL (JzRSn16xj, M2dXWjmyhe);
                        --JzRSn16xj, M2dXWjmyhe = M2dXWjmyhe -1;
                    }
                    else {
                        if (OKcOiNnIP[JzRSn16xj] <= zqje54NrVA[M2dXWjmyhe]) {
                            qZ7km98 += EDcYwzL (q831Ye, M2dXWjmyhe);
                            ++q831Ye, --M2dXWjmyhe;
                        }
                    }
                }
            }
        }
        printf ("%d\n", qZ7km98 * 200);
    }
}

