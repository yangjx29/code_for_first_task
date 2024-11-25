int main () {
    int P6cAnpwftL, EBJsZ07, gwiYgyBG, KXzvBpY3, T5cIEfZJskv, rt0s5b2v, InSLPj8UeQur, p2yftNx6qFRv = (676 - 676);
    int vsiK48Gf [13] = {(260 - 260), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> P6cAnpwftL >> EBJsZ07 >> gwiYgyBG >> KXzvBpY3 >> T5cIEfZJskv >> rt0s5b2v;
    if (P6cAnpwftL != KXzvBpY3) {
        {
            InSLPj8UeQur = 73 - 72;
            while (KXzvBpY3 > InSLPj8UeQur) {
                if ((!((495 - 495) != InSLPj8UeQur % (191 - 187)) && !(0 == InSLPj8UeQur % (388 - 288))) || (InSLPj8UeQur % 400 == 0)) {
                    p2yftNx6qFRv = p2yftNx6qFRv + 366;
                }
                else {
                    p2yftNx6qFRv += 365;
                }
                InSLPj8UeQur = InSLPj8UeQur +1;
            };
        }
        for (InSLPj8UeQur = EBJsZ07 +1; InSLPj8UeQur <= 12; InSLPj8UeQur = InSLPj8UeQur +1)
            p2yftNx6qFRv = p2yftNx6qFRv + vsiK48Gf[InSLPj8UeQur];
        {
            InSLPj8UeQur = 1;
            while (InSLPj8UeQur < T5cIEfZJskv) {
                p2yftNx6qFRv += vsiK48Gf[InSLPj8UeQur];
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
                InSLPj8UeQur++;
            };
        }
        p2yftNx6qFRv = p2yftNx6qFRv + vsiK48Gf[EBJsZ07] - gwiYgyBG + rt0s5b2v;
        if (((P6cAnpwftL % 4 == 0 && P6cAnpwftL % 100 != 0) || (!(0 != P6cAnpwftL % 400))) && EBJsZ07 <= (346 - 344))
            p2yftNx6qFRv = p2yftNx6qFRv + 1;
        if (((!(0 != KXzvBpY3 % 4) && InSLPj8UeQur % 100 != 0) || (InSLPj8UeQur % 400 == 0)) && T5cIEfZJskv > 2)
            p2yftNx6qFRv++;
        cout << p2yftNx6qFRv;
    }
    else if (EBJsZ07 != T5cIEfZJskv) {
        for (InSLPj8UeQur = EBJsZ07 +1; InSLPj8UeQur < T5cIEfZJskv; InSLPj8UeQur = InSLPj8UeQur +1)
            p2yftNx6qFRv += vsiK48Gf[InSLPj8UeQur];
        if ((P6cAnpwftL % 4 == 0 && P6cAnpwftL % 100 != 0) || (P6cAnpwftL % 400 == 0) && EBJsZ07 <= 2 && T5cIEfZJskv > 2)
            p2yftNx6qFRv++;
        cout << p2yftNx6qFRv;
    }
    else {
        p2yftNx6qFRv = rt0s5b2v - gwiYgyBG;
        cout << p2yftNx6qFRv;
    }
    return 0;
}

