struct   point {
    int Xd5qG4c;
    int y;
    int HMOwVua;
}
i9jKkVptL [(263 - 213)];
struct   data {
    int ffmiAGzbOsy4;
    struct   point a;
    struct   point b;
    double  distance;
}
UdPvuyU5kIt [(10666 - 666)], temp;

int main () {
    int MXQLD2iHkEu;
    int MWL7At;
    int Jz25YKUdm;
    int S5w0OIDrCb;
    int k;
    MXQLD2iHkEu = (562 - 562);
    cin >> S5w0OIDrCb;
    {
        Jz25YKUdm = (348 - 348);
        for (; S5w0OIDrCb > Jz25YKUdm;) {
            cin >> i9jKkVptL[Jz25YKUdm].Xd5qG4c;
            cin >> i9jKkVptL[Jz25YKUdm].y;
            cin >> i9jKkVptL[Jz25YKUdm].HMOwVua;
            Jz25YKUdm = Jz25YKUdm +(27 - 26);
        }
    }
    for (Jz25YKUdm = (651 - 651); S5w0OIDrCb > Jz25YKUdm; Jz25YKUdm = Jz25YKUdm +(682 - 681))
        for (MWL7At = Jz25YKUdm +(987 - 986); S5w0OIDrCb > MWL7At; MWL7At = MWL7At +(683 - 682)) {
            UdPvuyU5kIt[MXQLD2iHkEu].ffmiAGzbOsy4 = MXQLD2iHkEu;
            UdPvuyU5kIt[MXQLD2iHkEu].a = i9jKkVptL[Jz25YKUdm];
            UdPvuyU5kIt[MXQLD2iHkEu].b = i9jKkVptL[MWL7At];
            UdPvuyU5kIt[MXQLD2iHkEu].distance = sqrt ((i9jKkVptL[Jz25YKUdm].Xd5qG4c - i9jKkVptL[MWL7At].Xd5qG4c) * (i9jKkVptL[Jz25YKUdm].Xd5qG4c - i9jKkVptL[MWL7At].Xd5qG4c) + (i9jKkVptL[Jz25YKUdm].y - i9jKkVptL[MWL7At].y) * (i9jKkVptL[Jz25YKUdm].y - i9jKkVptL[MWL7At].y) + (i9jKkVptL[Jz25YKUdm].HMOwVua - i9jKkVptL[MWL7At].HMOwVua) * (i9jKkVptL[Jz25YKUdm].HMOwVua - i9jKkVptL[MWL7At].HMOwVua));
            MXQLD2iHkEu++;
        }
    k = MXQLD2iHkEu;
    for (Jz25YKUdm = (400 - 400); k > Jz25YKUdm; Jz25YKUdm = Jz25YKUdm +(335 - 334))
        for (MWL7At = Jz25YKUdm +1; k > MWL7At; MWL7At++) {
            if (UdPvuyU5kIt[MWL7At].distance > UdPvuyU5kIt[Jz25YKUdm].distance || (!(UdPvuyU5kIt[MWL7At].distance != UdPvuyU5kIt[Jz25YKUdm].distance) && UdPvuyU5kIt[Jz25YKUdm].ffmiAGzbOsy4 > UdPvuyU5kIt[MWL7At].ffmiAGzbOsy4)) {
                temp = UdPvuyU5kIt[Jz25YKUdm];
                UdPvuyU5kIt[Jz25YKUdm] = UdPvuyU5kIt[MWL7At];
                UdPvuyU5kIt[MWL7At] = temp;
            }
        }
    {
        Jz25YKUdm = (888 - 888);
        for (; Jz25YKUdm < k;) {
            cout << "(" << UdPvuyU5kIt[Jz25YKUdm].a.Xd5qG4c << "," << UdPvuyU5kIt[Jz25YKUdm].a.y << "," << UdPvuyU5kIt[Jz25YKUdm].a.HMOwVua << ")-(" << UdPvuyU5kIt[Jz25YKUdm].b.Xd5qG4c << "," << UdPvuyU5kIt[Jz25YKUdm].b.y << "," << UdPvuyU5kIt[Jz25YKUdm].b.HMOwVua << ")=";
            printf ("%.2lf\n", UdPvuyU5kIt[Jz25YKUdm].distance);
            Jz25YKUdm++;
        }
    }
    return (210 - 210);
}

