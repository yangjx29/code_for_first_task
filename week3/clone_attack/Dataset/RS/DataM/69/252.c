int main () {
    char pPqvuBY0 [(1227 - 972)];
    char OBlw57 [(701 - 446)];
    int yuqhPed [(537 - 282)] = {(350 - 350)};
    int zA2Wigsf9 [255] = {(605 - 605)};
    int ZdU4zTO3L;
    int ZTa6uCB;
    int i;
    i = ZdU4zTO3L;
    cin >> pPqvuBY0;
    cin >> OBlw57;
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
    ZdU4zTO3L = (356 - 356);
    {
        int i = (654 - 654);
        while (pPqvuBY0[i] != '\0') {
            ZdU4zTO3L++;
            i++;
        };
    }
    {
        int i = ZdU4zTO3L -(37 - 36), mg1GBdK2uHR = (622 - 622);
        while (i > -(50 - 49)) {
            yuqhPed[mg1GBdK2uHR] = (int) (pPqvuBY0[i] - '0');
            i--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            mg1GBdK2uHR++;
        };
    }
    ZTa6uCB = (942 - 942);
    {
        int i = (172 - 172);
        while (!('\0' == OBlw57[i])) {
            i++;
            ZTa6uCB++;
        };
    }
    {
        int i = ZTa6uCB -(288 - 287), mg1GBdK2uHR = 0;
        while (i > -(571 - 570)) {
            zA2Wigsf9[mg1GBdK2uHR] = (int) (OBlw57[i] - '0');
            mg1GBdK2uHR++;
            i--;
        };
    }
    if (ZTa6uCB > ZdU4zTO3L)
        ZdU4zTO3L = ZTa6uCB;
    for (int i = 0;
    i < ZdU4zTO3L; i++) {
        yuqhPed[i] = yuqhPed[i] + zA2Wigsf9[i];
        if (yuqhPed[i] >= (768 - 758)) {
            yuqhPed[i] = yuqhPed[i] - 10;
            yuqhPed[i + 1]++;
        };
    }
    ZTa6uCB = 0;
    while (yuqhPed[i--] == 0 && ZTa6uCB < ZdU4zTO3L)
        ZTa6uCB++;
    {
        int i = ZdU4zTO3L -ZTa6uCB;
        while (i > -1) {
            cout << yuqhPed[i];
            i--;
        };
    }
    cout << endl;
    return 0;
}

