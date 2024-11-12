char c [101], *p;
int s;

int main () {
    cin.getline (c, 101);
    p = c;
    s = -1;
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
    do {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*p <= '9' && *p >= '0') {
            if (s == -1)
                s = 0;
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
            s = s * 10 + *p - '0';
        }
        else {
            if (s != -1)
                cout << s << endl;
            s = -1;
        };
    }
    while (*p++);
    return 0;
}

