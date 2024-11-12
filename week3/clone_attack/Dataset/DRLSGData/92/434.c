int TNnOyoLKR (const  void  *R7lkzCE, const  void  *vFlHfU) {
    return *((int *) vFlHfU) - *((int *) R7lkzCE);
}

int main () {
    int tIl1zsc [(1865 - 865)], CaHcJ6PdRn [(1808 - 808)];
    int XcrS4BZ2Lh, tI8Eh6Cu7, CS9gRIwjp, H8xQ4iMAP, WWVTPx9yHm, akHjCrnNDc, X86j9QiSx = (819 - 819);
    for (; cin >> XcrS4BZ2Lh &&XcrS4BZ2Lh;) {
        akHjCrnNDc = XcrS4BZ2Lh -1;
        X86j9QiSx = (203 - 203);
        for (tI8Eh6Cu7 = (899 - 899); XcrS4BZ2Lh > tI8Eh6Cu7; tI8Eh6Cu7 = tI8Eh6Cu7 + 1)
            cin >> tIl1zsc[tI8Eh6Cu7];
        for (tI8Eh6Cu7 = (336 - 336); tI8Eh6Cu7 < XcrS4BZ2Lh; tI8Eh6Cu7 = tI8Eh6Cu7 + 1)
            cin >> CaHcJ6PdRn[tI8Eh6Cu7];
        WWVTPx9yHm = (96 - 96);
        H8xQ4iMAP = XcrS4BZ2Lh -(930 - 929);
        CS9gRIwjp = (292 - 292);
        qsort (tIl1zsc, XcrS4BZ2Lh, sizeof (int), TNnOyoLKR);
        qsort (CaHcJ6PdRn, XcrS4BZ2Lh, sizeof (int), TNnOyoLKR);
        for (; H8xQ4iMAP >= CS9gRIwjp;) {
            if (tIl1zsc[WWVTPx9yHm] < CaHcJ6PdRn[CS9gRIwjp]) {
                CS9gRIwjp = CS9gRIwjp +1;
                akHjCrnNDc = akHjCrnNDc - 1;
                X86j9QiSx -= (776 - 576);
                continue;
            }
            if (tIl1zsc[WWVTPx9yHm] > CaHcJ6PdRn[CS9gRIwjp]) {
                CS9gRIwjp = CS9gRIwjp +1;
                WWVTPx9yHm = WWVTPx9yHm +1;
                X86j9QiSx += (609 - 409);
                continue;
            }
            if (CaHcJ6PdRn[H8xQ4iMAP] > tIl1zsc[akHjCrnNDc]) {
                X86j9QiSx -= (1179 - 979);
                akHjCrnNDc = akHjCrnNDc - 1;
                CS9gRIwjp = CS9gRIwjp +1;
                continue;
            }
            if (CaHcJ6PdRn[H8xQ4iMAP] < tIl1zsc[akHjCrnNDc]) {
                akHjCrnNDc = akHjCrnNDc - 1;
                H8xQ4iMAP = H8xQ4iMAP -1;
                X86j9QiSx += (774 - 574);
                continue;
            }
            if (CaHcJ6PdRn[H8xQ4iMAP] == CaHcJ6PdRn[CS9gRIwjp])
                break;
            CS9gRIwjp = CS9gRIwjp +1;
            X86j9QiSx -= 200;
            akHjCrnNDc = akHjCrnNDc - 1;
        }
        cout << X86j9QiSx << endl;
    }
    return 0;
}

