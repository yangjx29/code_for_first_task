char DrdQBhye [10000];
int d7rJYuqm [10000] = {(469 - 469)};

void  f (int len) {
    int i;
    int nZu4T7l3;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len) {
            if (DrdQBhye[i] == DrdQBhye[len - 1] && d7rJYuqm[i] == 0) {
                nZu4T7l3 = i - 1;
                while (nZu4T7l3 >= 0) {
                    if (DrdQBhye[nZu4T7l3] == DrdQBhye[0] && d7rJYuqm[nZu4T7l3] == 0) {
                        cout << nZu4T7l3 << " " << i << endl;
                        d7rJYuqm[i] = 1;
                        d7rJYuqm[nZu4T7l3] = 1;
                        break;
                    }
                    nZu4T7l3--;
                };
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
            i++;
        };
    };
}

int main () {
    int len;
    f (len);
    cin >> DrdQBhye;
    len = strlen (DrdQBhye);
    return 0;
}

