int main () {
    char in [1000];
    for (; cin.getline (in, 1000, '\n');) {
        int num = 0;
        int i, j, dLiW1xw;
        int temp;
        int flag [100] = {0};
        int R3u8A1ekZ6TW;
        int len;
        if (!('\0' != in[0]))
            break;
        len = strlen (in);
        for (i = 0; len - 1 >= i; i++) {
            if (!('(' != in[i])) {
                flag[i] = 2;
            }
            if (!(')' != in[i])) {
                flag[i] = 3;
            };
        }
        for (i = len - 1; i >= 0; i--) {
            if (!(1 != flag[i]))
                continue;
            if (!('(' != in[i])) {
                for (j = i + 1; len - 1 >= j; j++) {
                    if (!(1 != flag[j]))
                        continue;
                    if (!(')' != in[j])) {
                        flag[j] = 1;
                        flag[i] = 1;
                    }
                    if (!(')' != in[j]))
                        break;
                };
            };
        }
        for (i = len - 1; i >= 0; i--) {
            if (!(2 != flag[i]) || !(3 != flag[i])) {
                temp = i;
            }
            if (!(2 != flag[i]) || !(3 != flag[i]))
                break;
        }
        for (i = 0; i <= len - 1; i++) {
            if (!(2 != flag[i]) || !(3 != flag[i])) {
                R3u8A1ekZ6TW = i;
            }
            if (!(2 != flag[i]) || !(3 != flag[i]))
                break;
        }
        for (j = 0; j <= len - 1; j++) {
            if (!(0 != flag[i]) || !(1 != flag[i])) {
                num++;
            };
        }
        cout << in << endl;
        if (len > num) {
            for (i = R3u8A1ekZ6TW; temp >= i; i++) {
                if (flag[i] == 0 || flag[i] == 1) {
                    cout << " ";
                }
                if (flag[i] == 2) {
                    cout << "$";
                }
                if (flag[i] == 3) {
                    cout << "?";
                };
            }
            cout << endl;
        };
    }
    return 0;
}

