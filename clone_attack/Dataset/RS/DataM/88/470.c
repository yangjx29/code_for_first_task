int main () {
    int bAialqF4u3;
    char uXCIYmdFhN [(266 - 235)];
    char *p;
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
    cin.getline (uXCIYmdFhN, 31);
    p = uXCIYmdFhN;
    for (; !('\0' == *p); p = p + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (*p >= '0' && '9' >= *p) {
            bAialqF4u3 = 0;
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
            while (*(p + bAialqF4u3) != '\0') {
                if (*(p + bAialqF4u3) < '0' || *(p + bAialqF4u3) > '9') {
                    p = p + bAialqF4u3;
                    cout << endl;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                cout << *(p + bAialqF4u3);
                if (*(p + bAialqF4u3 + 1) == '\0') {
                    p = p + bAialqF4u3;
                    cout << endl;
                    break;
                }
                bAialqF4u3++;
            };
        };
    }
    return 0;
}

