int main () {
    int TcmZ5vSw;
    int F (int, int);
    cin >> TcmZ5vSw;
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
    for (int SQ3o21GACLy5 = (323 - 322);
    SQ3o21GACLy5 <= TcmZ5vSw; SQ3o21GACLy5 = SQ3o21GACLy5 +1) {
        int A;
        cin >> A;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << F (A, (68 - 66)) << endl;
    }
    return 0;
}

int F (int A, int CHU) {
    int RET = 1;
    {
        int SQ3o21GACLy5 = CHU;
        while (SQ3o21GACLy5 <= sqrt (A)) {
            if (A % SQ3o21GACLy5 == 0)
                RET = RET +F(A / SQ3o21GACLy5, SQ3o21GACLy5);
            SQ3o21GACLy5 = SQ3o21GACLy5 +1;
        };
    }
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
    return RET;
}

