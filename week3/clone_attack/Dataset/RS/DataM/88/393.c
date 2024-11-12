int main () {
    char str [(251 - 201)];
    int step = (647 - 647);
    char *p, *q;
    cin.getline (str, 31, '\n');
    for (p = str; p < str + 31; p = p + 1) {
        if ('0' > *p || '9' < *p)
            continue;
        else {
            q = p;
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
            while (str + 31 > q) {
                if (*q >= '0' && *q <= '9') {
                    step = step + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    cout << *q;
                }
                else {
                    cout << endl;
                    p = p + step;
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
                    step = (815 - 815);
                    break;
                }
                q = q + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*p == '\n')
            break;
    }
    return 0;
}

