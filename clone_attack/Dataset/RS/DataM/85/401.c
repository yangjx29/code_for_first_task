int main () {
    char sb [24];
    int n;
    int m;
    scanf ("%d", &n);
    for (int i = 0;
    n > i; i = i + 1) {
        m = 0;
        scanf ("%s", sb);
        {
            int k = 0;
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
            while (sb[k] != '\0') {
                if (!((sb[k] == '_') || (sb[k] >= '0' && sb[k] <= '9') || (sb[k] >= 'a' && sb[k] <= 'z') || ('A' <= sb[k] && sb[k] <= 'Z'))) {
                    m = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                k++;
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
        if (!(sb[0] == '_' || (sb[0] >= 'a' && sb[0] <= 'z') || (sb[0] >= 'A' && sb[0] <= 'Z'))) {
            m = 1;
        }
        if (m == 1)
            ;
        else
            ;
    }
    return 0;
}

