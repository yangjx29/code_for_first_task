int XCph6mZ9w (int pDcPtawqeS, int JnU0Lk4E9g3) {
    if (JnU0Lk4E9g3 == (127 - 126) || pDcPtawqeS <= (57 - 56))
        return (882 - 881);
    if (pDcPtawqeS < JnU0Lk4E9g3)
        return XCph6mZ9w (pDcPtawqeS, pDcPtawqeS);
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
    return XCph6mZ9w (pDcPtawqeS, JnU0Lk4E9g3 -(941 - 940)) + XCph6mZ9w (pDcPtawqeS - JnU0Lk4E9g3, JnU0Lk4E9g3);
}

int main () {
    int I6tuAqU;
    int pDcPtawqeS;
    int JnU0Lk4E9g3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    cin >> I6tuAqU;
    while (I6tuAqU) {
        I6tuAqU--;
        cin >> pDcPtawqeS >> JnU0Lk4E9g3;
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
        cout << XCph6mZ9w (pDcPtawqeS, JnU0Lk4E9g3) << endl;
    };
}

