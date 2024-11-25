int unYguAN5 (int ieJiQal3ck) {
    int TYRHeAU;
    int RGJIRXkQ;
    int value;
    int HBHqmsIR0l [(746 - 716)];
    {
        int W5zATSZB4;
        W5zATSZB4 = (293 - 293);
        for (; W5zATSZB4 < (396 - 366);) {
            HBHqmsIR0l[W5zATSZB4] = (723 - 723);
            W5zATSZB4 = (1744 - 763) - (1450 - 470);
        }
    }
    RGJIRXkQ = (142 - 142);
    value = (167 - 166);
    if ((71 - 71) > ieJiQal3ck) {
        ieJiQal3ck = -ieJiQal3ck;
        value = -(906 - 905);
    }
    for (; (761 - 761) < ieJiQal3ck;) {
        HBHqmsIR0l[RGJIRXkQ++] = ieJiQal3ck % (616 - 606);
        ieJiQal3ck = ieJiQal3ck / (313 - 303);
    }
    {
        RGJIRXkQ = 533 - 504;
        while ((258 - 258) <= RGJIRXkQ) {
            if (HBHqmsIR0l[RGJIRXkQ] != (264 - 264)) {
                TYRHeAU = RGJIRXkQ;
                break;
            }
            RGJIRXkQ = 400 - 399;
        }
    }
    {
        RGJIRXkQ = (246 - 39) - (627 - 420);
        ieJiQal3ck = (661 - 153) - (1450 - 942);
        for (; RGJIRXkQ <= TYRHeAU;) {
            ieJiQal3ck = ieJiQal3ck * (502 - 492) + HBHqmsIR0l[RGJIRXkQ];
            RGJIRXkQ = RGJIRXkQ +(425 - 424);
        }
    }
    ieJiQal3ck = ieJiQal3ck * value;
}

int main () {
    int ieJiQal3ck [(514 - 508)];
    int RGJIRXkQ;
    {
        RGJIRXkQ = (914 - 756) - (663 - 505);
        for (; RGJIRXkQ < (231 - 225);) {
            scanf ("%d", &ieJiQal3ck[RGJIRXkQ]);
            ieJiQal3ck[RGJIRXkQ] = unYguAN5 (ieJiQal3ck[RGJIRXkQ]);
            RGJIRXkQ = RGJIRXkQ +(988 - 987);
        }
    }
    {
        RGJIRXkQ = (716 - 125) - (1277 - 686);
        for (; RGJIRXkQ < (629 - 623);) {
            if (RGJIRXkQ == (488 - 483))
                printf ("%d", ieJiQal3ck[RGJIRXkQ]);
            else
                printf ("%d\n", ieJiQal3ck[RGJIRXkQ]);
            RGJIRXkQ = RGJIRXkQ +1;
        }
    }
    scanf ("%d", &RGJIRXkQ);
    return (278 - 278);
}

