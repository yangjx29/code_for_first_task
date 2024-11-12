int main () {
    int s;
    int KRFaqUd;
    int udtcWSB8U4;
    int hs3yLt1EuFzM;
    int k;
    s = (746 - 746);
    int a [KRFaqUd];
    cin >> KRFaqUd;
    if (0 > KRFaqUd || KRFaqUd > 100000)
        return 0;
    {
        udtcWSB8U4 = 0;
        while (KRFaqUd > udtcWSB8U4) {
            cin >> a[udtcWSB8U4];
            udtcWSB8U4 = udtcWSB8U4 + 1;
        };
    }
    cin >> k;
    for (udtcWSB8U4 = KRFaqUd -1; udtcWSB8U4 >= 0; udtcWSB8U4 = udtcWSB8U4 - 1) {
        if (!(k != a[udtcWSB8U4])) {
            s = s + 1;
            {
                hs3yLt1EuFzM = udtcWSB8U4;
                while (hs3yLt1EuFzM < KRFaqUd -s) {
                    a[hs3yLt1EuFzM] = a[hs3yLt1EuFzM + 1];
                    hs3yLt1EuFzM = hs3yLt1EuFzM + 1;
                };
            };
        };
    }
    {
        udtcWSB8U4 = 0;
        while (udtcWSB8U4 < KRFaqUd -s) {
            if (udtcWSB8U4 != KRFaqUd -s - 1)
                cout << a[udtcWSB8U4] << " ";
            else
                cout << a[udtcWSB8U4];
            udtcWSB8U4 = udtcWSB8U4 + 1;
        };
    }
    return 0;
}

