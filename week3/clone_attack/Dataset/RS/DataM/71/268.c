int main () {
    int GnsNhxE, Vm049STF, N, sRDfxVXNu, B1pJ6ZVvoNAS, tuhFrQRC, OCtD3hi0lH [(24 - 11)], DoUGBCp5wH [13], e0qinmjM [13] = {(731 - 731), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    OCtD3hi0lH[0] = DoUGBCp5wH[0] = 0;
    {
        Vm049STF = 870 - 869;
        while (12 >= Vm049STF) {
            OCtD3hi0lH[Vm049STF] = OCtD3hi0lH[Vm049STF -1] + e0qinmjM[Vm049STF];
            DoUGBCp5wH[Vm049STF] = DoUGBCp5wH[Vm049STF -1] + e0qinmjM[Vm049STF];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (Vm049STF == 2)
                DoUGBCp5wH[Vm049STF]++;
            Vm049STF = Vm049STF +1;
        };
    }
    scanf ("%d", &N);
    while (N = N -1) {
        scanf ("%d%d%d", &sRDfxVXNu, &B1pJ6ZVvoNAS, &tuhFrQRC);
        if (tuhFrQRC < B1pJ6ZVvoNAS) {
            B1pJ6ZVvoNAS = B1pJ6ZVvoNAS ^ (tuhFrQRC);
            tuhFrQRC ^= B1pJ6ZVvoNAS;
            B1pJ6ZVvoNAS ^= tuhFrQRC;
        }
        GnsNhxE = 0;
        if ((sRDfxVXNu % 100 == 0 && sRDfxVXNu % 400 == 0) || (sRDfxVXNu % 100 && sRDfxVXNu % 4 == 0))
            GnsNhxE = (DoUGBCp5wH[tuhFrQRC - 1] - DoUGBCp5wH[B1pJ6ZVvoNAS -1]) % 7;
        else
            GnsNhxE = (OCtD3hi0lH[tuhFrQRC - 1] - OCtD3hi0lH[B1pJ6ZVvoNAS -1]) % 7;
        if (!GnsNhxE)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}

