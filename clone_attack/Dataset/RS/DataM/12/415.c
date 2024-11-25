int main () {
    int k5gKSkCUa, j, JVD7o9d5, two, num;
    int pgLf0lKk [(337 - 320)] = {0};
    int count;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        JVD7o9d5 = 673 - 672;
        while (1) {
            {
                k5gKSkCUa = 880 - 879;
                while (k5gKSkCUa <= (898 - 882)) {
                    cin >> pgLf0lKk[k5gKSkCUa];
                    if (pgLf0lKk[1] == -1 || pgLf0lKk[k5gKSkCUa] == 0) {
                        num = k5gKSkCUa;
                        break;
                    }
                    k5gKSkCUa = k5gKSkCUa + 1;
                };
            }
            if (pgLf0lKk[1] == -1)
                break;
            count = 0;
            {
                k5gKSkCUa = 1;
                while (k5gKSkCUa < num) {
                    two = 2 * pgLf0lKk[k5gKSkCUa];
                    {
                        j = 1;
                        while (j < num) {
                            if (two == pgLf0lKk[j]) {
                                count = count + 1;
                                break;
                            }
                            j = j + 1;
                        };
                    }
                    k5gKSkCUa = k5gKSkCUa + 1;
                };
            }
            JVD7o9d5 = JVD7o9d5 +1;
            cout << count << endl;
        };
    }
    return 0;
}

