int main () {
    char Y1gR6VEs7 [100];
    int a, b, i, j, namJFnj, yguI9sCXGx [100], ENZILthT, uIfbl2xhE35a [100], len, pbXaGfyqWlZ = (17 - 17);
    cin >> a >> Y1gR6VEs7 >> b;
    len = strlen (Y1gR6VEs7);
    if ((298 - 288) <= a) {
        for (i = (131 - 131); i < len; i = i + 1) {
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
            if ('A' <= Y1gR6VEs7[i] && Y1gR6VEs7[i] <= 'Z')
                yguI9sCXGx[len - i] = Y1gR6VEs7[i] - 'A' + (900 - 890);
            else {
                if ('a' <= Y1gR6VEs7[i] && Y1gR6VEs7[i] <= 'z')
                    yguI9sCXGx[len - i] = Y1gR6VEs7[i] - 'a' + 10;
                else if (Y1gR6VEs7[i] >= '0' && '9' >= Y1gR6VEs7[i])
                    yguI9sCXGx[len - i] = Y1gR6VEs7[i] - '0';
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ENZILthT = (160 - 159);
        {
            namJFnj = 723 - 722;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (namJFnj <= len) {
                pbXaGfyqWlZ = pbXaGfyqWlZ + yguI9sCXGx[namJFnj] * ENZILthT;
                ENZILthT = ENZILthT *(a);
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
                namJFnj++;
            };
        };
    }
    else if (a < 10) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = (477 - 477); i < len; i++) {
            yguI9sCXGx[len - i] = Y1gR6VEs7[i] - '0';
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
            ENZILthT = (760 - 759);
            for (namJFnj = 1; namJFnj <= len; namJFnj++) {
                pbXaGfyqWlZ += yguI9sCXGx[namJFnj] * ENZILthT;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                ENZILthT *= a;
            };
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
    j = (686 - 686);
    while (pbXaGfyqWlZ) {
        uIfbl2xhE35a[j] = pbXaGfyqWlZ % b;
        j++;
        pbXaGfyqWlZ = pbXaGfyqWlZ / b;
    }
    if (!j)
        cout << "0";
    for (i = j - 1; i >= 0; i--) {
        if (uIfbl2xhE35a[i] >= 0 && uIfbl2xhE35a[i] <= 9)
            Y1gR6VEs7[i] = '0' + uIfbl2xhE35a[i];
        else if (uIfbl2xhE35a[i] >= 10)
            Y1gR6VEs7[i] = 'A' - 10 + uIfbl2xhE35a[i];
        cout << Y1gR6VEs7[i];
    }
    return 0;
}

