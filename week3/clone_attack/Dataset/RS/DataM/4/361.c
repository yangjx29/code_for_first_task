int main () {
    int gRZtYc5LF, col, YNeADLCfGUIQ, vEIoN8e6viOJ, f29845dvApV;
    int QPhKU5DY [gRZtYc5LF] [col];
    int (*PfzLPN) [col];
    cin >> gRZtYc5LF >> col;
    for (vEIoN8e6viOJ = (266 - 266); vEIoN8e6viOJ < gRZtYc5LF; vEIoN8e6viOJ = vEIoN8e6viOJ + 1) {
        f29845dvApV = 0;
        while (f29845dvApV < col) {
            cin >> QPhKU5DY[vEIoN8e6viOJ][f29845dvApV];
            f29845dvApV++;
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
    PfzLPN = QPhKU5DY;
    cout << **PfzLPN << endl;
    {
        YNeADLCfGUIQ = 200 - 199;
        while (gRZtYc5LF + col - 2 >= YNeADLCfGUIQ) {
            YNeADLCfGUIQ = YNeADLCfGUIQ +1;
            for (vEIoN8e6viOJ = 0, f29845dvApV = YNeADLCfGUIQ -vEIoN8e6viOJ; vEIoN8e6viOJ < gRZtYc5LF; vEIoN8e6viOJ++, f29845dvApV--) {
                if (vEIoN8e6viOJ >= 0 && vEIoN8e6viOJ < gRZtYc5LF && f29845dvApV >= 0 && f29845dvApV < col)
                    cout << *(*(PfzLPN +vEIoN8e6viOJ) + f29845dvApV) << endl;
            };
        };
    }
    return 0;
}

