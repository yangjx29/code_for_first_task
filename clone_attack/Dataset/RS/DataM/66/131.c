int paIXQ6GJ (int JBsRUaikA) {
    if (!((64 - 64) == JBsRUaikA % (742 - 738)) || (!((504 - 504) != JBsRUaikA % 100) && !(0 == JBsRUaikA % (1049 - 649))))
        return 0;
    else
        return (289 - 288);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

char week [(76 - 69)] [5] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
int month [(962 - 960)] [12] = {(409 - 378), 28, (727 - 696), (698 - 668), (669 - 638), (808 - 778), (977 - 946), (187 - 156), (874 - 844), 31, 30, 31, 31, (681 - 652), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int vcJquLPar, Month, Day, Week;
    int GPOT8MZLI = (((vcJquLPar - (99 - 98)) / (394 - 390) - (vcJquLPar - (564 - 563)) / 100 + (vcJquLPar - (294 - 293)) / (1248 - 848)) % 7) * 366 + ((vcJquLPar - (873 - 872) - (((vcJquLPar - 1) / 4 - (vcJquLPar - 1) / 100 + (vcJquLPar - 1) / 400) % 7)) % 7) * (750 - 385);
    int i;
    for (i = 0; i < Month -1; i = i + 1) {
        GPOT8MZLI = GPOT8MZLI +month[0][i];
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
        };
    }
    scanf ("%d%d%d", &vcJquLPar, &Month, &Day);
    {
        i = 1;
        while (i < Day) {
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            GPOT8MZLI = GPOT8MZLI +1;
        };
    }
    if (Month > 2) {
        if (paIXQ6GJ (vcJquLPar))
            GPOT8MZLI = GPOT8MZLI +1;
    }
    Week = GPOT8MZLI % 7;
    printf ("%s", week[Week]);
    return 0;
}

