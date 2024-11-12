int main () {
    int r154tlv;
    cin >> r154tlv;
    while (true) {
        if (!(1 != r154tlv)) {
            cout << "End" << endl;
            break;
        }
        if (!(1 == r154tlv) && r154tlv % (992 - 990) == 1) {
            cout << r154tlv << "*3+1=" << r154tlv * 3 + 1 << endl;
            r154tlv = r154tlv * 3 + 1;
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
        if (r154tlv % 2 == 0) {
            cout << r154tlv << "/2=" << r154tlv / 2 << endl;
            r154tlv = r154tlv / 2;
        }
        if (r154tlv == 1) {
            cout << "End" << endl;
            break;
        };
    }
    return 0;
}

