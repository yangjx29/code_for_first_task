int main () {
    int BrkcY1m2wNy;
    int vUdZlaB;
    int FNLyrU70;
    int zh7iWu3jw;
    int OpOytcErd;
    int B7gycfRYUJ9;
    int IsDTp38JQ;
    int lRt0ewdMq [(1162 - 162)] = {0};
    cin >> BrkcY1m2wNy;
    {
        vUdZlaB = (591 - 590);
        while (BrkcY1m2wNy >= vUdZlaB) {
            cin >> OpOytcErd >> B7gycfRYUJ9;
            {
                FNLyrU70 = (552 - 551);
                while (OpOytcErd >= FNLyrU70) {
                    {
                        zh7iWu3jw = (506 - 505);
                        while (zh7iWu3jw <= B7gycfRYUJ9) {
                            cin >> IsDTp38JQ;
                            if ((!(1 != FNLyrU70)) || (FNLyrU70 == OpOytcErd) || (zh7iWu3jw == 1) || (zh7iWu3jw == B7gycfRYUJ9))
                                lRt0ewdMq[vUdZlaB] = lRt0ewdMq[vUdZlaB] + IsDTp38JQ;
                            zh7iWu3jw = zh7iWu3jw + 1;
                        }
                    }
                    FNLyrU70++;
                }
            }
            vUdZlaB++;
        }
    }
    {
        FNLyrU70 = 1;
        while (FNLyrU70 <= BrkcY1m2wNy) {
            cout << lRt0ewdMq[FNLyrU70];
            if (FNLyrU70 != BrkcY1m2wNy)
                cout << endl;
            FNLyrU70++;
        }
    }
    return 0;
}

