int main () {
    char oTLj4sRx5 [1000];
    int hLjhsNU, p;
    gets (oTLj4sRx5);
    {
        hLjhsNU = 0;
        while (strlen (oTLj4sRx5) > hLjhsNU) {
            p = 1;
            if (oTLj4sRx5[hLjhsNU] != oTLj4sRx5[hLjhsNU + 1]) {
                if (oTLj4sRx5[hLjhsNU] >= 'a' && oTLj4sRx5[hLjhsNU] <= 'z') {
                    oTLj4sRx5[hLjhsNU] -= 'a' - 'A';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                cout << "(" << oTLj4sRx5[hLjhsNU] << "," << 1 << ")";
            }
            else {
                while (!(oTLj4sRx5[hLjhsNU + 1] != oTLj4sRx5[hLjhsNU]) || oTLj4sRx5[hLjhsNU] == oTLj4sRx5[hLjhsNU + 1] + 'A' - 'a' || oTLj4sRx5[hLjhsNU] == oTLj4sRx5[hLjhsNU + 1] + 'a' - 'A') {
                    p++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    hLjhsNU++;
                }
                if (oTLj4sRx5[hLjhsNU] >= 'a' && oTLj4sRx5[hLjhsNU] <= 'z') {
                    oTLj4sRx5[hLjhsNU] -= 'a' - 'A';
                }
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
                cout << "(" << oTLj4sRx5[hLjhsNU] << "," << p << ")";
            }
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
            hLjhsNU++;
        };
    }
    cout << endl;
    return 0;
}

