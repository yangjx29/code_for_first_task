int main () {
    int RmEVHaoz [(62 - 53)] [(468 - 459)] = {{(189 - 189)}};
    int Ff5Hi986hog;
    int kUj0boKQkIE7;
    cin >> Ff5Hi986hog >> kUj0boKQkIE7;
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
    RmEVHaoz[4][4] = Ff5Hi986hog;
    for (; kUj0boKQkIE7 > (458 - 458); kUj0boKQkIE7 = kUj0boKQkIE7 - 1) {
        int temp [(836 - 827)] [9] = {{(625 - 625)}};
        {
            int ZM6sTN7fl = 0;
            while (ZM6sTN7fl < 9) {
                {
                    int MMdjQ7nZ = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (MMdjQ7nZ < 9) {
                        if (RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ] > 0) {
                            temp[ZM6sTN7fl][MMdjQ7nZ] += 2 * RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl -(145 - 144)][MMdjQ7nZ -(503 - 502)] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl -1][MMdjQ7nZ] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl -1][MMdjQ7nZ +1] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl][MMdjQ7nZ -1] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl][MMdjQ7nZ +1] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl +1][MMdjQ7nZ] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl +1][MMdjQ7nZ -1] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                            temp[ZM6sTN7fl +1][MMdjQ7nZ +1] += RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ];
                        }
                        MMdjQ7nZ = MMdjQ7nZ +1;
                    };
                }
                ZM6sTN7fl = ZM6sTN7fl +1;
            };
        }
        {
            int ZM6sTN7fl = 0;
            while (ZM6sTN7fl < 9) {
                {
                    int MMdjQ7nZ = 0;
                    while (MMdjQ7nZ < 9) {
                        RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ] = temp[ZM6sTN7fl][MMdjQ7nZ];
                        MMdjQ7nZ = MMdjQ7nZ +1;
                    };
                }
                ZM6sTN7fl = ZM6sTN7fl +1;
            };
        };
    }
    {
        int ZM6sTN7fl = 0;
        while (ZM6sTN7fl < 9) {
            {
                int MMdjQ7nZ = 0;
                while (MMdjQ7nZ < (211 - 203)) {
                    cout << RmEVHaoz[ZM6sTN7fl][MMdjQ7nZ] << ' ';
                    MMdjQ7nZ++;
                };
            }
            cout << RmEVHaoz[ZM6sTN7fl][8] << endl;
            ZM6sTN7fl = ZM6sTN7fl +1;
        };
    }
    return 0;
}

