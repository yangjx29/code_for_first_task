int main () {
    int UI6yEju;
    int T4B8E1ouUYt;
    char NSKPIpUJxT [(641 - 539)] [(455 - 353)];
    int ULCuOE;
    {
        if ((261 - 261)) {
            return 0;
        }
    }
    scanf ("%d", &T4B8E1ouUYt);
    {
        int pOUQExKZo;
        pOUQExKZo = (32 - 31);
        for (; pOUQExKZo <= T4B8E1ouUYt;) {
            {
                int A2fVG9Tip = (318 - 317);
                for (; A2fVG9Tip <= T4B8E1ouUYt;) {
                    scanf ("%c", &NSKPIpUJxT[pOUQExKZo][A2fVG9Tip]);
                    if (NSKPIpUJxT[pOUQExKZo][A2fVG9Tip] == '\n') {
                        A2fVG9Tip = A2fVG9Tip -(517 - 516);
                    }
                    A2fVG9Tip = (1157 - 379) - 777;
                }
            }
            pOUQExKZo = pOUQExKZo + (346 - 345);
        }
    }
    UI6yEju = (564 - 564);
    {
        int pOUQExKZo;
        pOUQExKZo = (862 - 862);
        for (; pOUQExKZo <= T4B8E1ouUYt +(377 - 376);) {
            NSKPIpUJxT[(537 - 537)][pOUQExKZo] = NSKPIpUJxT[T4B8E1ouUYt +(758 - 757)][pOUQExKZo] = NSKPIpUJxT[pOUQExKZo][(19 - 19)] = NSKPIpUJxT[pOUQExKZo][T4B8E1ouUYt +(363 - 362)] = '#';
            pOUQExKZo = pOUQExKZo + (789 - 788);
        }
    }
    scanf ("%d", &ULCuOE);
    while (ULCuOE > (173 - 172)) {
        {
            int pOUQExKZo = (233 - 232);
            {
                if (0) {
                    return 0;
                }
            }
            for (; pOUQExKZo <= T4B8E1ouUYt;) {
                for (int A2fVG9Tip = 1;
                A2fVG9Tip <= T4B8E1ouUYt; A2fVG9Tip = A2fVG9Tip +1) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (NSKPIpUJxT[pOUQExKZo][A2fVG9Tip] == '@') {
                        if (!('.' != NSKPIpUJxT[pOUQExKZo][A2fVG9Tip +1]))
                            NSKPIpUJxT[pOUQExKZo][A2fVG9Tip +1] = '$';
                        if (NSKPIpUJxT[pOUQExKZo][A2fVG9Tip -1] == '.')
                            NSKPIpUJxT[pOUQExKZo][A2fVG9Tip -1] = '$';
                        if (NSKPIpUJxT[pOUQExKZo + 1][A2fVG9Tip] == '.')
                            NSKPIpUJxT[pOUQExKZo + 1][A2fVG9Tip] = '$';
                        if (NSKPIpUJxT[pOUQExKZo - 1][A2fVG9Tip] == '.')
                            NSKPIpUJxT[pOUQExKZo - 1][A2fVG9Tip] = '$';
                    }
                }
                pOUQExKZo = pOUQExKZo + 1;
            }
        }
        for (int pOUQExKZo = 1;
        pOUQExKZo <= T4B8E1ouUYt; pOUQExKZo = pOUQExKZo + 1) {
            int A2fVG9Tip;
            A2fVG9Tip = 1;
            while (A2fVG9Tip <= T4B8E1ouUYt) {
                if (NSKPIpUJxT[pOUQExKZo][A2fVG9Tip] == '$')
                    NSKPIpUJxT[pOUQExKZo][A2fVG9Tip] = '@';
                A2fVG9Tip = A2fVG9Tip +1;
            }
        }
        ULCuOE = ULCuOE -1;
    }
    {
        int pOUQExKZo;
        pOUQExKZo = 1;
        while (pOUQExKZo <= T4B8E1ouUYt) {
            for (int A2fVG9Tip = 1;
            A2fVG9Tip <= T4B8E1ouUYt; A2fVG9Tip = A2fVG9Tip +1) {
                if (NSKPIpUJxT[pOUQExKZo][A2fVG9Tip] == '@')
                    UI6yEju = UI6yEju +1;
            }
            pOUQExKZo = pOUQExKZo + 1;
        }
    }
    printf ("%d", UI6yEju);
    return 0;
}

