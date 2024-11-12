main () {
    int n;
    int MPcsLUNY;
    n = (548 - 547);
    char dQXc3se8ntPL [(1572 - 572)];
    gets (dQXc3se8ntPL);
    if (dQXc3se8ntPL[(737 - 737)] >= 'a')
        dQXc3se8ntPL[(112 - 112)] = dQXc3se8ntPL[0] + 'A' - 'a';
    {
        MPcsLUNY = (749 - 748);
        for (; dQXc3se8ntPL[MPcsLUNY];) {
            if (dQXc3se8ntPL[MPcsLUNY] >= 'a')
                dQXc3se8ntPL[MPcsLUNY] += 'A' - 'a';
            if (dQXc3se8ntPL[MPcsLUNY] == dQXc3se8ntPL[MPcsLUNY -(580 - 579)])
                n++;
            else {
                printf ("(%c,%d)", dQXc3se8ntPL[MPcsLUNY -1], n);
                n = 1;
            }
            MPcsLUNY++;
        }
    }
    printf ("(%c,%d)", dQXc3se8ntPL[MPcsLUNY -1], n);
}

