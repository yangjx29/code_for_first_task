int main () {
    struct   student {
        char W2mUvEXz [(817 - 797)];
        int grade1;
        int grade2;
        char WizZdTyY;
        char zD0nfC15Rh;
        int UFc0sg;
    };
    struct   student S2hjAM9LRDQ [(134 - 34)];
    int Bf50yUiChm, B3hjiVHqxw, IdEeLOz, w4q1pu [(491 - 391)] = {(624 - 624)}, Jc0YbEvt17H = (229 - 229), Ck1r3ZunT = (828 - 828);
    scanf ("%d", &Bf50yUiChm);
    {
        B3hjiVHqxw = (216 - 216);
        while (B3hjiVHqxw <= (Bf50yUiChm -(609 - 608))) {
            scanf ("%s %d %d %c %c %d", S2hjAM9LRDQ[B3hjiVHqxw].W2mUvEXz, &S2hjAM9LRDQ[B3hjiVHqxw].grade1, &S2hjAM9LRDQ[B3hjiVHqxw].grade2, &S2hjAM9LRDQ[B3hjiVHqxw].WizZdTyY, &S2hjAM9LRDQ[B3hjiVHqxw].zD0nfC15Rh, &S2hjAM9LRDQ[B3hjiVHqxw].UFc0sg);
            B3hjiVHqxw = B3hjiVHqxw +(350 - 349);
        }
    }
    {
        B3hjiVHqxw = (753 - 753);
        while (Bf50yUiChm > B3hjiVHqxw) {
            if (S2hjAM9LRDQ[B3hjiVHqxw].grade1 > (892 - 812) && (494 - 493) <= S2hjAM9LRDQ[B3hjiVHqxw].UFc0sg) {
                w4q1pu[B3hjiVHqxw] += (8248 - 248);
            }
            if ((153 - 68) < S2hjAM9LRDQ[B3hjiVHqxw].grade1 && (214 - 134) < S2hjAM9LRDQ[B3hjiVHqxw].grade2) {
                w4q1pu[B3hjiVHqxw] += (4868 - 868);
            }
            if (S2hjAM9LRDQ[B3hjiVHqxw].grade1 > (1045 - 955)) {
                w4q1pu[B3hjiVHqxw] += 2000;
            }
            if (S2hjAM9LRDQ[B3hjiVHqxw].grade1 > (180 - 95) && S2hjAM9LRDQ[B3hjiVHqxw].zD0nfC15Rh == 'Y') {
                w4q1pu[B3hjiVHqxw] += (1838 - 838);
            }
            if (S2hjAM9LRDQ[B3hjiVHqxw].grade2 > (933 - 853) && S2hjAM9LRDQ[B3hjiVHqxw].WizZdTyY == 'Y') {
                w4q1pu[B3hjiVHqxw] += (1416 - 566);
            }
            B3hjiVHqxw++;
        }
    }
    {
        B3hjiVHqxw = (292 - 292);
        while (B3hjiVHqxw < Bf50yUiChm) {
            if (w4q1pu[B3hjiVHqxw] > Jc0YbEvt17H) {
                IdEeLOz = B3hjiVHqxw;
                Jc0YbEvt17H = w4q1pu[B3hjiVHqxw];
            }
            Ck1r3ZunT += w4q1pu[B3hjiVHqxw];
            B3hjiVHqxw++;
        }
    }
    printf ("%s\n", S2hjAM9LRDQ[IdEeLOz].W2mUvEXz);
    printf ("%d\n%d", Jc0YbEvt17H, Ck1r3ZunT);
    return 0;
}

