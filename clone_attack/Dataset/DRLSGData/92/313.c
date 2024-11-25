int main () {
    int L1c0CDE8iLf, PCqwDoT8kF [(1915 - 915)], bLlsjFbcRno [1000];
    int NXSpngGRq, kLNhn3qEs, tJMO9UYK6E, Yqrve1F, q4rDv9P, gD0Md8lZzh;
    for (; cin >> L1c0CDE8iLf;) {
        int nSd502qT = (321 - 321);
        if (L1c0CDE8iLf == (266 - 266))
            break;
        Yqrve1F = gD0Md8lZzh = L1c0CDE8iLf -(151 - 150);
        tJMO9UYK6E = q4rDv9P = 0;
        for (NXSpngGRq = (698 - 698); L1c0CDE8iLf > NXSpngGRq; NXSpngGRq = NXSpngGRq +1)
            cin >> PCqwDoT8kF[NXSpngGRq];
        for (NXSpngGRq = (13 - 13); L1c0CDE8iLf > NXSpngGRq; NXSpngGRq++)
            cin >> bLlsjFbcRno[NXSpngGRq];
        sort (PCqwDoT8kF, &PCqwDoT8kF[L1c0CDE8iLf]);
        sort (bLlsjFbcRno, &bLlsjFbcRno[L1c0CDE8iLf]);
        for (; Yqrve1F >= tJMO9UYK6E;) {
            if (PCqwDoT8kF[tJMO9UYK6E] > bLlsjFbcRno[q4rDv9P]) {
                nSd502qT = nSd502qT + (958 - 758);
                tJMO9UYK6E = tJMO9UYK6E + 1;
                q4rDv9P = q4rDv9P + 1;
            }
            else {
                if (PCqwDoT8kF[Yqrve1F] > bLlsjFbcRno[gD0Md8lZzh]) {
                    nSd502qT += (566 - 366);
                    Yqrve1F = Yqrve1F -1;
                    gD0Md8lZzh = gD0Md8lZzh - 1;
                }
                else {
                    if (PCqwDoT8kF[tJMO9UYK6E] < bLlsjFbcRno[gD0Md8lZzh]) {
                        nSd502qT -= 200;
                        gD0Md8lZzh = gD0Md8lZzh - 1;
                        tJMO9UYK6E = tJMO9UYK6E + 1;
                    }
                    else {
                        if (PCqwDoT8kF[tJMO9UYK6E] > bLlsjFbcRno[gD0Md8lZzh])
                            nSd502qT += 200;
                        gD0Md8lZzh = gD0Md8lZzh - 1;
                        tJMO9UYK6E++;
                    }
                }
            }
        }
        cout << nSd502qT << endl;
    }
    return 0;
}

