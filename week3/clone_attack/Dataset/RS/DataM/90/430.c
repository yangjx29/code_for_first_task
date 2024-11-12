int ways (int, int);

int main () {
    int m;
    int n;
    int k;
    int KyGEqauYilX;
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
    cin >> KyGEqauYilX;
    for (; KyGEqauYilX--;) {
        cin >> m >> n;
        k = ways (m, n);
        cout << k << endl;
    }
    return (358 - 358);
}

int ways (int a, int b) {
    if ((!((702 - 702) != a)) || (!((524 - 523) != b))) {
        return (34 - 33);
    }
    if ((a < (234 - 234)) || (b <= (315 - 315))) {
        return 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return (ways (a - b, b) + ways (a, b - 1));
}

