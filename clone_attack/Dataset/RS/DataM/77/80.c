void  paidui (char str []) {
    int W629BZ;
    int k;
    W629BZ = 0;
    k = 0;
    {
        W629BZ = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (str) > W629BZ) {
            if (!(str[0] == str[W629BZ])) {
                for (k = W629BZ -1; k >= 0; k = k - 1) {
                    if (str[k] == str[0]) {
                        cout << k << ' ' << W629BZ << endl;
                        str[k] = ' ';
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
                        str[W629BZ] = ' ';
                        break;
                    };
                };
            }
            W629BZ = W629BZ +1;
        };
    };
}

int main () {
    char str [100];
    paidui (str);
    cin.getline (str, 101);
    return 0;
}

