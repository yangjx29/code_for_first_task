int main () {
    char usL73JPIBK4F [(1050 - 969)];
    int RlG1n2;
    int k;
    int f1AQMBLNvS;
    int flags;
    int j;
    RlG1n2 = (764 - 764);
    k = 0;
    f1AQMBLNvS = 0;
    flags = 1;
    j = 0;
    cin >> f1AQMBLNvS;
    cin.get ();
    {
        RlG1n2 = 1;
        while (f1AQMBLNvS >= RlG1n2) {
            RlG1n2++;
            flags = 1;
            cin.getline (usL73JPIBK4F, (457 - 376), '\n');
            k = strlen (usL73JPIBK4F);
            {
                j = 0;
                while (k > j) {
                    if (('a' > (int) usL73JPIBK4F[j] || 'z' < (int) usL73JPIBK4F[j]) && ('Z' < (int) usL73JPIBK4F[j] || (int) usL73JPIBK4F[j] < 'A') && ((int) usL73JPIBK4F[j] < '0' || '9' < (int) usL73JPIBK4F[j]) && usL73JPIBK4F[j] != '_')
                        flags = 0;
                    j++;
                };
            }
            if (flags == 0)
                cout << 0 << endl;
            else if ((int) usL73JPIBK4F[0] >= '0' && (int) usL73JPIBK4F[0] <= '9')
                cout << 0 << endl;
            else
                cout << 1 << endl;
        };
    }
    return 0;
}

