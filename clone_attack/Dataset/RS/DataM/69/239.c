char qZRb7a3XLu9l [250], b [250];
int A [250], B [250], e9c0ZnY [251] = {(666 - 666)};
int carrybit = (554 - 554);
int JWeBbsz2TwjF = -1;

void  add (int n) {
    if (n < 0) {
        e9c0ZnY[n + 1] = carrybit;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    e9c0ZnY[n + 1] = (A[n] + B[n] + carrybit) % 10;
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
    carrybit = (A[n] + B[n] + carrybit) / 10;
    add (n - 1);
}

int main () {
    int i = 0;
    int RwoXsIT3;
    int bl;
    RwoXsIT3 = strlen (qZRb7a3XLu9l);
    bl = strlen (b);
    cin.getline (qZRb7a3XLu9l, 250);
    {
        i = 0;
        while (RwoXsIT3 > i) {
            A[250 - RwoXsIT3 +i] = (int) qZRb7a3XLu9l[i] - 48;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    cin.getline (b, 250);
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
    for (i = 0; 250 - RwoXsIT3 > i; i = i + 1)
        A[i] = 0;
    {
        i = 0;
        while (i < bl) {
            B[250 - bl + i] = (int) b[i] - 48;
            i = i + 1;
        };
    }
    for (i = 0; i < 250 - bl; i++)
        B[i] = 0;
    add (249);
    {
        i = 0;
        while (251 > i) {
            if (e9c0ZnY[i] != 0) {
                JWeBbsz2TwjF = i;
                break;
            }
            i++;
        };
    }
    if (JWeBbsz2TwjF == -1)
        cout << "0" << endl;
    if (JWeBbsz2TwjF >= 0) {
        {
            i = JWeBbsz2TwjF;
            while (i < 251) {
                cout << e9c0ZnY[i];
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

