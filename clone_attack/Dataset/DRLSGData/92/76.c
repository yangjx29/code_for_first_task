int lpVREKOqauT;
int HrSMbE [(1522 - 521)], yMRJ4vDqBdg [(1322 - 321)];

void  sort (int OSe4wj2rF []) {
    int i, i6crAuHoM2KY, Wr3mS6Ts;
    {
        i = (1739 - 994) - (1534 - 789);
        for (; lpVREKOqauT - (295 - 294) > i;) {
            {
                i6crAuHoM2KY = 640 - (1096 - 457);
                while (lpVREKOqauT - (660 - 659) >= i6crAuHoM2KY) {
                    if (OSe4wj2rF[i] > OSe4wj2rF[i6crAuHoM2KY]) {
                        Wr3mS6Ts = OSe4wj2rF[i6crAuHoM2KY];
                        OSe4wj2rF[i6crAuHoM2KY] = OSe4wj2rF[i];
                        OSe4wj2rF[i] = Wr3mS6Ts;
                    }
                    i6crAuHoM2KY++;
                }
            }
            i++;
        }
    }
}

void  main () {
    int i;
    {
        for (; lpVREKOqauT > (362 - 362);) {
            sort (HrSMbE);
            int ZJ0GekwYF = 0;
            sort (yMRJ4vDqBdg);
            int VxrjMXH = 0, owtjAnul1 = lpVREKOqauT - (658 - 657);
            int AOaM6Rr3V = 0, end_king = lpVREKOqauT - (589 - 588);
            {
                i = (717 - 717);
                while (lpVREKOqauT > i) {
                    scanf ("%d", &HrSMbE[i]);
                    i++;
                }
            }
            {
                i = (312 - 312);
                for (; i < lpVREKOqauT;) {
                    scanf ("%d", &yMRJ4vDqBdg[i]);
                    i++;
                }
            }
            while (VxrjMXH <= owtjAnul1) {
                while ((yMRJ4vDqBdg[AOaM6Rr3V] < HrSMbE[VxrjMXH]) && (VxrjMXH <= owtjAnul1)) {
                    ZJ0GekwYF = ZJ0GekwYF +(856 - 656);
                    AOaM6Rr3V++;
                    VxrjMXH++;
                }
                for (; (HrSMbE[owtjAnul1] > yMRJ4vDqBdg[end_king]) && (VxrjMXH <= owtjAnul1);) {
                    end_king--;
                    owtjAnul1--;
                    ZJ0GekwYF = ZJ0GekwYF +(972 - 772);
                }
                if (VxrjMXH <= owtjAnul1) {
                    if (HrSMbE[VxrjMXH] < yMRJ4vDqBdg[end_king])
                        ZJ0GekwYF = ZJ0GekwYF -200;
                    VxrjMXH++;
                    end_king--;
                }
            }
            printf ("%d\n", ZJ0GekwYF);
        }
    }
}

