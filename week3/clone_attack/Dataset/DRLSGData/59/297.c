char state [100] [100];
int bfhRUsYk4Ga = 0, o0Tz68AZ9, WlyX1I5ZTG0J;

void  OyGFghXa0e (int dB0UEtxVXIjZ, int IW0sOZNtryGF) {
    if (!(-(510 - 509) != dB0UEtxVXIjZ) || !(WlyX1I5ZTG0J != dB0UEtxVXIjZ) || !(-(218 - 217) != IW0sOZNtryGF) || !(WlyX1I5ZTG0J != IW0sOZNtryGF)) {
        return;
    }
    if (!('.' != state[dB0UEtxVXIjZ][IW0sOZNtryGF])) {
        state[dB0UEtxVXIjZ][IW0sOZNtryGF] = '@';
    }
}

int main () {
    int O3ZisE;
    int LLUY4sXOJ;
    int iybqPKQYMI;
    {
        if (0) {
            return 0;
        }
    }
    cin >> WlyX1I5ZTG0J;
    for (O3ZisE = 0; WlyX1I5ZTG0J > O3ZisE; O3ZisE = O3ZisE +(120 - 119)) {
        LLUY4sXOJ = 0;
        while (WlyX1I5ZTG0J > LLUY4sXOJ) {
            cin >> state[O3ZisE][LLUY4sXOJ];
            LLUY4sXOJ = LLUY4sXOJ +(677 - 676);
        }
    }
    cin >> o0Tz68AZ9;
    {
        iybqPKQYMI = 1;
        while (iybqPKQYMI < o0Tz68AZ9) {
            {
                O3ZisE = 0;
                while (O3ZisE < WlyX1I5ZTG0J) {
                    {
                        LLUY4sXOJ = 0;
                        while (WlyX1I5ZTG0J > LLUY4sXOJ) {
                            if (!('@' != state[O3ZisE][LLUY4sXOJ])) {
                                state[O3ZisE][LLUY4sXOJ] = '*';
                            }
                            LLUY4sXOJ = LLUY4sXOJ +1;
                        }
                    }
                    O3ZisE = O3ZisE +1;
                }
            }
            {
                O3ZisE = 0;
                while (O3ZisE < WlyX1I5ZTG0J) {
                    {
                        LLUY4sXOJ = 0;
                        while (WlyX1I5ZTG0J > LLUY4sXOJ) {
                            if (state[O3ZisE][LLUY4sXOJ] == '*') {
                                OyGFghXa0e (O3ZisE, LLUY4sXOJ -1);
                                OyGFghXa0e (O3ZisE, LLUY4sXOJ +1);
                                OyGFghXa0e (O3ZisE -1, LLUY4sXOJ);
                                OyGFghXa0e (O3ZisE +1, LLUY4sXOJ);
                            }
                            LLUY4sXOJ = LLUY4sXOJ +1;
                        }
                    }
                    O3ZisE = O3ZisE +1;
                }
            }
            {
                O3ZisE = 0;
                while (O3ZisE < WlyX1I5ZTG0J) {
                    LLUY4sXOJ = 0;
                    while (LLUY4sXOJ < WlyX1I5ZTG0J) {
                        if (state[O3ZisE][LLUY4sXOJ] == '*')
                            state[O3ZisE][LLUY4sXOJ] = '@';
                        LLUY4sXOJ = LLUY4sXOJ +1;
                    }
                    O3ZisE = O3ZisE +1;
                }
            }
            iybqPKQYMI = iybqPKQYMI + 1;
        }
    }
    {
        O3ZisE = 0;
        while (O3ZisE < WlyX1I5ZTG0J) {
            {
                LLUY4sXOJ = 0;
                while (LLUY4sXOJ < WlyX1I5ZTG0J) {
                    bfhRUsYk4Ga = bfhRUsYk4Ga + (state[O3ZisE][LLUY4sXOJ] == '@');
                    LLUY4sXOJ = LLUY4sXOJ +1;
                }
            }
            O3ZisE = O3ZisE +1;
        }
    }
    cout << bfhRUsYk4Ga << endl;
    return 0;
}

