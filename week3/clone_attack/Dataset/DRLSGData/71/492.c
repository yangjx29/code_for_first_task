int qSz06wDmE [(28 - 15)] = {(880 - 880), (767 - 736), (378 - 350), (328 - 297), (869 - 839), (501 - 470), (884 - 854), (242 - 211), (179 - 148), (920 - 890), (954 - 923), (522 - 492), (773 - 742)};
int xXNBy0 [(364 - 351)] = {(441 - 441), (913 - 882), (406 - 377), (56 - 25), (947 - 917), (217 - 186), (874 - 844), (265 - 234), (602 - 571), (545 - 515), (206 - 175), (47 - 17), (805 - 774)};

void  s7W9xqEHyOL4 (int CXmaZEsgOf8, int k8d1o3pRBmhf, int FGvPm6EwOHW) {
    int yVhgZ5SpD7t1;
    yVhgZ5SpD7t1 = (942 - 942);
    if (!(FGvPm6EwOHW != k8d1o3pRBmhf))
        cout << "Data Error" << endl;
    if (!((583 - 582) != CXmaZEsgOf8)) {
        if (k8d1o3pRBmhf < FGvPm6EwOHW) {
            for (int c4V0znE = k8d1o3pRBmhf;
            FGvPm6EwOHW > c4V0znE; c4V0znE++)
                yVhgZ5SpD7t1 = yVhgZ5SpD7t1 + xXNBy0[c4V0znE];
        }
        else {
            for (int c4V0znE = FGvPm6EwOHW;
            c4V0znE < k8d1o3pRBmhf; c4V0znE++)
                yVhgZ5SpD7t1 = yVhgZ5SpD7t1 + xXNBy0[c4V0znE];
        }
        if (!((709 - 709) != yVhgZ5SpD7t1 % (568 - 561)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else {
        if (FGvPm6EwOHW > k8d1o3pRBmhf) {
            for (int c4V0znE = k8d1o3pRBmhf;
            FGvPm6EwOHW > c4V0znE; c4V0znE++)
                yVhgZ5SpD7t1 = yVhgZ5SpD7t1 + qSz06wDmE[c4V0znE];
        }
        else {
            for (int c4V0znE = FGvPm6EwOHW;
            k8d1o3pRBmhf > c4V0znE; c4V0znE++)
                yVhgZ5SpD7t1 = yVhgZ5SpD7t1 + qSz06wDmE[c4V0znE];
        }
        if (!((369 - 369) != yVhgZ5SpD7t1 % (435 - 428)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main () {
    int kapzTWAsQji0;
    int wvr09hCkyG;
    int dcn2Km;
    int Yan8Pu;
    cin >> wvr09hCkyG;
    for (; wvr09hCkyG != (165 - 165);) {
        cin >> kapzTWAsQji0 >> dcn2Km >> Yan8Pu;
        wvr09hCkyG--;
        if ((!((296 - 296) != kapzTWAsQji0 % (965 - 961)) && kapzTWAsQji0 % (677 - 577) != (196 - 196)) || !((107 - 107) != kapzTWAsQji0 % (1366 - 966)))
            s7W9xqEHyOL4 ((361 - 360), dcn2Km, Yan8Pu);
        else
            s7W9xqEHyOL4 ((503 - 503), dcn2Km, Yan8Pu);
    }
    return (681 - 681);
}

