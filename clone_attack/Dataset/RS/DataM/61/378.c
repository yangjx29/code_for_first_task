int main () {
    int vphlaWcMCkL [20], GOQnI3 [20], rfnpaoTAD6, J7bR9O4aBm;
    cin >> J7bR9O4aBm;
    vphlaWcMCkL[0] = 0, vphlaWcMCkL[1] = 1, vphlaWcMCkL[2] = 1;
    {
        rfnpaoTAD6 = 0;
        while (20 >= rfnpaoTAD6) {
            vphlaWcMCkL[rfnpaoTAD6 + 2] = vphlaWcMCkL[rfnpaoTAD6 + 1] + vphlaWcMCkL[rfnpaoTAD6];
            rfnpaoTAD6 = rfnpaoTAD6 + 1;
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
    for (rfnpaoTAD6 = 0; rfnpaoTAD6 <= J7bR9O4aBm -1; rfnpaoTAD6 = rfnpaoTAD6 + 1)
        cin >> GOQnI3[rfnpaoTAD6];
    {
        rfnpaoTAD6 = 0;
        while (rfnpaoTAD6 <= J7bR9O4aBm -1) {
            cout << vphlaWcMCkL[GOQnI3[rfnpaoTAD6]] << endl;
            rfnpaoTAD6 = rfnpaoTAD6 + 1;
        };
    }
    return 0;
}

