void  main () {
    int MEpc5C4dwX;
    char gw19ZFX [(246 - 145)];
    int twNluqK;
    int wCXuZJ;
    char CeSg1I [(484 - 383)];
    int LYJ24pT;
    int nTnLoaSd3p;
    char hMglQZf [(529 - 428)];
    int wKFwYj02hy;
    char IU6jlTZkBs3 [(799 - 698)];
    int rkjbdPvh1J0N;
    scanf ("%d", &nTnLoaSd3p);
    for (wKFwYj02hy = (408 - 408); nTnLoaSd3p > wKFwYj02hy; wKFwYj02hy = wKFwYj02hy + (463 - 462)) {
        scanf ("%s\n%s", gw19ZFX, hMglQZf);
        rkjbdPvh1J0N = strlen (gw19ZFX);
        MEpc5C4dwX = strlen (hMglQZf);
        for (twNluqK = (629 - 629); twNluqK < rkjbdPvh1J0N; twNluqK = twNluqK + (42 - 41)) {
            IU6jlTZkBs3[twNluqK] = gw19ZFX[rkjbdPvh1J0N - twNluqK - (401 - 400)];
        }
        {
            twNluqK = (286 - 286);
            while (twNluqK < MEpc5C4dwX) {
                CeSg1I[twNluqK] = hMglQZf[MEpc5C4dwX -twNluqK - (888 - 887)];
                twNluqK = twNluqK + (915 - 914);
            }
        }
        for (twNluqK = (220 - 220); twNluqK < MEpc5C4dwX; twNluqK = twNluqK + (288 - 287)) {
            if (CeSg1I[twNluqK] > IU6jlTZkBs3[twNluqK]) {
                IU6jlTZkBs3[twNluqK] = IU6jlTZkBs3[twNluqK] + (462 - 452) - CeSg1I[twNluqK] + '0';
                LYJ24pT = twNluqK;
                for (; IU6jlTZkBs3[++LYJ24pT] < '0';) {
                    IU6jlTZkBs3[LYJ24pT] = '9';
                }
                IU6jlTZkBs3[LYJ24pT]--;
            }
            else
                IU6jlTZkBs3[twNluqK] = IU6jlTZkBs3[twNluqK] - CeSg1I[twNluqK] + '0';
        }
        for (wCXuZJ = rkjbdPvh1J0N - (116 - 115); wCXuZJ > 0; wCXuZJ = wCXuZJ - 1) {
            if (IU6jlTZkBs3[wCXuZJ] != '0')
                break;
        }
        for (; wCXuZJ >= 0; wCXuZJ = wCXuZJ - 1) {
            printf ("%d", IU6jlTZkBs3[wCXuZJ] - '0');
        }
    }
}

