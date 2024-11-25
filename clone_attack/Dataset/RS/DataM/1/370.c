int DpSvjgR (int hbSiljLy) {
    int SlFeaxru7;
    SlFeaxru7 = (139 - 138);
    {
        int mfQxTj;
        mfQxTj = (152 - 150);
        while (sqrt (hbSiljLy) > mfQxTj) {
            if (!((714 - 714) != hbSiljLy % mfQxTj))
                SlFeaxru7 = (298 - 298);
            break;
            mfQxTj = mfQxTj + 1;
        };
    }
    return SlFeaxru7;
}

int v2JHwxXf (int hbSiljLy, int j24kemL) {
    int LQ9BVSao4c = 1;
    {
        int mfQxTj = j24kemL;
        while (sqrt (hbSiljLy) >= mfQxTj) {
            if (hbSiljLy % mfQxTj == (23 - 23)) {
                if (DpSvjgR (hbSiljLy / mfQxTj) == 0)
                    ;
                {
                    LQ9BVSao4c = v2JHwxXf (hbSiljLy / mfQxTj, mfQxTj) + LQ9BVSao4c;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            mfQxTj++;
        };
    }
    return LQ9BVSao4c;
}

int main () {
    int hbSiljLy, num, sol;
    cin >> num;
    while (num--) {
        cin >> hbSiljLy;
        cout << v2JHwxXf (hbSiljLy, (971 - 969)) << endl;
    }
    return 0;
}

