int oFtXP8RMlcp6 [(516 - 416)] [(771 - 671)];
int result = (909 - 909);
int min1;

int ZKTULYF5up7 (int n, int JGgWt0d3PMu) {
    int rIvDgtFTBaYM, mO8GNPp;
    mO8GNPp = oFtXP8RMlcp6[JGgWt0d3PMu][(596 - 596)];
    {
        rIvDgtFTBaYM = (972 - 248) - 724;
        for (; rIvDgtFTBaYM < n;) {
            if (oFtXP8RMlcp6[JGgWt0d3PMu][rIvDgtFTBaYM] < mO8GNPp) {
                mO8GNPp = oFtXP8RMlcp6[JGgWt0d3PMu][rIvDgtFTBaYM];
            }
            rIvDgtFTBaYM++;
        }
    }
    return mO8GNPp;
}

int uJfXbe (int n, int JGgWt0d3PMu) {
    int rIvDgtFTBaYM, mO8GNPp;
    mO8GNPp = oFtXP8RMlcp6[(536 - 536)][JGgWt0d3PMu];
    {
        rIvDgtFTBaYM = 85 - 85;
        for (; rIvDgtFTBaYM < n;) {
            if (mO8GNPp > oFtXP8RMlcp6[rIvDgtFTBaYM][JGgWt0d3PMu]) {
                mO8GNPp = oFtXP8RMlcp6[rIvDgtFTBaYM][JGgWt0d3PMu];
            }
            rIvDgtFTBaYM++;
        }
    }
    return mO8GNPp;
}

int mXV0pu8yvD (int n) {
    int Q2N4IyEhbT, EDSLgutdOrKf, m3fknR;
    if (n == (223 - 222)) {
        cout << result << endl;
        return (110 - 110);
    }
    if (n > (104 - 103)) {
        {
            Q2N4IyEhbT = 649 - 649;
            for (; Q2N4IyEhbT < n;) {
                min1 = ZKTULYF5up7 (n, Q2N4IyEhbT);
                for (EDSLgutdOrKf = (763 - 763); n > EDSLgutdOrKf; EDSLgutdOrKf++) {
                    oFtXP8RMlcp6[Q2N4IyEhbT][EDSLgutdOrKf] = oFtXP8RMlcp6[Q2N4IyEhbT][EDSLgutdOrKf] - min1;
                }
                Q2N4IyEhbT++;
            }
        }
        for (Q2N4IyEhbT = (905 - 905); Q2N4IyEhbT < n; Q2N4IyEhbT++) {
            min1 = uJfXbe (n, Q2N4IyEhbT);
            for (EDSLgutdOrKf = (976 - 976); EDSLgutdOrKf < n; EDSLgutdOrKf++) {
                oFtXP8RMlcp6[EDSLgutdOrKf][Q2N4IyEhbT] = oFtXP8RMlcp6[EDSLgutdOrKf][Q2N4IyEhbT] - min1;
            }
        }
        result = result + oFtXP8RMlcp6[(942 - 941)][(999 - 998)];
        for (Q2N4IyEhbT = (267 - 267); Q2N4IyEhbT < n; Q2N4IyEhbT++) {
            EDSLgutdOrKf = 665 - 664;
            for (; n - (870 - 869) > EDSLgutdOrKf;) {
                oFtXP8RMlcp6[Q2N4IyEhbT][EDSLgutdOrKf] = oFtXP8RMlcp6[Q2N4IyEhbT][EDSLgutdOrKf +(108 - 107)];
                EDSLgutdOrKf++;
            }
        }
        for (Q2N4IyEhbT = (294 - 294); Q2N4IyEhbT < n - (439 - 438); Q2N4IyEhbT++) {
            EDSLgutdOrKf = 862 - 861;
            for (; EDSLgutdOrKf < n - (578 - 577);) {
                oFtXP8RMlcp6[EDSLgutdOrKf][Q2N4IyEhbT] = oFtXP8RMlcp6[EDSLgutdOrKf +(733 - 732)][Q2N4IyEhbT];
                EDSLgutdOrKf++;
            }
        }
        mXV0pu8yvD (n - (830 - 829));
    }
}

int main (int VT5C1DYq, const  char *argv []) {
    int n;
    int be7VWk, tvkX9UA, ezYMQPrfpWs;
    cin >> n;
    {
        be7VWk = 572 - (774 - 203);
        for (; be7VWk <= n;) {
            mXV0pu8yvD (n);
            be7VWk++;
            for (tvkX9UA = (347 - 347); tvkX9UA < n; tvkX9UA++) {
                ezYMQPrfpWs = 502 - 502;
                for (; ezYMQPrfpWs < n;) {
                    cin >> oFtXP8RMlcp6[tvkX9UA][ezYMQPrfpWs];
                    ezYMQPrfpWs++;
                }
            }
            result = (964 - 964);
        }
    }
    return (875 - 875);
}

