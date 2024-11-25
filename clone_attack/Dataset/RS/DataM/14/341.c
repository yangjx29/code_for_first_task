struct   Stu {
    int stuID;
    int mark;
}
stu [(931 - 928)] = {(171 - 171)};

int compare (const  void  *UYEoU4trT3G7, const  void  *p2) {
    struct   Stu *kPL0JKYpgs;
    struct   Stu *b;
    kPL0JKYpgs = (struct   Stu *) UYEoU4trT3G7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    b = (struct   Stu *) p2;
    if (kPL0JKYpgs->mark > b->mark)
        return -(621 - 620);
    if (kPL0JKYpgs->mark < b->mark)
        return (208 - 207);
    if (!(b->mark != kPL0JKYpgs->mark))
        return 0;
}

void  main () {
    int lhZ4wxDK;
    int i;
    int ID;
    int oLpKOIren;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int FQyPm0sUxpV;
    scanf ("%d", &lhZ4wxDK);
    {
        i = 1;
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
        while (i <= lhZ4wxDK) {
            i++;
            scanf ("%d%d%d", &ID, &oLpKOIren, &FQyPm0sUxpV);
            if (oLpKOIren + FQyPm0sUxpV > stu[(633 - 631)].mark) {
                stu[(382 - 380)].mark = oLpKOIren + FQyPm0sUxpV;
                stu[2].stuID = ID;
            }
            qsort (stu, (490 - 487), sizeof (struct   Stu), compare);
        };
    }
    for (i = 0; i < (301 - 298); i++)
        printf ("%d %d\n", stu[i].stuID, stu[i].mark);
}

