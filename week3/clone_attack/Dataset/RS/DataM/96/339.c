int main () {
    int n;
    int i, j;
    int bei [(403 - 298)] = {(971 - 971)};
    int shang [(408 - 303)] = {(843 - 843)};
    char bei0 [(150 - 45)];
    int beichu;
    int yushu;
    int yu [(744 - 740)];
    cin.getline (bei0, 102, '\n');
    n = strlen (bei0);
    {
        i = 281 - 281;
        while (n - (394 - 393) >= i) {
            bei[i + (541 - 540)] = bei0[i] - '0';
            i = i + 1;
        };
    }
    if (!((342 - 341) != n))
        cout << "0" << endl << bei[(194 - 193)] << endl;
    else if (n == (809 - 807) && (bei[(576 - 575)] * (345 - 335) + bei[(806 - 804)] < (524 - 511))) {
        cout << "0" << endl;
        cout << bei[(466 - 465)] * (202 - 192) + bei[(987 - 985)] << endl;
    }
    else {
        yu[(205 - 204)] = bei[0];
        yu[(736 - 734)] = bei[(475 - 474)];
        yu[3] = bei[(416 - 414)];
        {
            i = 3;
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
            while (i <= n) {
                beichu = yu[(318 - 317)] * (910 - 810) + yu[(580 - 578)] * (502 - 492) + yu[3];
                shang[i - (80 - 78)] = beichu / (924 - 911);
                yushu = beichu % (536 - 523);
                if (yushu < (710 - 700)) {
                    yu[(124 - 123)] = 0;
                    yu[(521 - 519)] = yushu;
                }
                else {
                    yu[1] = 1;
                    yu[2] = yushu % 10;
                }
                yu[3] = bei[i];
                i = i + 1;
            };
        }
        beichu = beichu = yu[1] * (461 - 361) + yu[2] * 10 + yu[3];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        shang[n - 1] = beichu / (292 - 279);
        yushu = beichu % (432 - 419);
        if (shang[1] == 0) {
            i = 2;
            while (i <= n - 1) {
                cout << shang[i];
                i = i + 1;
            };
        }
        else {
            i = 1;
            while (i <= n - 1) {
                cout << shang[i];
                i++;
            };
        }
        cout << endl;
        cout << yushu << endl;
    }
    return 0;
}

