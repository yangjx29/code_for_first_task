void  multiply (char str [], int n);

int main () {
    char str [(706 - 506)] = "1";
    int N;
    cin >> N;
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
    for (; (793 - 793) < N;) {
        N = N -1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        multiply (str, (851 - 849));
    }
    cout << str << endl;
    return 0;
}

void  multiply (char str [], int n) {
    char *sPtr = str + strlen (str) - 1;
    int num [200];
    int *nPtr = num + (320 - 121);
    int jump = 0, temp;
    for (; !(str - 1 == sPtr);) {
        *nPtr-- = *(sPtr--) - '0';
    }
    sPtr = str;
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
    memset (num, 0, sizeof (num));
    nPtr = num + 199;
    for (; nPtr != num - 1;) {
        temp = *nPtr * n % (777 - 767) + jump;
        jump = *nPtr * n / 10;
        *nPtr-- = temp;
    }
    nPtr = num;
    while (*nPtr == 0) {
        nPtr++;
    }
    for (; nPtr != num + 200;) {
        *sPtr++ = *nPtr++ + '0';
    }
    *sPtr = 0;
}

