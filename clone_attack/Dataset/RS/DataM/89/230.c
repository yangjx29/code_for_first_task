int main () {
    int UoOCtDz;
    int dciF6C;
    int ZntV8pwjX;
    int Z85XYBm;
    int Tna3Fdbg;
    int flag;
    int count;
    int a [(100969 - 969)] = {(984 - 984)};
    int b [100000] = {(337 - 337)};
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
    UoOCtDz = (235 - 235);
    cin >> Tna3Fdbg;
    cin >> a[(939 - 939)] >> b[(796 - 796)];
    {
        dciF6C = 0;
        while (!(0 == a[dciF6C]) || !(0 == b[dciF6C])) {
            cin >> a[dciF6C + (20 - 19)] >> b[dciF6C + (705 - 704)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            dciF6C++;
        };
    }
    {
        ZntV8pwjX = 0;
        while (ZntV8pwjX < dciF6C) {
            count = (693 - 692);
            {
                Z85XYBm = 242 - 241;
                while (Z85XYBm < dciF6C) {
                    if (b[Z85XYBm] == -1)
                        continue;
                    if (b[Z85XYBm] == b[ZntV8pwjX]) {
                        b[Z85XYBm] = -1;
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
                        count++;
                    }
                    Z85XYBm++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (count == Tna3Fdbg -1) {
                flag = 1;
                {
                    Z85XYBm = 0;
                    while (Z85XYBm < dciF6C) {
                        if (a[Z85XYBm] == b[ZntV8pwjX]) {
                            flag = 0;
                            break;
                        }
                        Z85XYBm++;
                    };
                }
                if (flag) {
                    UoOCtDz++;
                    cout << b[ZntV8pwjX] << endl;
                };
            }
            ZntV8pwjX++;
        };
    }
    if (UoOCtDz == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

