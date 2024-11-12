int main () {
    int vZKCqn35 [(1239 - 988)], b [(449 - 198)], UdoAxafWY3 [(543 - 292)], d [(681 - 430)], AOsk497aQ, cjdQtA, JSMbqoNlR96 = (430 - 430), kNT9BmUXdWJP = (207 - 207);
    char dqn42Y [(924 - 673)], num2 [(812 - 561)];
    cin.getline (dqn42Y, 251);
    AOsk497aQ = strlen (dqn42Y);
    cin.getline (num2, 251);
    memset (vZKCqn35, (846 - 846), sizeof (vZKCqn35));
    {
        JSMbqoNlR96 = AOsk497aQ -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JSMbqoNlR96 >= (152 - 152)) {
            vZKCqn35[kNT9BmUXdWJP++] = dqn42Y[JSMbqoNlR96] - '0';
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
            JSMbqoNlR96 = JSMbqoNlR96 -1;
        };
    }
    kNT9BmUXdWJP = 0;
    memset (b, (384 - 384), sizeof (b));
    memset (UdoAxafWY3, (995 - 995), sizeof (UdoAxafWY3));
    memset (d, (823 - 823), sizeof (d));
    cjdQtA = strlen (num2);
    {
        JSMbqoNlR96 = cjdQtA - 1;
        while (JSMbqoNlR96 >= 0) {
            b[kNT9BmUXdWJP++] = num2[JSMbqoNlR96] - '0';
            JSMbqoNlR96 = JSMbqoNlR96 -1;
        };
    }
    {
        JSMbqoNlR96 = 0;
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
        while (251 > JSMbqoNlR96) {
            if (vZKCqn35[JSMbqoNlR96] != 0 || !(0 == b[JSMbqoNlR96]))
                break;
            if (JSMbqoNlR96 = 250) {
                cout << "0";
                return 0;
            }
            JSMbqoNlR96 = JSMbqoNlR96 +1;
        };
    }
    {
        JSMbqoNlR96 = 0;
        while (251 > JSMbqoNlR96) {
            d[JSMbqoNlR96] = vZKCqn35[JSMbqoNlR96] + b[JSMbqoNlR96] + UdoAxafWY3[JSMbqoNlR96];
            if (d[JSMbqoNlR96] >= (909 - 899)) {
                UdoAxafWY3[JSMbqoNlR96 +1]++;
                d[JSMbqoNlR96] = d[JSMbqoNlR96] - 10;
            }
            JSMbqoNlR96 = JSMbqoNlR96 +1;
        };
    }
    {
        kNT9BmUXdWJP = 250;
        while (kNT9BmUXdWJP >= 0) {
            if (d[kNT9BmUXdWJP] != 0)
                break;
            kNT9BmUXdWJP = kNT9BmUXdWJP - 1;
        };
    }
    {
        JSMbqoNlR96 = kNT9BmUXdWJP;
        while (JSMbqoNlR96 >= 0) {
            cout << d[JSMbqoNlR96];
            JSMbqoNlR96 = JSMbqoNlR96 -1;
        };
    }
    return 0;
}

