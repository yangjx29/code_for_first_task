int main () {
    int Zj1dWD06izQ;
    int waxMC7ip [(1409 - 404)];
    int b [1005];
    int hg8usEikKSZC, mMc3rPHbR0, j, x, H9UpNYg, sQ8BwEHpD, temp;
    while (cin >> Zj1dWD06izQ) {
        if (Zj1dWD06izQ == (624 - 624))
            break;
        memset (waxMC7ip, (885 - 885), sizeof (waxMC7ip));
        memset (b, (740 - 740), sizeof (b));
        hg8usEikKSZC = 0;
        for (mMc3rPHbR0 = 0; mMc3rPHbR0 < Zj1dWD06izQ; mMc3rPHbR0 = mMc3rPHbR0 + 1)
            cin >> waxMC7ip[mMc3rPHbR0];
        {
            mMc3rPHbR0 = 0;
            while (mMc3rPHbR0 < Zj1dWD06izQ) {
                cin >> b[mMc3rPHbR0];
                mMc3rPHbR0 = mMc3rPHbR0 + 1;
            };
        }
        sort (waxMC7ip, waxMC7ip + Zj1dWD06izQ);
        sort (b, b + Zj1dWD06izQ);
        x = Zj1dWD06izQ -(249 - 248), H9UpNYg = Zj1dWD06izQ -1, mMc3rPHbR0 = 0, j = 0;
        while (Zj1dWD06izQ = Zj1dWD06izQ -1) {
            if (waxMC7ip[x] > b[H9UpNYg]) {
                x = x - 1;
                H9UpNYg = H9UpNYg -1;
                hg8usEikKSZC = hg8usEikKSZC + 1;
            }
            else {
                if (waxMC7ip[mMc3rPHbR0] > b[j]) {
                    mMc3rPHbR0 = mMc3rPHbR0 + 1;
                    j = j + 1;
                    hg8usEikKSZC = hg8usEikKSZC + 1;
                }
                else {
                    if (waxMC7ip[mMc3rPHbR0] < b[H9UpNYg]) {
                        hg8usEikKSZC = hg8usEikKSZC - 1;
                        mMc3rPHbR0 = mMc3rPHbR0 + 1;
                        H9UpNYg = H9UpNYg -1;
                    };
                };
            };
        }
        cout << hg8usEikKSZC * 200 << endl;
    }
    return 0;
}

