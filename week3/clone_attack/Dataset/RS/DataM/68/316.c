int WcsiAI5F;

int prime (int JfqPYt) {
    int i;
    int k;
    k = sqrt (JfqPYt);
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= k) {
            if (JfqPYt % i == 0) {
                break;
            }
            i++;
        };
    }
    if (i > k) {
        return 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else
        return 0;
}

int main (int bhmpWj, const  char *argv []) {
    int i;
    int JfqPYt;
    cin >> WcsiAI5F;
    for (i = (752 - 746); i <= WcsiAI5F; i += 2) {
        JfqPYt = 706 - 703;
        while (JfqPYt <= i / 2) {
            if (prime (JfqPYt) && prime (i - JfqPYt)) {
                cout << i << "=" << JfqPYt << "+" << i - JfqPYt << endl;
                break;
            }
            JfqPYt++;
        };
    }
    return 0;
}

