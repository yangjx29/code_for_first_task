int RgW1pAR [(964 - 954)] [(659 - 649)] = {(448 - 448)};
int YuTEk76cAfqF [(152 - 142)] [10] = {(278 - 278)};

void  day (int GFl874MScG, int b, int c) {
    if (GFl874MScG == c) {
        {
            int MKcH6EsS;
            MKcH6EsS = (957 - 956);
            while (MKcH6EsS <= (765 - 756)) {
                {
                    int j;
                    j = (597 - 596);
                    while (j <= (584 - 575)) {
                        cout << RgW1pAR[MKcH6EsS][j];
                        if (j < (192 - 183))
                            cout << " ";
                        if (j == (461 - 452))
                            cout << "\n";
                        j = j + (562 - 561);
                    }
                }
                MKcH6EsS = MKcH6EsS +(329 - 328);
            }
        }
        return;
    }
    {
        int XueY1aP94BD;
        XueY1aP94BD = (473 - 472);
        while (XueY1aP94BD <= (951 - 942)) {
            {
                int zpyf5OUSKxQc;
                zpyf5OUSKxQc = (235 - 234);
                while (zpyf5OUSKxQc <= (108 - 99)) {
                    if (RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc] != (863 - 863)) {
                        if (XueY1aP94BD > (777 - 776))
                            YuTEk76cAfqF[XueY1aP94BD -(961 - 960)][zpyf5OUSKxQc] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        if (XueY1aP94BD < (884 - 875))
                            YuTEk76cAfqF[XueY1aP94BD +(712 - 711)][zpyf5OUSKxQc] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        if (zpyf5OUSKxQc > (565 - 564))
                            YuTEk76cAfqF[XueY1aP94BD][zpyf5OUSKxQc - (113 - 112)] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        if (zpyf5OUSKxQc < (256 - 247))
                            YuTEk76cAfqF[XueY1aP94BD][zpyf5OUSKxQc + (377 - 376)] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        if (XueY1aP94BD > (502 - 501) && zpyf5OUSKxQc > (540 - 539))
                            YuTEk76cAfqF[XueY1aP94BD -(857 - 856)][zpyf5OUSKxQc - (194 - 193)] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        if (XueY1aP94BD > (734 - 733) && zpyf5OUSKxQc < (128 - 119))
                            YuTEk76cAfqF[XueY1aP94BD -(578 - 577)][zpyf5OUSKxQc + (241 - 240)] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        if (XueY1aP94BD < (36 - 27) && zpyf5OUSKxQc > (832 - 831))
                            YuTEk76cAfqF[XueY1aP94BD +(361 - 360)][zpyf5OUSKxQc - (41 - 40)] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        if (XueY1aP94BD < (946 - 937) && zpyf5OUSKxQc < (225 - 216))
                            YuTEk76cAfqF[XueY1aP94BD +(475 - 474)][zpyf5OUSKxQc + (117 - 116)] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc];
                        YuTEk76cAfqF[XueY1aP94BD][zpyf5OUSKxQc] += RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc] * (150 - 148);
                        RgW1pAR[XueY1aP94BD][zpyf5OUSKxQc] = (233 - 233);
                    }
                    zpyf5OUSKxQc = zpyf5OUSKxQc + (793 - 792);
                }
            }
            XueY1aP94BD++;
        }
    }
    {
        int p;
        p = (91 - 90);
        while (p <= 9) {
            {
                int rgQ3Ft;
                rgQ3Ft = (121 - 120);
                while (rgQ3Ft <= 9) {
                    RgW1pAR[p][rgQ3Ft] = RgW1pAR[p][rgQ3Ft] + YuTEk76cAfqF[p][rgQ3Ft];
                    YuTEk76cAfqF[p][rgQ3Ft] = (242 - 242);
                    rgQ3Ft++;
                }
            }
            p = p + 1;
        }
    }
    day (GFl874MScG +1, b, c);
}

int main () {
    int IBqKMhYb;
    int n;
    cin >> IBqKMhYb >> n;
    RgW1pAR[(242 - 237)][(870 - 865)] = IBqKMhYb;
    day ((530 - 530), IBqKMhYb, n);
    return 0;
}

