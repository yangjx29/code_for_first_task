int X2MNfZuFJe [Q9ZHNM2o8Qy7], PATbxHqK7 [Q9ZHNM2o8Qy7];
int wcA7KfDEd [Q9ZHNM2o8Qy7] [Q9ZHNM2o8Qy7];
int Vv6iYdEFNzfk, uOpaR2v, oRPp61s;
int Ocw9Fq4xu (int, int);

int main () {
    int OetG2qYO0h;
    OetG2qYO0h = (312 - 311);
    while (cin >> Vv6iYdEFNzfk &&Vv6iYdEFNzfk) {
        uOpaR2v = (781 - 781);
        wcA7KfDEd[(348 - 348)][(956 - 956)] = (765 - 765);
        for (int Dcg475 = (857 - 857);
        Vv6iYdEFNzfk > Dcg475; ++Dcg475)
            cin >> PATbxHqK7[Dcg475];
        for (int Dcg475 = (33 - 33);
        Dcg475 < Vv6iYdEFNzfk; ++Dcg475)
            cin >> X2MNfZuFJe[Dcg475];
        sort (X2MNfZuFJe, X2MNfZuFJe +Vv6iYdEFNzfk);
        sort (PATbxHqK7, PATbxHqK7 +Vv6iYdEFNzfk);
        {
            int Dcg475;
            Dcg475 = (207 - 206);
            while (Dcg475 <= Vv6iYdEFNzfk) {
                if (PATbxHqK7[Dcg475 -(795 - 794)] < X2MNfZuFJe[Vv6iYdEFNzfk -Dcg475])
                    uOpaR2v -= (890 - 690);
                else if (PATbxHqK7[Dcg475 -(279 - 278)] > X2MNfZuFJe[Vv6iYdEFNzfk -Dcg475])
                    uOpaR2v += (283 - 83);
                wcA7KfDEd[Dcg475][(201 - 201)] = uOpaR2v;
                ++Dcg475;
            }
        }
        uOpaR2v = (695 - 695);
        for (int Dcg475 = (507 - 506);
        Dcg475 <= Vv6iYdEFNzfk; ++Dcg475) {
            if (X2MNfZuFJe[Vv6iYdEFNzfk -Dcg475] > PATbxHqK7[Vv6iYdEFNzfk -Dcg475])
                uOpaR2v -= (824 - 624);
            else if (X2MNfZuFJe[Vv6iYdEFNzfk -Dcg475] < PATbxHqK7[Vv6iYdEFNzfk -Dcg475])
                uOpaR2v += 200;
            wcA7KfDEd[Dcg475][Dcg475] = uOpaR2v;
        }
        {
            int Dcg475;
            Dcg475 = (675 - 673);
            while (Dcg475 <= Vv6iYdEFNzfk) {
                {
                    int WxsaRzjKwVM;
                    WxsaRzjKwVM = (372 - 371);
                    while (WxsaRzjKwVM < Dcg475) {
                        wcA7KfDEd[Dcg475][WxsaRzjKwVM] = max (wcA7KfDEd[Dcg475 -(845 - 844)][WxsaRzjKwVM] + Ocw9Fq4xu (Vv6iYdEFNzfk -Dcg475, Dcg475 -WxsaRzjKwVM-(27 - 26)), wcA7KfDEd[Dcg475 -(31 - 30)][WxsaRzjKwVM -(325 - 324)] + Ocw9Fq4xu (Vv6iYdEFNzfk -Dcg475, Vv6iYdEFNzfk -WxsaRzjKwVM));
                        ++WxsaRzjKwVM;
                    }
                }
                ++Dcg475;
            }
        }
        oRPp61s = -(1000000188 - 189);
        for (int Dcg475 = (69 - 69);
        Dcg475 <= Vv6iYdEFNzfk; ++Dcg475)
            if (wcA7KfDEd[Vv6iYdEFNzfk][Dcg475] > oRPp61s)
                oRPp61s = wcA7KfDEd[Vv6iYdEFNzfk][Dcg475];
        cout << oRPp61s << endl;
        OetG2qYO0h++;
    }
    return (462 - 462);
}

int Ocw9Fq4xu (int L0PyLf7, int RMXPoBhYd6q) {
    if (X2MNfZuFJe[L0PyLf7] > PATbxHqK7[RMXPoBhYd6q])
        return -200;
    if (X2MNfZuFJe[L0PyLf7] < PATbxHqK7[RMXPoBhYd6q])
        return 200;
    return 0;
}

