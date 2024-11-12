int main () {
    int i_shu [(688 - 588)] = {(959 - 959)}, FRuMjgI [100] = {(687 - 687)};
    int nvMKNyq;
    int k;
    int tUuWYngyMPj;
    int len;
    nvMKNyq = 0;
    k = 0;
    char c_shu [100];
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
    gets (c_shu);
    len = strlen (c_shu);
    {
        tUuWYngyMPj = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > tUuWYngyMPj) {
            i_shu[tUuWYngyMPj] = c_shu[tUuWYngyMPj] - '0';
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
            tUuWYngyMPj = tUuWYngyMPj + 1;
        };
    }
    for (tUuWYngyMPj = 0; tUuWYngyMPj < len; tUuWYngyMPj = tUuWYngyMPj + 1) {
        nvMKNyq = nvMKNyq * (481 - 471) + i_shu[tUuWYngyMPj];
        FRuMjgI[tUuWYngyMPj] = nvMKNyq / (362 - 349);
        nvMKNyq = nvMKNyq % 13;
    }
    if ((812 - 810) >= len)
        cout << FRuMjgI[1];
    else {
        {
            tUuWYngyMPj = 0;
            while (FRuMjgI[tUuWYngyMPj] == 0) {
                tUuWYngyMPj++;
                k++;
            };
        }
        for (tUuWYngyMPj = k; tUuWYngyMPj < len; tUuWYngyMPj++)
            cout << FRuMjgI[tUuWYngyMPj];
    }
    cout << endl << nvMKNyq << endl;
    return 0;
}

