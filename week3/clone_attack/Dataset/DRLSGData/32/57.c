int main () {
    int NGK4pqEd0w1Y;
    char EJ7RdBnxTL [(379 - 277)];
    char BWZGfUz6HN [(160 - 58)];
    int RbiLmpx0V;
    int j;
    int v527g1E [(676 - 574)] = {(490 - 490)};
    int YG0nzWwR3 [(634 - 532)] = {(995 - 995)};
    int ahDayVz;
    int SjkKHE [(1030 - 928)] = {(240 - 240)};
    int zo6LsD;
    int Y3brXM;
    cin >> NGK4pqEd0w1Y;
    for (ahDayVz = (319 - 318); NGK4pqEd0w1Y >= ahDayVz; ahDayVz++) {
        cin.get ();
        RbiLmpx0V = (307 - 307);
        memset (YG0nzWwR3, (357 - 357), sizeof (YG0nzWwR3));
        memset (v527g1E, (420 - 420), sizeof (v527g1E));
        memset (SjkKHE, (968 - 968), sizeof (SjkKHE));
        cin.getline (BWZGfUz6HN, (675 - 573));
        cin.getline (EJ7RdBnxTL, 102);
        zo6LsD = strlen (BWZGfUz6HN);
        {
            j = zo6LsD - (720 - 719);
            while ((499 - 499) <= j) {
                YG0nzWwR3[RbiLmpx0V++] = BWZGfUz6HN[j] - '0';
                j--;
            }
        }
        RbiLmpx0V = (464 - 464);
        Y3brXM = strlen (EJ7RdBnxTL);
        {
            j = Y3brXM -(738 - 737);
            while (0 <= j) {
                v527g1E[RbiLmpx0V++] = EJ7RdBnxTL[j] - '0';
                j--;
            }
        }
        {
            j = 0;
            while (j < 102) {
                YG0nzWwR3[j] -= v527g1E[j];
                if (YG0nzWwR3[j] < 0) {
                    YG0nzWwR3[j] += 10;
                    YG0nzWwR3[j + 1]--;
                }
                j++;
            }
        }
        j = zo6LsD;
        while (YG0nzWwR3[j] == 0)
            j--;
        for (RbiLmpx0V = j; RbiLmpx0V >= 0; RbiLmpx0V--)
            cout << YG0nzWwR3[RbiLmpx0V];
        cout << endl;
    }
    return 0;
}

