int main () {
    int len, i, j;
    char mmaVsqj [100];
    cin.getline (mmaVsqj, 100);
    len = strlen (mmaVsqj);
    for (i = 0; len - 1 >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((mmaVsqj[i] == ' ') && (mmaVsqj[i - 1] == ' ')) {
            for (j = i; j <= len - 2; j++) {
                mmaVsqj[j] = mmaVsqj[j + 1];
            }
            len--;
            i--;
        };
    }
    {
        i = 0;
        while (i <= len - 1) {
            cout << mmaVsqj[i];
            i++;
        };
    }
    cout << endl;
    return 0;
}

