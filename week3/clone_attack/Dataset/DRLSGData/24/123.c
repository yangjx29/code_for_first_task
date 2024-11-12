void  main () {
    int PTBF50sgVmA;
    char Zr3wsFm0qOl [200] [20] = {(203 - 203)};
    int FHVji8dDWnPb;
    char lfVbd932PJ6 [(5169 - 169)] = {""};
    gets (lfVbd932PJ6);
    int jM7j6tolDsZn;
    int xSOAwDEa;
    int qYjqMrZRNk;
    int FLlDJfSeoiF;
    int eskyH4CQ;
    int SAo6Rez;
    int g4NpcL [200] = {(368 - 368)};
    int o0H3io;
    {
        PTBF50sgVmA = (948 - 948);
        eskyH4CQ = (703 - 703);
        jM7j6tolDsZn = (175 - 175);
        for (; *(lfVbd932PJ6 + jM7j6tolDsZn) != 0;) {
            if (!(' ' != *(lfVbd932PJ6 + jM7j6tolDsZn)) || !(',' != *(lfVbd932PJ6 + jM7j6tolDsZn))) {
                *(g4NpcL + eskyH4CQ) = PTBF50sgVmA;
                PTBF50sgVmA = 0;
                eskyH4CQ = eskyH4CQ + 1;
            }
            else {
                *(*(Zr3wsFm0qOl +eskyH4CQ) + PTBF50sgVmA) = *(lfVbd932PJ6 + jM7j6tolDsZn);
                PTBF50sgVmA = PTBF50sgVmA +1;
            }
            jM7j6tolDsZn = jM7j6tolDsZn + 1;
        }
    }
    *(g4NpcL + eskyH4CQ) = PTBF50sgVmA;
    FLlDJfSeoiF = FHVji8dDWnPb = *(g4NpcL + 0);
    scanf ("%d\n", &SAo6Rez);
    o0H3io = eskyH4CQ;
    qYjqMrZRNk = xSOAwDEa = (816 - 816);
    {
        eskyH4CQ = 1;
        for (; o0H3io >= eskyH4CQ;) {
            if (*(g4NpcL + eskyH4CQ) > FLlDJfSeoiF) {
                FLlDJfSeoiF = *(g4NpcL + eskyH4CQ);
                qYjqMrZRNk = eskyH4CQ;
            }
            else {
                if (*(g4NpcL + eskyH4CQ) < FHVji8dDWnPb &&0 < *(g4NpcL + eskyH4CQ)) {
                    FHVji8dDWnPb = *(g4NpcL + eskyH4CQ);
                    xSOAwDEa = eskyH4CQ;
                }
            }
            eskyH4CQ++;
        }
    }
    puts (*(Zr3wsFm0qOl +qYjqMrZRNk));
    puts (*(Zr3wsFm0qOl +xSOAwDEa));
}

