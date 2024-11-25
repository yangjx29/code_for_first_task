int n;
int num1 [1001];
int num2 [1001];

int cmp (const  void  *zjrsoh2, const  void  *b) {
    return *(int*) b - *(int*) zjrsoh2;
}

int main () {
    while (1) {
        int dErTyI;
        dErTyI = n - 1;
        int j5aLZr = n - 1;
        int UlOvqwz = 0;
        int N98CDF3yuEG;
        int eU2J3usQ = 0;
        cin >> n;
        if (!n)
            break;
        memset (num1, (690 - 690), sizeof (num1));
        {
            int XH1ldYpC = 0;
            while (XH1ldYpC < n) {
                cin >> num1[XH1ldYpC];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                XH1ldYpC++;
            };
        }
        memset (num2, (832 - 832), sizeof (num2));
        {
            int XH1ldYpC = 0;
            while (XH1ldYpC < n) {
                cin >> num2[XH1ldYpC];
                XH1ldYpC++;
            };
        }
        qsort (num1, n, sizeof (num1 [0]), cmp);
        qsort (num2, n, sizeof (num2 [0]), cmp);
        {
            int XH1ldYpC = 0;
            while (XH1ldYpC < n) {
                if (num1[UlOvqwz] > num2[XH1ldYpC]) {
                    UlOvqwz++;
                    eU2J3usQ++;
                }
                else if (num2[XH1ldYpC] > num1[UlOvqwz]) {
                    eU2J3usQ--;
                    dErTyI--;
                }
                else {
                    int BrukJm = dErTyI, N98CDF3yuEG = j5aLZr;
                    while (BrukJm >= UlOvqwz) {
                        if (num1[BrukJm] > num2[N98CDF3yuEG]) {
                            j5aLZr--;
                            dErTyI--;
                            eU2J3usQ++;
                        }
                        else {
                            j5aLZr = N98CDF3yuEG;
                            if (num1[BrukJm] < num2[XH1ldYpC])
                                eU2J3usQ--;
                            dErTyI = --BrukJm;
                            break;
                        }
                        N98CDF3yuEG--;
                        BrukJm--;
                    };
                }
                if (UlOvqwz > dErTyI)
                    break;
                XH1ldYpC++;
            };
        }
        cout << eU2J3usQ * 200 << endl;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

