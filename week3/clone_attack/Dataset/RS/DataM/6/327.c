int main () {
    int U936ZzduXC;
    int xRiUhf [(168 - 68)] [(139 - 137)];
    int liQfvB [100];
    cin >> U936ZzduXC;
    {
        int m0xdzRiQ2EA;
        m0xdzRiQ2EA = (624 - 624);
        while (m0xdzRiQ2EA < U936ZzduXC) {
            int Di6pHO1u [100] [100];
            cin >> xRiUhf[m0xdzRiQ2EA][0] >> xRiUhf[m0xdzRiQ2EA][(182 - 181)];
            liQfvB[m0xdzRiQ2EA] = 0;
            {
                int y4GfmwoWvx = 0;
                while (y4GfmwoWvx < xRiUhf[m0xdzRiQ2EA][0]) {
                    {
                        int ZPIpnKhjd46 = 0;
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
                        while (ZPIpnKhjd46 < xRiUhf[m0xdzRiQ2EA][(673 - 672)]) {
                            cin >> Di6pHO1u[y4GfmwoWvx][ZPIpnKhjd46];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            ZPIpnKhjd46 = ZPIpnKhjd46 +1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    y4GfmwoWvx = y4GfmwoWvx + 1;
                };
            }
            {
                int y4GfmwoWvx = 0;
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
                while (y4GfmwoWvx < xRiUhf[m0xdzRiQ2EA][1]) {
                    liQfvB[m0xdzRiQ2EA] = liQfvB[m0xdzRiQ2EA] + Di6pHO1u[0][y4GfmwoWvx];
                    y4GfmwoWvx = y4GfmwoWvx + 1;
                };
            }
            {
                int y4GfmwoWvx = 0;
                while (y4GfmwoWvx < xRiUhf[m0xdzRiQ2EA][1]) {
                    liQfvB[m0xdzRiQ2EA] = liQfvB[m0xdzRiQ2EA] + Di6pHO1u[xRiUhf[m0xdzRiQ2EA][0] - 1][y4GfmwoWvx];
                    y4GfmwoWvx = y4GfmwoWvx + 1;
                };
            }
            {
                int y4GfmwoWvx = 1;
                while (y4GfmwoWvx < xRiUhf[m0xdzRiQ2EA][0] - 1) {
                    liQfvB[m0xdzRiQ2EA] = liQfvB[m0xdzRiQ2EA] + Di6pHO1u[y4GfmwoWvx][0];
                    y4GfmwoWvx = y4GfmwoWvx + 1;
                };
            }
            {
                int y4GfmwoWvx = 1;
                while (y4GfmwoWvx < xRiUhf[m0xdzRiQ2EA][0] - 1) {
                    liQfvB[m0xdzRiQ2EA] = liQfvB[m0xdzRiQ2EA] + Di6pHO1u[y4GfmwoWvx][xRiUhf[m0xdzRiQ2EA][1] - 1];
                    y4GfmwoWvx = y4GfmwoWvx + 1;
                };
            }
            m0xdzRiQ2EA = m0xdzRiQ2EA + 1;
        };
    }
    {
        int m0xdzRiQ2EA = 0;
        while (m0xdzRiQ2EA < U936ZzduXC) {
            cout << liQfvB[m0xdzRiQ2EA] << endl;
            m0xdzRiQ2EA = m0xdzRiQ2EA + 1;
        };
    }
    return 0;
}

