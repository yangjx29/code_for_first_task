int a [(937 - 927)] [10];
void  func (int day);

int main () {
    int day;
    func (day);
    cin >> a[(898 - 893)][5] >> day;
    {
        int i;
        i = (522 - 521);
        while (i <= (246 - 237)) {
            {
                int j = (937 - 936);
                while (8 >= j) {
                    cout << a[i][j] << " ";
                    ++j;
                };
            }
            cout << a[i][(746 - 737)] << endl;
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
            ++i;
        };
    }
    return (862 - 862);
}

void  func (int day) {
    int qyxfamZHSpIF [10] [10] = {0};
    if (day == (720 - 720))
        return;
    {
        int i = (640 - 639);
        while ((454 - 445) >= i) {
            {
                int j = (285 - 284);
                while (j <= (517 - 508)) {
                    if (a[i][j]) {
                        qyxfamZHSpIF[i][j] += a[i][j];
                        {
                            int p = i - (688 - 687);
                            while (p <= i + (319 - 318)) {
                                {
                                    int q = j - (562 - 561);
                                    while (q <= j + 1) {
                                        qyxfamZHSpIF[p][q] = qyxfamZHSpIF[p][q] + a[i][j];
                                        ++q;
                                    };
                                }
                                ++p;
                            };
                        };
                    }
                    ++j;
                };
            }
            ++i;
        };
    }
    {
        int i = 1;
        while (i <= 9) {
            {
                int j = 1;
                while (j <= 9) {
                    a[i][j] = qyxfamZHSpIF[i][j];
                    ++j;
                };
            }
            ++i;
        };
    }
    func (day - 1);
}

