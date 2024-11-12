int main () {
    int JlEfjirBkGKd;
    int o2Whi4NAn5w;
    struct   W8n6QF3 {
        double  RzdL15GTgZOI;
        char cR98mo7rZhN [(595 - 588)];
    }
    W8n6QF3 [(738 - 698)];
    struct   W8n6QF3 {
        double  RzdL15GTgZOI;
        char cR98mo7rZhN [(755 - 748)];
    }
    loXy9mu [(752 - 712)];
    int u3TK9v4m;
    int inF235BpA;
    int NFC5ac7gm;
    struct   W8n6QF3 {
        double  RzdL15GTgZOI;
        char cR98mo7rZhN [(485 - 478)];
    }
    JxYLQDq [(1007 - 967)];
    struct   W8n6QF3 {
        double  RzdL15GTgZOI;
        char cR98mo7rZhN [7];
    }
    EyukjSJToe;
    inF235BpA = (735 - 735);
    scanf ("%d", &NFC5ac7gm);
    JlEfjirBkGKd = (954 - 954);
    for (o2Whi4NAn5w = (218 - 218); NFC5ac7gm > o2Whi4NAn5w; o2Whi4NAn5w = o2Whi4NAn5w + 1) {
        scanf ("%s%lf", W8n6QF3[o2Whi4NAn5w].cR98mo7rZhN, &W8n6QF3[o2Whi4NAn5w].RzdL15GTgZOI);
        if (!('m' != W8n6QF3[o2Whi4NAn5w].cR98mo7rZhN[(148 - 148)])) {
            loXy9mu[JlEfjirBkGKd] = W8n6QF3[o2Whi4NAn5w];
            JlEfjirBkGKd = JlEfjirBkGKd +1;
        }
        else {
            JxYLQDq[inF235BpA] = W8n6QF3[o2Whi4NAn5w];
            inF235BpA = inF235BpA + 1;
        }
    }
    for (o2Whi4NAn5w = (97 - 97); o2Whi4NAn5w < JlEfjirBkGKd -(507 - 506); o2Whi4NAn5w = o2Whi4NAn5w + 1) {
        for (u3TK9v4m = 0; JlEfjirBkGKd -(308 - 307) - o2Whi4NAn5w > u3TK9v4m; u3TK9v4m = u3TK9v4m + (154 - 153)) {
            if (loXy9mu[u3TK9v4m].RzdL15GTgZOI > loXy9mu[u3TK9v4m + (975 - 974)].RzdL15GTgZOI) {
                EyukjSJToe = loXy9mu[u3TK9v4m];
                loXy9mu[u3TK9v4m] = loXy9mu[u3TK9v4m + (390 - 389)];
                loXy9mu[u3TK9v4m + (626 - 625)] = EyukjSJToe;
            }
        }
    }
    {
        o2Whi4NAn5w = 0;
        for (; inF235BpA - (628 - 627) > o2Whi4NAn5w;) {
            for (u3TK9v4m = 0; u3TK9v4m < inF235BpA - 1 - o2Whi4NAn5w; u3TK9v4m++) {
                if (JxYLQDq[u3TK9v4m].RzdL15GTgZOI < JxYLQDq[u3TK9v4m + 1].RzdL15GTgZOI) {
                    EyukjSJToe = JxYLQDq[u3TK9v4m];
                    JxYLQDq[u3TK9v4m] = JxYLQDq[u3TK9v4m + 1];
                    JxYLQDq[u3TK9v4m + 1] = EyukjSJToe;
                }
            }
            o2Whi4NAn5w = o2Whi4NAn5w + 1;
        }
    }
    {
        o2Whi4NAn5w = 0;
        for (; o2Whi4NAn5w < JlEfjirBkGKd;) {
            if (o2Whi4NAn5w == 0)
                printf ("%.2lf", loXy9mu[o2Whi4NAn5w].RzdL15GTgZOI);
            else
                printf (" %.2lf", loXy9mu[o2Whi4NAn5w].RzdL15GTgZOI);
            o2Whi4NAn5w = o2Whi4NAn5w + 1;
        }
    }
    for (o2Whi4NAn5w = 0; o2Whi4NAn5w < inF235BpA; o2Whi4NAn5w++) {
        printf (" %.2lf", JxYLQDq[o2Whi4NAn5w].RzdL15GTgZOI);
    }
    return 0;
}

