int main () {
    int f9vBGVcL;
    int eRIJKW91;
    int h0yT2P;
    int CMYg3CE2kcb;
    int z5igoGIWLE;
    int A03JcyvSRL;
    f9vBGVcL = 0;
    eRIJKW91 = 0;
    cin >> z5igoGIWLE;
    {
        A03JcyvSRL = 1;
        while (z5igoGIWLE >= A03JcyvSRL) {
            cin >> h0yT2P;
            cin >> CMYg3CE2kcb;
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
            }
            if (h0yT2P >= 90 && 140 >= h0yT2P && CMYg3CE2kcb >= 60 && CMYg3CE2kcb <= 90) {
                f9vBGVcL = f9vBGVcL + 1;
                if (A03JcyvSRL == z5igoGIWLE && f9vBGVcL >= eRIJKW91)
                    eRIJKW91 = f9vBGVcL;
            }
            else {
                if (f9vBGVcL >= eRIJKW91)
                    eRIJKW91 = f9vBGVcL;
                f9vBGVcL = 0;
            }
            A03JcyvSRL = A03JcyvSRL +1;
        };
    }
    cout << eRIJKW91 << endl;
    return 0;
}

