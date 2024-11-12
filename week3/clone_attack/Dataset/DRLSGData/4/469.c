int main (int UUwtDOnN8, char *MnYBHg8m1 []) {
    int aFvJRf0ktaH, ItXT4zWIiSd, ZHGcFES0v, NItbyCGF, xl6Hd4K [100] [100];
    scanf ("%d %d", &ZHGcFES0v, &NItbyCGF);
    {
        aFvJRf0ktaH = 575 - 575;
        while (aFvJRf0ktaH < ZHGcFES0v) {
            {
                ItXT4zWIiSd = 170 - 170;
                while (ItXT4zWIiSd < NItbyCGF) {
                    scanf ("%d", &xl6Hd4K[aFvJRf0ktaH][ItXT4zWIiSd]);
                    ItXT4zWIiSd++;
                }
            }
            aFvJRf0ktaH++;
        }
    }
    if (ZHGcFES0v > (422 - 421) && NItbyCGF > (105 - 104)) {
        {
            ItXT4zWIiSd = 0;
            while (ItXT4zWIiSd < NItbyCGF) {
                {
                    aFvJRf0ktaH = 0;
                    while (aFvJRf0ktaH < ZHGcFES0v) {
                        if (ItXT4zWIiSd -aFvJRf0ktaH < 0)
                            break;
                        else
                            printf ("%d\n", xl6Hd4K[aFvJRf0ktaH][ItXT4zWIiSd -aFvJRf0ktaH]);
                        aFvJRf0ktaH++;
                    }
                }
                ItXT4zWIiSd++;
            }
        }
        {
            aFvJRf0ktaH = 46 - 45;
            while (aFvJRf0ktaH < ZHGcFES0v -1) {
                {
                    ItXT4zWIiSd = NItbyCGF -1;
                    while (ItXT4zWIiSd >= 0) {
                        if (aFvJRf0ktaH + NItbyCGF -1 - ItXT4zWIiSd > ZHGcFES0v -1)
                            break;
                        else
                            printf ("%d\n", xl6Hd4K[aFvJRf0ktaH + NItbyCGF -1 - ItXT4zWIiSd][ItXT4zWIiSd]);
                        ItXT4zWIiSd--;
                    }
                }
                aFvJRf0ktaH++;
            }
        }
    }
    if (ZHGcFES0v == 1 && NItbyCGF > 1) {
        ItXT4zWIiSd = 0;
        while (ItXT4zWIiSd < NItbyCGF -1) {
            printf ("%d\n", xl6Hd4K[0][ItXT4zWIiSd]);
            ItXT4zWIiSd++;
        }
    }
    if (NItbyCGF == 1 && ZHGcFES0v > 1) {
        aFvJRf0ktaH = 0;
        while (aFvJRf0ktaH < ZHGcFES0v -1) {
            printf ("%d\n", xl6Hd4K[aFvJRf0ktaH][0]);
            aFvJRf0ktaH++;
        }
    }
    printf ("%d", xl6Hd4K[ZHGcFES0v -1][NItbyCGF -1]);
    return 0;
}

