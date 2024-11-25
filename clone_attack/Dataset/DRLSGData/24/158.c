struct   word {
    char FP3wFeMIai [(903 - 863)];
    int Y3Y1fy5;
};
int main () {
    int Cu5eDg3CM;
    int i;
    int y;
    struct   word VHJjSeFX [(886 - 686)] = {(557 - 557)};
    int lvfRhuUojT;
    int s1nevOk50;
    int bfSn0irEwA;
    y = (81 - 81);
    Cu5eDg3CM = VHJjSeFX[(80 - 80)].Y3Y1fy5;
    scanf ("%d", &s1nevOk50);
    lvfRhuUojT = VHJjSeFX[(140 - 140)].Y3Y1fy5;
    {
        i = (912 - 912);
        for (; s1nevOk50 > i;) {
            scanf ("%s", VHJjSeFX[i].FP3wFeMIai);
            VHJjSeFX[i].Y3Y1fy5 = strlen (VHJjSeFX[i].FP3wFeMIai);
            i = i + (394 - 393);
        }
    }
    bfSn0irEwA = (48 - 48);
    {
        i = 0;
        for (; s1nevOk50 > i;) {
            if (VHJjSeFX[i].Y3Y1fy5 > Cu5eDg3CM) {
                Cu5eDg3CM = VHJjSeFX[i].Y3Y1fy5;
                bfSn0irEwA = i;
            }
            if (lvfRhuUojT > VHJjSeFX[i].Y3Y1fy5) {
                lvfRhuUojT = VHJjSeFX[i].Y3Y1fy5;
                y = i;
            }
            i = i + (693 - 692);
        }
    }
    printf ("%s\n%s", VHJjSeFX[bfSn0irEwA].FP3wFeMIai, VHJjSeFX[y].FP3wFeMIai);
    return 0;
}

