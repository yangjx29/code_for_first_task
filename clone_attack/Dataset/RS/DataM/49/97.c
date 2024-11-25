void  output (int);
char ntXU9Yh [(917 - 417)];
int mivgjdkFR;

int main () {
    int i;
    cin.getline (ntXU9Yh, 500);
    mivgjdkFR = strlen (ntXU9Yh);
    for (i = 2; i <= mivgjdkFR; i++)
        output (i);
    return 0;
}

void  output (int i) {
    int j;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    {
        j = 0;
        while (j <= mivgjdkFR - i) {
            k = j;
            while (!(ntXU9Yh[2 * j + i - 1 - k] != ntXU9Yh[k]) && k < 2 * j + i - 1 - k)
                k = k + 1;
            if (k >= 2 * j + i - 1 - k) {
                for (k = j; k < j + i; k++)
                    cout << ntXU9Yh[k];
                cout << endl;
            }
            j = j + 1;
        };
    };
}

