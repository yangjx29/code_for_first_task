int main () {
    int QJeHVu84z, t1Hf5jTV;
    int yZWpjJHFzkg3;
    int HvTmzSWF;
    int dity87RF9VsI [22] [22] = {0};
    int vPhRuwD = 0;
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
    cin >> QJeHVu84z >> t1Hf5jTV;
    {
        yZWpjJHFzkg3 = 638 - 637;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yZWpjJHFzkg3 <= QJeHVu84z) {
            for (HvTmzSWF = 1; HvTmzSWF <= t1Hf5jTV; HvTmzSWF++)
                cin >> dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF];
            yZWpjJHFzkg3++;
        };
    }
    for (yZWpjJHFzkg3 = 1; yZWpjJHFzkg3 <= QJeHVu84z; yZWpjJHFzkg3++) {
        HvTmzSWF = 1;
        while (HvTmzSWF <= t1Hf5jTV) {
            if (dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3 - 1][HvTmzSWF] && dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3 + 1][HvTmzSWF] && dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF +1] && dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF -1]) {
                vPhRuwD++;
            }
            HvTmzSWF++;
        };
    }
    for (yZWpjJHFzkg3 = 1; yZWpjJHFzkg3 <= QJeHVu84z; yZWpjJHFzkg3++)
        for (HvTmzSWF = 1; HvTmzSWF <= t1Hf5jTV; HvTmzSWF++)
            if (dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3 - 1][HvTmzSWF] && dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3 + 1][HvTmzSWF] && dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF +1] && dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF] >= dity87RF9VsI[yZWpjJHFzkg3][HvTmzSWF -1]) {
                vPhRuwD = vPhRuwD - 1;
                cout << yZWpjJHFzkg3 - 1 << " " << HvTmzSWF -1;
                if (vPhRuwD != 0)
                    cout << endl;
            }
    return 0;
}

