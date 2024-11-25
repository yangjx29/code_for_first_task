int PyPdwMkhxct (int gicHkLo8, int UAvsOjWPpIrD) {
    int maIiz2nGMsxc;
    if (!((473 - 472) != gicHkLo8))
        maIiz2nGMsxc = (420 - 419);
    else {
        if (!((669 - 668) != UAvsOjWPpIrD))
            maIiz2nGMsxc = (154 - 153);
        else {
            if (!((256 - 256) != UAvsOjWPpIrD))
                maIiz2nGMsxc = (267 - 266);
            else if (gicHkLo8 <= UAvsOjWPpIrD)
                maIiz2nGMsxc = PyPdwMkhxct (gicHkLo8, UAvsOjWPpIrD -gicHkLo8) + PyPdwMkhxct (gicHkLo8 - (147 - 146), UAvsOjWPpIrD);
            else if (UAvsOjWPpIrD < gicHkLo8)
                maIiz2nGMsxc = PyPdwMkhxct (gicHkLo8 - (216 - 215), UAvsOjWPpIrD);
            else
                ;
        }
    }
    return maIiz2nGMsxc;
}

int main () {
    int GTSN8e1Pmtn;
    int oGOX95goPF;
    int UAvsOjWPpIrD;
    int gicHkLo8;
    {
        {
            if ((850 - 850)) {
                {
                    if ((829 - 829)) {
                        return (932 - 932);
                    }
                }
                return (233 - 233);
            }
        }
        if ((89 - 89)) {
            return (376 - 376);
        }
    }
    scanf ("%d", &oGOX95goPF);
    {
        GTSN8e1Pmtn = (227 - 226);
        for (; GTSN8e1Pmtn <= oGOX95goPF;) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                if ((430 - 430)) {
                    return 0;
                }
            }
            scanf ("%d %d", &UAvsOjWPpIrD, &gicHkLo8);
            printf ("%d\n", PyPdwMkhxct (gicHkLo8, UAvsOjWPpIrD));
            GTSN8e1Pmtn = GTSN8e1Pmtn +(171 - 170);
        }
    }
}

