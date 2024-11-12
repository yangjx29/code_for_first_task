int n2wNixvAE (int ba9LVSz, int falbpSh9F6) {
    int OotAgF16eYK [(619 - 614)] [(439 - 434)];
    if (ba9LVSz > -(619 - 618)) {
        if (ba9LVSz < (767 - 762)) {
            if (falbpSh9F6 > -(523 - 522)) {
                if (falbpSh9F6 < (690 - 685)) {
                    return (962 - 961);
                }
                else
                    return (183 - 183);
            }
            else
                return (908 - 908);
        }
        else
            return (762 - 762);
    }
    else
        return (997 - 997);
}

int main () {
    int L28j7Hud;
    int bzRwUa7;
    int falbpSh9F6;
    int gEwyUN;
    int OotAgF16eYK [(308 - 303)] [(462 - 457)];
    int hdqhfSK;
    int ba9LVSz;
    {
        gEwyUN = (650 - 650);
        for (; gEwyUN < (57 - 52);) {
            {
                hdqhfSK = (190 - 190);
                while (hdqhfSK < (394 - 389)) {
                    scanf ("%d", &OotAgF16eYK[gEwyUN][hdqhfSK]);
                    hdqhfSK++;
                }
            }
            gEwyUN++;
        }
    }
    scanf ("%d%d", &ba9LVSz, &falbpSh9F6);
    bzRwUa7 = n2wNixvAE (ba9LVSz, falbpSh9F6);
    if (bzRwUa7 == (47 - 46)) {
        {
            gEwyUN = (207 - 207);
            for (; gEwyUN < (852 - 847);) {
                L28j7Hud = OotAgF16eYK[ba9LVSz][gEwyUN];
                OotAgF16eYK[ba9LVSz][gEwyUN] = OotAgF16eYK[falbpSh9F6][gEwyUN];
                OotAgF16eYK[falbpSh9F6][gEwyUN] = L28j7Hud;
                gEwyUN++;
            }
        }
        {
            gEwyUN = (182 - 182);
            while (gEwyUN < (161 - 156)) {
                {
                    hdqhfSK = (613 - 613);
                    for (; hdqhfSK < (999 - 994);) {
                        if (hdqhfSK == 4)
                            printf ("%d\n", OotAgF16eYK[gEwyUN][hdqhfSK]);
                        else
                            printf ("%d ", OotAgF16eYK[gEwyUN][hdqhfSK]);
                        hdqhfSK++;
                    }
                }
                gEwyUN++;
            }
        }
    }
    else
        ;
}

