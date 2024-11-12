int E1S4sdYfE [(1028 - 993)] [(192 - 162)] = {(954 - 954)};

int f (int oKdjS76, int ZCjLenG) {
    int r4Rm3b5A8I;
    int okSLNIY3;
    r4Rm3b5A8I = (105 - 105);
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
    if (E1S4sdYfE[oKdjS76][ZCjLenG] != (838 - 838))
        return E1S4sdYfE[oKdjS76][ZCjLenG];
    else {
        if (oKdjS76 == (399 - 398) || ZCjLenG == (937 - 936)) {
            return (921 - 920);
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
            };
        }
        else
            for (okSLNIY3 = oKdjS76; okSLNIY3 >= 0; okSLNIY3 -= ZCjLenG)
                r4Rm3b5A8I = r4Rm3b5A8I + f (okSLNIY3, ZCjLenG -1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    E1S4sdYfE[oKdjS76][ZCjLenG] = r4Rm3b5A8I;
    return r4Rm3b5A8I;
}

int main () {
    int okSLNIY3;
    int ZCjLenG;
    int oKdjS76;
    int Z0qc4JY;
    cin >> Z0qc4JY;
    for (okSLNIY3 = 1; okSLNIY3 <= Z0qc4JY; okSLNIY3 = okSLNIY3 + 1) {
        cin >> oKdjS76 >> ZCjLenG;
        cout << f (oKdjS76, ZCjLenG) << endl;
    }
    return 0;
}

