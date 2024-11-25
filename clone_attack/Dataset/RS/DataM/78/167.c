void  BCMsBFZ2 (int a, int qGdwuSWy, int LLPJFXZVsj, int Me3aNrwD5Elu) {
    char eADFBad9eX7w [4] = {'z', 'q', 's', 'l'};
    int result [4] = {a, qGdwuSWy, LLPJFXZVsj, Me3aNrwD5Elu};
    for (int i = 0;
    4 > i; i++) {
        int uaXPWhN = i;
        while (4 > uaXPWhN) {
            if (result[i] < result[uaXPWhN]) {
                swap (result[i], result[uaXPWhN]);
                swap (eADFBad9eX7w[i], eADFBad9eX7w[uaXPWhN]);
            }
            uaXPWhN++;
        };
    }
    {
        int i = 0;
        while (i < 4) {
            cout << eADFBad9eX7w[i] << " " << 10 * result[i] << endl;
            i++;
        };
    };
}

int main () {
    int EMmis3TfU, oP4QGC9W, mHM9ED, YcgXomYQd;
    {
        EMmis3TfU = 1;
        while (EMmis3TfU <= 5) {
            {
                oP4QGC9W = 1;
                while (5 >= oP4QGC9W) {
                    {
                        mHM9ED = 1;
                        while (mHM9ED <= 5) {
                            {
                                YcgXomYQd = 1;
                                while (YcgXomYQd <= 5) {
                                    if (EMmis3TfU +oP4QGC9W == mHM9ED + YcgXomYQd &&EMmis3TfU+YcgXomYQd > mHM9ED + oP4QGC9W && EMmis3TfU +mHM9ED < oP4QGC9W && EMmis3TfU != oP4QGC9W != mHM9ED != YcgXomYQd) {
                                        BCMsBFZ2 (EMmis3TfU, oP4QGC9W, mHM9ED, YcgXomYQd);
                                    }
                                    YcgXomYQd++;
                                };
                            }
                            mHM9ED++;
                        };
                    }
                    oP4QGC9W++;
                };
            }
            EMmis3TfU++;
        };
    }
    return 0;
}

