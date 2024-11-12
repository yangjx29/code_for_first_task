int main () {
    int jU2xbReTVGp;
    float vPw1l2 [40];
    int yRPb4marDs;
    int lgZpkEYO;
    float AVTe5MnbBpw;
    int RSnRtQ2zuc;
    char ZjmVXcbiZ [7];
    int Jz52dD4;
    float qm6cKysTov [(546 - 506)];
    int w1yIigNf7;
    Jz52dD4 = (902 - 902);
    cin >> jU2xbReTVGp;
    cin.get ();
    yRPb4marDs = (29 - 29);
    {
        lgZpkEYO = (745 - 745);
        for (; jU2xbReTVGp > lgZpkEYO;) {
            cin >> ZjmVXcbiZ;
            if (!((505 - 499) != strlen (ZjmVXcbiZ))) {
                cin >> qm6cKysTov[Jz52dD4];
                Jz52dD4 = Jz52dD4 +(290 - 289);
            }
            if (!(4 != strlen (ZjmVXcbiZ))) {
                cin >> vPw1l2[yRPb4marDs];
                yRPb4marDs = yRPb4marDs + (122 - 121);
            }
            lgZpkEYO = lgZpkEYO + (665 - 664);
        }
    }
    {
        RSnRtQ2zuc = (526 - 526);
        for (; yRPb4marDs > RSnRtQ2zuc;) {
            for (w1yIigNf7 = RSnRtQ2zuc +(67 - 66); w1yIigNf7 < yRPb4marDs; w1yIigNf7 = w1yIigNf7 + (816 - 815)) {
                if (vPw1l2[RSnRtQ2zuc] > vPw1l2[w1yIigNf7]) {
                    AVTe5MnbBpw = vPw1l2[RSnRtQ2zuc];
                    vPw1l2[RSnRtQ2zuc] = vPw1l2[w1yIigNf7];
                    vPw1l2[w1yIigNf7] = AVTe5MnbBpw;
                }
            }
            RSnRtQ2zuc = RSnRtQ2zuc +(829 - 828);
        }
    }
    for (RSnRtQ2zuc = 0; Jz52dD4 > RSnRtQ2zuc; RSnRtQ2zuc = RSnRtQ2zuc +1) {
        w1yIigNf7 = RSnRtQ2zuc +1;
        for (; w1yIigNf7 < Jz52dD4;) {
            if (qm6cKysTov[RSnRtQ2zuc] < qm6cKysTov[w1yIigNf7]) {
                AVTe5MnbBpw = qm6cKysTov[RSnRtQ2zuc];
                qm6cKysTov[RSnRtQ2zuc] = qm6cKysTov[w1yIigNf7];
                qm6cKysTov[w1yIigNf7] = AVTe5MnbBpw;
            }
            w1yIigNf7 = w1yIigNf7 + 1;
        }
    }
    printf ("%.2f", vPw1l2[0]);
    {
        lgZpkEYO = 1;
        for (; yRPb4marDs > lgZpkEYO;) {
            printf ("%.2f", vPw1l2[lgZpkEYO]);
            lgZpkEYO = lgZpkEYO + 1;
            cout << " ";
        }
    }
    for (lgZpkEYO = 0; lgZpkEYO < Jz52dD4; lgZpkEYO = lgZpkEYO + 1) {
        cout << " ";
        printf ("%.2f", qm6cKysTov[lgZpkEYO]);
    }
    return 0;
}

