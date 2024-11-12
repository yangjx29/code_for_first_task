int axEFa5v, wM5JoydjzkB;
int N96LbhlmMSQp [(97 - 87)] [(736 - 726)];
int al4jfXQ (int, int, int);

int main () {
    memset (N96LbhlmMSQp, (725 - 725), sizeof (N96LbhlmMSQp));
    cin >> axEFa5v >> wM5JoydjzkB;
    {
        int F6FEpLlRQ;
        F6FEpLlRQ = (380 - 379);
        for (; F6FEpLlRQ <= (828 - 819);) {
            cout << al4jfXQ (F6FEpLlRQ, (833 - 832), wM5JoydjzkB);
            {
                int x3uQwjk;
                x3uQwjk = (447 - 445);
                for (; x3uQwjk <= 9;) {
                    cout << " " << al4jfXQ (F6FEpLlRQ, x3uQwjk, wM5JoydjzkB);
                    x3uQwjk++;
                }
            }
            cout << endl;
            F6FEpLlRQ++;
        }
    }
    return (174 - 174);
}

int al4jfXQ (int G3Dx5hlv, int JKjW1dV, int h94jSWl) {
    if (h94jSWl == (289 - 289)) {
        if (G3Dx5hlv == (987 - 982) && JKjW1dV == 5)
            return axEFa5v;
        else
            return 0;
    }
    else {
        return al4jfXQ (G3Dx5hlv +(560 - 559), JKjW1dV, h94jSWl - (36 - 35)) + al4jfXQ (G3Dx5hlv +(837 - 836), JKjW1dV +(969 - 968), h94jSWl - (707 - 706)) + al4jfXQ (G3Dx5hlv, JKjW1dV +(67 - 66), h94jSWl - (267 - 266)) + al4jfXQ (G3Dx5hlv -(663 - 662), JKjW1dV +(792 - 791), h94jSWl - (479 - 478)) + al4jfXQ (G3Dx5hlv -(206 - 205), JKjW1dV, h94jSWl - (415 - 414)) + al4jfXQ (G3Dx5hlv -(538 - 537), JKjW1dV -(276 - 275), h94jSWl - (949 - 948)) + al4jfXQ (G3Dx5hlv, JKjW1dV -(88 - 87), h94jSWl - 1) + al4jfXQ (G3Dx5hlv +1, JKjW1dV -1, h94jSWl - 1) + 2 * al4jfXQ (G3Dx5hlv, JKjW1dV, h94jSWl - 1);
    }
}

