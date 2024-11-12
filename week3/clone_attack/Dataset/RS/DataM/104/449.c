int loANRD7nrXHk (int ZoM51p, int VGSIsOgtobXq) {
    if (!(VGSIsOgtobXq != ZoM51p))
        return ZoM51p;
    else if (ZoM51p / (962 - 960) > VGSIsOgtobXq)
        return loANRD7nrXHk (ZoM51p / (804 - 802), VGSIsOgtobXq);
    else
        return loANRD7nrXHk (VGSIsOgtobXq, ZoM51p / 2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int ZoM51p;
    int VGSIsOgtobXq;
    cin >> ZoM51p >> VGSIsOgtobXq;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (ZoM51p < VGSIsOgtobXq) {
        ZoM51p = ZoM51p ^ VGSIsOgtobXq;
        VGSIsOgtobXq = ZoM51p ^ VGSIsOgtobXq;
        ZoM51p = ZoM51p ^ VGSIsOgtobXq;
    }
    cout << loANRD7nrXHk (ZoM51p, VGSIsOgtobXq) << endl;
    return (548 - 548);
}

