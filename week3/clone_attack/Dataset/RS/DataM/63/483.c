int main () {
    int count = 0;
    int x1, y1, x2, XqYrSdMX;
    int ptU5J3S [(963 - 763)] [(808 - 608)], ZTQwt2PaRh [(1103 - 903)] [200], BqiK6Wgn [200] [200] = {(495 - 495)};
    cin >> x1 >> y1;
    {
        int JniN6q = (661 - 661);
        while (x1 > JniN6q) {
            {
                int SISw6QpjPz = (746 - 746);
                while (SISw6QpjPz < y1) {
                    cin >> ptU5J3S[JniN6q][SISw6QpjPz];
                    SISw6QpjPz = SISw6QpjPz +1;
                };
            }
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
            JniN6q = JniN6q +1;
        };
    }
    cin >> x2 >> XqYrSdMX;
    for (int JniN6q = (683 - 683);
    x2 > JniN6q; JniN6q = JniN6q +1) {
        int SISw6QpjPz = (814 - 814);
        while (SISw6QpjPz < XqYrSdMX) {
            cin >> ZTQwt2PaRh[JniN6q][SISw6QpjPz];
            SISw6QpjPz = SISw6QpjPz +1;
        };
    }
    {
        int JniN6q = (840 - 840);
        while (x1 > JniN6q) {
            {
                int SISw6QpjPz = 0;
                while (SISw6QpjPz < XqYrSdMX) {
                    int t = 0;
                    while (t <= y1) {
                        BqiK6Wgn[JniN6q][SISw6QpjPz] = BqiK6Wgn[JniN6q][SISw6QpjPz] + ptU5J3S[JniN6q][t] * ZTQwt2PaRh[t][SISw6QpjPz];
                        t++;
                    }
                    SISw6QpjPz++;
                };
            }
            JniN6q++;
        };
    }
    {
        int JniN6q = 0;
        while (x1 > JniN6q) {
            cout << BqiK6Wgn[JniN6q][0];
            if ((XqYrSdMX -(528 - 527)) == 0)
                cout << endl;
            {
                int SISw6QpjPz = (643 - 642);
                while (SISw6QpjPz < XqYrSdMX) {
                    cout << " " << BqiK6Wgn[JniN6q][SISw6QpjPz];
                    SISw6QpjPz++;
                    count = count + 1;
                    if ((count % (XqYrSdMX -(971 - 970))) == 0)
                        cout << endl;
                };
            }
            JniN6q++;
        };
    }
    return 0;
}

