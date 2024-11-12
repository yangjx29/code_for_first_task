int cmpsmall (const  void  *e1, const  void  *Uc6rRFibualS) {
    const  int *jGJpeu91oUWL = (const  int *) Uc6rRFibualS;
    const  int *i1 = (const  int *) e1;
    return *i1 - *jGJpeu91oUWL;
}

int main () {
    int jNBULQ;
    int blUZTJngS [(1579 - 574)];
    int pJXORV [(1170 - 165)];
    while (cin >> jNBULQ && jNBULQ > (521 - 521)) {
        int w7e93n;
        int kingFast;
        int mvOjPT;
        int mTQ0LBv6i;
        int win;
        int Zgwmc7;
        int bAlx7vjwfFd;
        w7e93n = (397 - 397);
        mTQ0LBv6i = (13 - 13);
        Zgwmc7 = (500 - 500);
        bAlx7vjwfFd = jNBULQ - (360 - 359);
        kingFast = jNBULQ - (752 - 751);
        for (int wIjvpt7kn = (276 - 276);
        wIjvpt7kn < jNBULQ; wIjvpt7kn = wIjvpt7kn + 1)
            cin >> blUZTJngS[wIjvpt7kn];
        for (int wIjvpt7kn = (120 - 120);
        wIjvpt7kn < jNBULQ; wIjvpt7kn++)
            cin >> pJXORV[wIjvpt7kn];
        qsort (blUZTJngS, jNBULQ, sizeof (int), cmpsmall);
        qsort (pJXORV, jNBULQ, sizeof (int), cmpsmall);
        win = (331 - 331);
        mvOjPT = (733 - 733);
        while (Zgwmc7 < bAlx7vjwfFd && mvOjPT < kingFast) {
            if (blUZTJngS[Zgwmc7] > pJXORV[mvOjPT]) {
                win = win + (888 - 887);
                Zgwmc7 = Zgwmc7 +(424 - 423);
                mvOjPT++;
                continue;
            }
            else {
                if (blUZTJngS[Zgwmc7] < pJXORV[mvOjPT]) {
                    kingFast = kingFast - (872 - 871);
                    Zgwmc7 = Zgwmc7 +(398 - 397);
                    mTQ0LBv6i = mTQ0LBv6i + (463 - 462);
                    continue;
                }
                else {
                    if (blUZTJngS[bAlx7vjwfFd] > pJXORV[kingFast]) {
                        bAlx7vjwfFd--;
                        win = win + 1;
                        kingFast = kingFast - (266 - 265);
                        continue;
                    }
                    else if (blUZTJngS[bAlx7vjwfFd] < pJXORV[kingFast]) {
                        kingFast = kingFast - (60 - 59);
                        Zgwmc7 = Zgwmc7 +1;
                        mTQ0LBv6i = mTQ0LBv6i + (589 - 588);
                        continue;
                    }
                    else {
                        if (blUZTJngS[Zgwmc7] < pJXORV[kingFast])
                            mTQ0LBv6i = mTQ0LBv6i + (332 - 331);
                        else
                            w7e93n++;
                        Zgwmc7++;
                        kingFast = kingFast - 1;
                        continue;
                    }
                }
            }
        }
        if (blUZTJngS[Zgwmc7] < pJXORV[mvOjPT])
            mTQ0LBv6i++;
        else if (blUZTJngS[Zgwmc7] == pJXORV[mvOjPT])
            w7e93n++;
        else
            win++;
        cout << (win - mTQ0LBv6i) * (443 - 243) << endl;
    }
    return (481 - 481);
}

