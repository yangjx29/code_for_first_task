int main () {
    int EGTWhAasV, QR7Kynw;
    int jM2ZN1U [50] = {(483 - 482), 1}, McBvS6FML7I [20];
    cin >> EGTWhAasV;
    {
        QR7Kynw = 2;
        while (50 > QR7Kynw) {
            jM2ZN1U[QR7Kynw] = jM2ZN1U[QR7Kynw -1] + jM2ZN1U[QR7Kynw -2];
            QR7Kynw = QR7Kynw +1;
        };
    }
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
    for (QR7Kynw = 0; EGTWhAasV -1 >= QR7Kynw; QR7Kynw = QR7Kynw +1)
        cin >> McBvS6FML7I[QR7Kynw];
    {
        QR7Kynw = 0;
        while (QR7Kynw <= EGTWhAasV -1) {
            cout << jM2ZN1U[McBvS6FML7I[QR7Kynw] - 1] << endl;
            QR7Kynw = QR7Kynw +1;
        };
    }
    return 0;
}

