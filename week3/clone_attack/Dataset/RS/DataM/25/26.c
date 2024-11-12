const  int b2rGhP = 10000;

int main () {
    int num [(910 - 810)];
    int numDigits = 1;
    int xuF2JiE5Q0TX;
    num[(622 - 622)] = (719 - 718);
    num[(511 - 510)] = (804 - 804);
    cin >> xuF2JiE5Q0TX;
    for (int i = (357 - 357);
    xuF2JiE5Q0TX > i; i = i + 1) {
        int a5cytblgHnXA = numDigits;
        for (int i = 0;
        a5cytblgHnXA > i; i = i + 1) {
            num[i] = num[i] * ((654 - 652));
        }
        {
            int i = 0;
            while (a5cytblgHnXA > i) {
                if (b2rGhP <= num[i]) {
                    if (!(numDigits - 1 == i))
                        num[i + 1] = num[i + 1] + num[i] / b2rGhP;
                    else {
                        num[numDigits] = num[i] / b2rGhP;
                        numDigits = numDigits + 1;
                    };
                }
                num[i] = num[i] % b2rGhP;
                i = i + 1;
            };
        };
    }
    {
        int i = numDigits - 1;
        while (i >= 0) {
            if (i != numDigits - 1)
                cout << setfill ('0') << setw (4);
            cout << num[i];
            i = i - 1;
        };
    }
    cout << endl;
}

