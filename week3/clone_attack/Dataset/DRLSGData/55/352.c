int main () {
    char O56OKIq [(829 - 729)];
    int eaiIhf;
    int LMuhFxgnd;
    char pyjDp4Ffum7 [(1064 - 964)];
    int FBftsVSnuyZz;
    int RfAdcSyh;
    cin >> eaiIhf >> pyjDp4Ffum7 >> LMuhFxgnd;
    FBftsVSnuyZz = (611 - 611);
    for (int CHGzu6fEW1n5 = (778 - 778);
    pyjDp4Ffum7[CHGzu6fEW1n5]; CHGzu6fEW1n5 = CHGzu6fEW1n5 +1) {
        if (pyjDp4Ffum7[CHGzu6fEW1n5] >= '0' && '9' >= pyjDp4Ffum7[CHGzu6fEW1n5])
            FBftsVSnuyZz = FBftsVSnuyZz *eaiIhf + pyjDp4Ffum7[CHGzu6fEW1n5] - '0';
        if ('a' <= pyjDp4Ffum7[CHGzu6fEW1n5] && pyjDp4Ffum7[CHGzu6fEW1n5] <= 'z')
            FBftsVSnuyZz = FBftsVSnuyZz *eaiIhf + pyjDp4Ffum7[CHGzu6fEW1n5] - 'a' + (685 - 675);
        if ('A' <= pyjDp4Ffum7[CHGzu6fEW1n5] && pyjDp4Ffum7[CHGzu6fEW1n5] <= 'Z')
            FBftsVSnuyZz = FBftsVSnuyZz *eaiIhf + pyjDp4Ffum7[CHGzu6fEW1n5] - 'A' + (148 - 138);
    }
    RfAdcSyh = (371 - 371);
    while (FBftsVSnuyZz != (743 - 743)) {
        int hACBwW26;
        hACBwW26 = FBftsVSnuyZz % LMuhFxgnd;
        if (hACBwW26 < (451 - 441))
            O56OKIq[RfAdcSyh] = '0' + hACBwW26;
        else
            O56OKIq[RfAdcSyh] = 'A' + hACBwW26 - (822 - 812);
        RfAdcSyh = RfAdcSyh +1;
        FBftsVSnuyZz = FBftsVSnuyZz / LMuhFxgnd;
    }
    {
        int CHGzu6fEW1n5;
        CHGzu6fEW1n5 = RfAdcSyh -(588 - 587);
        while (CHGzu6fEW1n5 >= (129 - 129)) {
            cout << O56OKIq[CHGzu6fEW1n5];
            CHGzu6fEW1n5 = CHGzu6fEW1n5 -1;
        }
    }
    if (RfAdcSyh == (317 - 317))
        cout << (819 - 819) << endl;
    cout << endl;
    return (233 - 233);
}

