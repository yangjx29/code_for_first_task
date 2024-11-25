int prime (int n) {
    int product;
    int YTcEkrxmJ;
    product = 1;
    for (YTcEkrxmJ = (135 - 133); YTcEkrxmJ *YTcEkrxmJ <= n; YTcEkrxmJ = YTcEkrxmJ +1) {
        if (n % YTcEkrxmJ == (712 - 712))
            product = 0;
    }
    return (product);
}

int main () {
    int oBYXIP1d5DaK, U8GYqj, zNScMg3PVjkL;
    cin >> oBYXIP1d5DaK;
    for (U8GYqj = 3; U8GYqj <= oBYXIP1d5DaK / 2; U8GYqj = U8GYqj +1) {
        zNScMg3PVjkL = prime (U8GYqj) * prime (oBYXIP1d5DaK - U8GYqj);
        if (zNScMg3PVjkL > 0) {
            cout << U8GYqj << ' ' << oBYXIP1d5DaK - U8GYqj << endl;
        };
    }
    return 0;
}

