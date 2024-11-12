int MfH4n3wZlA1 (int, int);

int main () {
    int ua0mvx, KcpSZJu, Jx03UI5MXft;
    cin >> ua0mvx;
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
    for (KcpSZJu = 0; ua0mvx > KcpSZJu; KcpSZJu++) {
        cin >> Jx03UI5MXft;
        cout << MfH4n3wZlA1 (Jx03UI5MXft, (472 - 470)) << endl;
    }
    return 0;
}

int MfH4n3wZlA1 (int Jx03UI5MXft, int N8hFQfE) {
    int kuBb3D9t4, KcpSZJu;
    int num = 1;
    if (!(1 != Jx03UI5MXft))
        return 0;
    kuBb3D9t4 = sqrt (Jx03UI5MXft);
    for (KcpSZJu = N8hFQfE; KcpSZJu <= kuBb3D9t4; KcpSZJu++)
        if (Jx03UI5MXft % KcpSZJu == 0)
            num += MfH4n3wZlA1 (Jx03UI5MXft / KcpSZJu, KcpSZJu);
    return num;
}

