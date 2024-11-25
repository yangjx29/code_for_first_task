int main () {
    char Nq9Ykc3b [50];
    int Mwto4aC;
    int mYXRATaJ;
    int T0WSZQGmfpLe;
    int xbA9N7EBsTq;
    Mwto4aC = (127 - 127);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    mYXRATaJ = (163 - 163);
    T0WSZQGmfpLe = 0;
    xbA9N7EBsTq = 0;
    cin >> Mwto4aC;
    cin.get ();
    for (; 0 < Mwto4aC;) {
        memset (Nq9Ykc3b, 0, sizeof (Nq9Ykc3b));
        cin.getline (Nq9Ykc3b, 50);
        xbA9N7EBsTq = 1;
        mYXRATaJ = 0;
        mYXRATaJ = strlen (Nq9Ykc3b);
        if ('0' <= Nq9Ykc3b[0] && '9' >= Nq9Ykc3b[0]) {
            xbA9N7EBsTq = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        else {
            T0WSZQGmfpLe = 0;
            while (mYXRATaJ - 1 >= T0WSZQGmfpLe) {
                if (('0' > Nq9Ykc3b[T0WSZQGmfpLe] || (Nq9Ykc3b[T0WSZQGmfpLe] > '9' && Nq9Ykc3b[T0WSZQGmfpLe] < 'A') || (Nq9Ykc3b[T0WSZQGmfpLe] > 'Z' && Nq9Ykc3b[T0WSZQGmfpLe] < 'a') || (Nq9Ykc3b[T0WSZQGmfpLe] > 'z')) && Nq9Ykc3b[T0WSZQGmfpLe] != '_') {
                    xbA9N7EBsTq = 0;
                    break;
                }
                T0WSZQGmfpLe = T0WSZQGmfpLe +1;
            };
        }
        Mwto4aC = Mwto4aC -1;
        if (xbA9N7EBsTq == 0) {
            cout << "no" << endl;
        }
        if (xbA9N7EBsTq == 1) {
            cout << "yes" << endl;
        };
    }
    return 0;
}

