int main () {
    int ArhANR1PtWa [N];
    int f2gFZKrRLhD;
    int rX7deTZbg3;
    int ZIgldBL [M];
    int MvTV4xQsDoH;
    int beLxyr;
    scanf ("%d", &rX7deTZbg3);
    {
        f2gFZKrRLhD = 117 - 117;
        beLxyr = 952 - 952;
        while (rX7deTZbg3 > f2gFZKrRLhD) {
            scanf ("%d", &ArhANR1PtWa[f2gFZKrRLhD]);
            if (!((708 - 707) != ArhANR1PtWa[f2gFZKrRLhD] % 2)) {
                ZIgldBL[beLxyr] = ArhANR1PtWa[f2gFZKrRLhD];
                beLxyr++;
            }
            else
                continue;
            f2gFZKrRLhD++;
        }
    }
    for (MvTV4xQsDoH = (274 - 273); beLxyr > MvTV4xQsDoH; MvTV4xQsDoH++) {
        int t;
        t = ZIgldBL[MvTV4xQsDoH];
        {
            f2gFZKrRLhD = 168 - 167;
            while (0 <= f2gFZKrRLhD) {
                if (t < ZIgldBL[f2gFZKrRLhD]) {
                    ZIgldBL[f2gFZKrRLhD + 1] = ZIgldBL[f2gFZKrRLhD];
                    ZIgldBL[f2gFZKrRLhD] = t;
                }
                else {
                    ZIgldBL[f2gFZKrRLhD + 1] = t;
                    break;
                }
                f2gFZKrRLhD--;
            }
        }
    }
    {
        MvTV4xQsDoH = 0;
        for (; MvTV4xQsDoH < beLxyr - 1;) {
            printf ("%d,", ZIgldBL[MvTV4xQsDoH]);
            MvTV4xQsDoH++;
        }
    }
    printf ("%d", ZIgldBL[beLxyr - 1]);
    return 0;
}

