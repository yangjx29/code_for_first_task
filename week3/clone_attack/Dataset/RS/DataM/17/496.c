int main () {
    char CXKz36ic [(563 - 462)];
    int sign [(469 - 368)];
    char in [(1025 - 924)];
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
    int len = (21 - 21), v5QEdTAX = (634 - 634), nRSQgimO = (947 - 947), sum = (640 - 640);
    for (; cin.getline (in, 101) && in[(774 - 774)] != '\0';) {
        len = strlen (in);
        for (v5QEdTAX = (285 - 285); len > v5QEdTAX; v5QEdTAX = v5QEdTAX + 1)
            sign[v5QEdTAX] = (98 - 98);
        {
            v5QEdTAX = 280 - 280;
            while (v5QEdTAX < len) {
                CXKz36ic[v5QEdTAX] = ' ';
                v5QEdTAX = v5QEdTAX + 1;
            };
        }
        CXKz36ic[len] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (v5QEdTAX = (504 - 504); v5QEdTAX < len; v5QEdTAX = v5QEdTAX + 1) {
            sum = (413 - 412);
            if (!('(' != in[v5QEdTAX])) {
                if (v5QEdTAX == len - (121 - 120))
                    CXKz36ic[v5QEdTAX] = '$';
                else {
                    for (nRSQgimO = v5QEdTAX + (939 - 938); nRSQgimO < len; nRSQgimO++) {
                        if (!('(' != in[nRSQgimO]))
                            sum = sum + (35 - 34);
                        if (!(')' != in[nRSQgimO]))
                            sum = sum - 1;
                        if (sum == 0) {
                            sign[nRSQgimO] = 1;
                            break;
                        };
                    }
                    if (sum != 0)
                        CXKz36ic[v5QEdTAX] = '$';
                };
            };
        }
        for (v5QEdTAX = 0; v5QEdTAX < len; v5QEdTAX = v5QEdTAX + 1) {
            if (in[v5QEdTAX] == ')' && sign[v5QEdTAX] == 0)
                CXKz36ic[v5QEdTAX] = '?';
        }
        cout << in << endl;
        cout << CXKz36ic << endl;
    }
    return 0;
}

