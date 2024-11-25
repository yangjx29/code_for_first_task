int WHknTq3 (int, int);

int main () {
    int QPJ4zXub3aOw [(427 - 417)] [(638 - 628)], KcPtzOIGBfH, J4no8SGZ;
    int xwv2PzAVS6 [10], xCEh1Qku, pvhN7awjuPAY;
    {
        xCEh1Qku = 0;
        for (; xCEh1Qku < (836 - 831);) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                pvhN7awjuPAY = 0;
                for (; 5 > pvhN7awjuPAY;) {
                    scanf ("%d", &QPJ4zXub3aOw[xCEh1Qku][pvhN7awjuPAY]);
                    pvhN7awjuPAY++;
                }
            }
            xCEh1Qku++;
        }
    }
    scanf ("%d %d", &J4no8SGZ, &KcPtzOIGBfH);
    if (WHknTq3 (J4no8SGZ, KcPtzOIGBfH)) {
        {
            xCEh1Qku = 0;
            while (xCEh1Qku < 5) {
                xwv2PzAVS6[xCEh1Qku] = QPJ4zXub3aOw[KcPtzOIGBfH][xCEh1Qku];
                QPJ4zXub3aOw[KcPtzOIGBfH][xCEh1Qku] = QPJ4zXub3aOw[J4no8SGZ][xCEh1Qku];
                QPJ4zXub3aOw[J4no8SGZ][xCEh1Qku] = xwv2PzAVS6[xCEh1Qku];
                xCEh1Qku++;
            }
        }
        {
            xCEh1Qku = 0;
            for (; xCEh1Qku < 5;) {
                {
                    pvhN7awjuPAY = 0;
                    for (; 5 > pvhN7awjuPAY;) {
                        printf ("%d", QPJ4zXub3aOw[xCEh1Qku][pvhN7awjuPAY]);
                        if (!(4 != pvhN7awjuPAY))
                            ;
                        else
                            ;
                        pvhN7awjuPAY++;
                    }
                }
                xCEh1Qku++;
            }
        }
    }
    else
        ;
    return 0;
}

int WHknTq3 (int J4no8SGZ, int KcPtzOIGBfH) {
    if (KcPtzOIGBfH > 4 || J4no8SGZ > 4)
        return 0;
    else
        return 1;
}

