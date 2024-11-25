int main () {
    char zKojZG [(1060 - 560)];
    int totallength = (134 - 134), flag = (86 - 86);
    cin >> zKojZG;
    for (int b = (795 - 795);
    b < 500; b++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zKojZG[b] == 0)
            break;
        else {
            totallength++;
        };
    }
    {
        int length = (483 - 481);
        while (500 >= length) {
            for (int j = 0;
            j <= totallength - length + 1; j++) {
                {
                    int k = 0;
                    while (k < length / 2) {
                        if (zKojZG[j + k] == zKojZG[j + length - 1 - k]) {
                            flag++;
                        }
                        k++;
                    };
                }
                if (flag == length / 2) {
                    {
                        int krY3Hm5B = j;
                        while (krY3Hm5B <= j + length - 1) {
                            flag = 0;
                            cout << zKojZG[krY3Hm5B];
                            krY3Hm5B++;
                        };
                    }
                    cout << endl;
                }
                else {
                    flag = 0;
                };
            }
            length++;
        };
    }
    return 0;
}

