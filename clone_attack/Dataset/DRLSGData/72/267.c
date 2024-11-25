int main () {
    int A5ToBn [1000] [1000];
    int KtAh1k9Q;
    int Xwn3HbCSg6B;
    int r3c2GXWbtz;
    int IJIMtVArpa;
    int lX7SP3W1Ns;
    int k;
    int vACqnk;
    IJIMtVArpa = 0;
    cin >> r3c2GXWbtz >> lX7SP3W1Ns;
    {
        Xwn3HbCSg6B = 0;
        while (r3c2GXWbtz > Xwn3HbCSg6B) {
            {
                KtAh1k9Q = 0;
                while (KtAh1k9Q < lX7SP3W1Ns) {
                    cin >> A5ToBn[Xwn3HbCSg6B][KtAh1k9Q];
                    KtAh1k9Q++;
                }
            }
            Xwn3HbCSg6B++;
        }
    }
    {
        Xwn3HbCSg6B = 0;
        for (; Xwn3HbCSg6B < r3c2GXWbtz;) {
            KtAh1k9Q = 0;
            while (KtAh1k9Q < lX7SP3W1Ns) {
                if (Xwn3HbCSg6B == 0) {
                    if (KtAh1k9Q == 0 && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q +1] && A5ToBn[Xwn3HbCSg6B +1][KtAh1k9Q] <= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                    else if (KtAh1k9Q == lX7SP3W1Ns - 1 && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q -1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B +1][KtAh1k9Q]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                    else if (A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q -1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B +1][KtAh1k9Q] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q +1]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                }
                else if (0 < Xwn3HbCSg6B &&Xwn3HbCSg6B < r3c2GXWbtz - 1) {
                    if (KtAh1k9Q == 0 && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q +1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B +1][KtAh1k9Q] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B -1][KtAh1k9Q]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                    else if (KtAh1k9Q == lX7SP3W1Ns - 1 && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q -1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B +1][KtAh1k9Q] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B -1][KtAh1k9Q]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                    else if (A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q -1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B +1][KtAh1k9Q] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q +1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B -1][KtAh1k9Q]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                }
                else if (Xwn3HbCSg6B == r3c2GXWbtz - 1) {
                    if (KtAh1k9Q == 0 && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q +1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B -1][KtAh1k9Q]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                    else if (KtAh1k9Q == lX7SP3W1Ns - 1 && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q -1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B -1][KtAh1k9Q]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                    else if (A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q -1] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B -1][KtAh1k9Q] && A5ToBn[Xwn3HbCSg6B][KtAh1k9Q] >= A5ToBn[Xwn3HbCSg6B][KtAh1k9Q +1]) {
                        cout << Xwn3HbCSg6B << " " << KtAh1k9Q << endl;
                    }
                }
                KtAh1k9Q++;
            }
            Xwn3HbCSg6B++;
        }
    }
}

