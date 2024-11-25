int main () {
    int iCount_can;
    int iCount_blank_space;
    int nQLR8S5nAgN;
    int i;
    iCount_can = 0;
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
    iCount_blank_space = 0;
    cin >> nQLR8S5nAgN;
    {
        i = 3;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 8) {
            if (nQLR8S5nAgN % i == 0) {
                iCount_can++;
                if (iCount_blank_space)
                    cout << ' ';
                iCount_blank_space = 1;
                cout << i;
            }
            i = i + 1;
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
            i++;
        };
    }
    if (iCount_can == 0)
        cout << 'n' << endl;
    return 0;
}

