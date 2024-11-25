int njKgh6l4MDk (int lif2HFT, int KGl75R, int MTtBsc, int GSCfsMQ, int r7r16tSKiQn) {
    if (lif2HFT > KGl75R &&lif2HFT > MTtBsc &&lif2HFT > GSCfsMQ &&lif2HFT > r7r16tSKiQn)
        return lif2HFT;
    else if (KGl75R > lif2HFT && KGl75R > MTtBsc &&KGl75R > GSCfsMQ &&KGl75R > r7r16tSKiQn)
        return KGl75R;
    else if (MTtBsc > lif2HFT && MTtBsc > KGl75R &&MTtBsc > GSCfsMQ &&MTtBsc > r7r16tSKiQn)
        return MTtBsc;
    else if (GSCfsMQ > lif2HFT && GSCfsMQ > KGl75R &&GSCfsMQ > MTtBsc &&GSCfsMQ > r7r16tSKiQn)
        return GSCfsMQ;
    else
        return r7r16tSKiQn;
}

int b61H5UWZ89CP (int BElbwp3, int FfsaIid1c3CY, int fqDiFcf, int uN4dD2, int Je9i1oZD) {
    if (BElbwp3 < FfsaIid1c3CY &&BElbwp3 < fqDiFcf && BElbwp3 < uN4dD2 && BElbwp3 < Je9i1oZD)
        return BElbwp3;
    else if (FfsaIid1c3CY < BElbwp3 &&FfsaIid1c3CY < fqDiFcf && uN4dD2 > FfsaIid1c3CY &&Je9i1oZD > FfsaIid1c3CY)
        return FfsaIid1c3CY;
    else if (fqDiFcf < BElbwp3 &&fqDiFcf < FfsaIid1c3CY &&fqDiFcf < uN4dD2 && fqDiFcf < Je9i1oZD)
        return fqDiFcf;
    else if (uN4dD2 < FfsaIid1c3CY &&uN4dD2 < fqDiFcf && uN4dD2 < BElbwp3 &&uN4dD2 < Je9i1oZD)
        return uN4dD2;
    else
        return Je9i1oZD;
}

int main () {
    int a [(971 - 966)] [(854 - 849)], GGVzbEUd, j, Lf8eU1 = (109 - 109);
    {
        GGVzbEUd = (1263 - 280) - 983;
        while (GGVzbEUd < (510 - 505)) {
            cin >> a[GGVzbEUd][(574 - 574)] >> a[GGVzbEUd][(892 - 891)] >> a[GGVzbEUd][(89 - 87)] >> a[GGVzbEUd][(699 - 696)] >> a[GGVzbEUd][(499 - 495)];
            GGVzbEUd = GGVzbEUd +1;
        }
    }
    {
        GGVzbEUd = 67 - 67;
        while (GGVzbEUd < (850 - 845)) {
            j = 72 - 72;
            while (5 > j) {
                if (a[GGVzbEUd][j] == njKgh6l4MDk (a[GGVzbEUd][(767 - 767)], a[GGVzbEUd][(611 - 610)], a[GGVzbEUd][(183 - 181)], a[GGVzbEUd][(163 - 160)], a[GGVzbEUd][(670 - 666)]) && a[GGVzbEUd][j] == b61H5UWZ89CP (a[(925 - 925)][j], a[(917 - 916)][j], a[(588 - 586)][j], a[(718 - 715)][j], a[(878 - 874)][j])) {
                    cout << GGVzbEUd +(17 - 16) << ' ' << j + (832 - 831) << ' ' << a[GGVzbEUd][j] << endl;
                    Lf8eU1 = Lf8eU1 +1;
                }
                j++;
            }
            GGVzbEUd++;
        }
    }
    if (Lf8eU1 == (995 - 995))
        cout << "not found" << endl;
    return (972 - 972);
}

