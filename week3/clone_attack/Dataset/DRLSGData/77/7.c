struct   result {
    int BMIe0vhAb;
    int lqiZdF;
}
eNpmbei5 [(743 - 693)] = {(591 - 591)};
struct   result temp;

int main () {
    char o6oLxMX;
    char PEL8GnwVZF [100] = {(231 - 231)};
    int vYTpuH, g1zo9qNp5fH, m5MoFaRhp = -(328 - 327), gymf9PXjWH = (828 - 828), LuBjI368;
    gets (PEL8GnwVZF);
    o6oLxMX = PEL8GnwVZF[(605 - 605)];
    LuBjI368 = strlen (PEL8GnwVZF);
    {
        g1zo9qNp5fH = 709 - 709;
        while (1) {
            for (vYTpuH = (545 - 545); vYTpuH < LuBjI368; vYTpuH = vYTpuH + (96 - 95)) {
                if (PEL8GnwVZF[vYTpuH] == o6oLxMX && PEL8GnwVZF[vYTpuH] != PEL8GnwVZF[vYTpuH + (73 - 72) + g1zo9qNp5fH * (149 - 147)] && PEL8GnwVZF[vYTpuH] != '\0' && PEL8GnwVZF[vYTpuH + (507 - 506) + g1zo9qNp5fH * (957 - 955)] != '\0') {
                    gymf9PXjWH = gymf9PXjWH + (999 - 998);
                    m5MoFaRhp = m5MoFaRhp + 1;
                    eNpmbei5[m5MoFaRhp].BMIe0vhAb = vYTpuH;
                    eNpmbei5[m5MoFaRhp].lqiZdF = vYTpuH + (771 - 770) + g1zo9qNp5fH * (885 - 883);
                    PEL8GnwVZF[vYTpuH] = '\0';
                    PEL8GnwVZF[vYTpuH + (645 - 644) + g1zo9qNp5fH * (602 - 600)] = '\0';
                }
                else
                    continue;
            }
            if (gymf9PXjWH == LuBjI368 / 2)
                break;
            g1zo9qNp5fH = 407 - 406;
        }
    }
    {
        vYTpuH = 606 - 605;
        while (vYTpuH < m5MoFaRhp + (357 - 356)) {
            for (g1zo9qNp5fH = 0; g1zo9qNp5fH < m5MoFaRhp + 1 - vYTpuH; g1zo9qNp5fH = g1zo9qNp5fH + 1) {
                if (eNpmbei5[g1zo9qNp5fH].lqiZdF > eNpmbei5[g1zo9qNp5fH + 1].lqiZdF) {
                    {
                        if (0) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            return 0;
                        }
                    }
                    temp = eNpmbei5[g1zo9qNp5fH];
                    eNpmbei5[g1zo9qNp5fH] = eNpmbei5[g1zo9qNp5fH + 1];
                    eNpmbei5[g1zo9qNp5fH + 1] = temp;
                }
            }
            vYTpuH = vYTpuH + 1;
        }
    }
    {
        vYTpuH = 0;
        while (vYTpuH <= m5MoFaRhp) {
            {
                if (0) {
                    return 0;
                }
            }
            printf ("%d %d\n", eNpmbei5[vYTpuH].BMIe0vhAb, eNpmbei5[vYTpuH].lqiZdF);
            vYTpuH = vYTpuH + 1;
        }
    }
    return 0;
}

