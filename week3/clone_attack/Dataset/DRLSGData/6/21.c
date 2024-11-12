void  main () {
    int VMhPkxDYa;
    int Mj9PdEBFASoR;
    int Tn7GEe [110] [110];
    int cvSJlne4Rs;
    int WUKLzVRdEnG;
    int BpSnF8WB2;
    int F4iaNj;
    int kijMLPZyhEkS;
    WUKLzVRdEnG = 0;
    scanf ("%d", &BpSnF8WB2);
    {
        kijMLPZyhEkS = 1;
        for (; BpSnF8WB2 >= kijMLPZyhEkS;) {
            scanf ("%d %d", &F4iaNj, &cvSJlne4Rs);
            {
                Mj9PdEBFASoR = 1;
                for (; Mj9PdEBFASoR <= F4iaNj;) {
                    {
                        VMhPkxDYa = 1;
                        for (; cvSJlne4Rs >= VMhPkxDYa;) {
                            scanf ("%d", &Tn7GEe[Mj9PdEBFASoR][VMhPkxDYa]);
                            VMhPkxDYa++;
                        }
                    }
                    Mj9PdEBFASoR++;
                }
            }
            if (F4iaNj == 1)
                for (Mj9PdEBFASoR = 1; Mj9PdEBFASoR <= cvSJlne4Rs; Mj9PdEBFASoR++)
                    WUKLzVRdEnG = WUKLzVRdEnG +Tn7GEe[1][Mj9PdEBFASoR];
            else {
                if (cvSJlne4Rs == 1)
                    for (Mj9PdEBFASoR = kijMLPZyhEkS; Mj9PdEBFASoR <= F4iaNj; Mj9PdEBFASoR++)
                        WUKLzVRdEnG = WUKLzVRdEnG +Tn7GEe[Mj9PdEBFASoR][1];
                else {
                    {
                        Mj9PdEBFASoR = 1;
                        for (; Mj9PdEBFASoR <= F4iaNj;) {
                            WUKLzVRdEnG = WUKLzVRdEnG +Tn7GEe[Mj9PdEBFASoR][1] + Tn7GEe[Mj9PdEBFASoR][cvSJlne4Rs];
                            Tn7GEe[Mj9PdEBFASoR][1] = 0;
                            Tn7GEe[Mj9PdEBFASoR][cvSJlne4Rs] = 0;
                            Mj9PdEBFASoR++;
                        }
                    }
                    {
                        Mj9PdEBFASoR = 2;
                        for (; Mj9PdEBFASoR < cvSJlne4Rs;) {
                            WUKLzVRdEnG = WUKLzVRdEnG +Tn7GEe[1][Mj9PdEBFASoR] + Tn7GEe[F4iaNj][Mj9PdEBFASoR];
                            Tn7GEe[1][Mj9PdEBFASoR] = 0;
                            Tn7GEe[F4iaNj][Mj9PdEBFASoR] = 0;
                            Mj9PdEBFASoR++;
                        }
                    }
                }
            }
            printf ("%d\n", WUKLzVRdEnG);
            WUKLzVRdEnG = 0;
            kijMLPZyhEkS++;
        }
    }
}

