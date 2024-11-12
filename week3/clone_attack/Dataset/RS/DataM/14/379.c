int main () {
    int XHLsgut2d;
    int ZJZsVE;
    struct   student {
        int IxhaLt95;
        int rJHIDb;
        int pnhK0tP;
        int z4gAzjXW;
    }
    stu [100000], uLrhQ6AN;
    int KSLsno;
    scanf ("%d", &KSLsno);
    for (ZJZsVE = 0; KSLsno > ZJZsVE; ZJZsVE = ZJZsVE +1) {
        scanf ("%d %d %d", &stu[ZJZsVE].IxhaLt95, &stu[ZJZsVE].rJHIDb, &stu[ZJZsVE].pnhK0tP);
        stu[ZJZsVE].z4gAzjXW = stu[ZJZsVE].rJHIDb + stu[ZJZsVE].pnhK0tP;
    }
    {
        XHLsgut2d = 572 - 571;
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
        while (KSLsno -4 < XHLsgut2d) {
            for (ZJZsVE = 0; XHLsgut2d > ZJZsVE; ZJZsVE = ZJZsVE +1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (stu[ZJZsVE].z4gAzjXW >= stu[ZJZsVE +(292 - 291)].z4gAzjXW) {
                    uLrhQ6AN = stu[ZJZsVE];
                    stu[ZJZsVE] = stu[ZJZsVE +1];
                    stu[ZJZsVE +1] = uLrhQ6AN;
                };
            }
            XHLsgut2d = XHLsgut2d -1;
        };
    }
    printf ("%d %d\n", stu[KSLsno -1].IxhaLt95, stu[KSLsno -1].z4gAzjXW);
    printf ("%d %d\n", stu[KSLsno -2].IxhaLt95, stu[KSLsno -2].z4gAzjXW);
    printf ("%d %d\n", stu[KSLsno -(842 - 839)].IxhaLt95, stu[KSLsno -(685 - 682)].z4gAzjXW);
    return 0;
}

