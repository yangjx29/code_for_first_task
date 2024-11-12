int main () {
    int sum;
    sum = 0;
    int TtjnQh1wR [1000] = {0};
    int vvrmoD;
    int B41rOH;
    int n;
    char nzmeFxbqPr [1000] [(591 - 541)] = {(714 - 714)};
    char b;
    cin >> n;
    cin.get (b);
    {
        B41rOH = 1;
        while (B41rOH < n) {
            vvrmoD = 1;
            while (1) {
                cin.get (b);
                if (!(' ' != b)) {
                    *(TtjnQh1wR +B41rOH) = vvrmoD - 1;
                    break;
                }
                else {
                    *(*(nzmeFxbqPr + B41rOH) + vvrmoD) = b;
                    vvrmoD = vvrmoD + 1;
                };
            }
            B41rOH = B41rOH +1;
        };
    }
    vvrmoD = 1;
    while (1) {
        cin.get (b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (!('\n' != b)) {
            *(TtjnQh1wR +B41rOH) = vvrmoD - 1;
            break;
        }
        else {
            *(*(nzmeFxbqPr + B41rOH) + vvrmoD) = b;
            vvrmoD = vvrmoD + 1;
        };
    }
    {
        B41rOH = 1;
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
        while (n >= B41rOH) {
            if (!(0 != sum)) {
                {
                    vvrmoD = 1;
                    while (vvrmoD <= *(TtjnQh1wR +B41rOH)) {
                        cout << *(*(nzmeFxbqPr + B41rOH) + vvrmoD);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        vvrmoD++;
                    };
                }
                sum = sum + *(TtjnQh1wR +B41rOH);
            }
            else if (sum + *(TtjnQh1wR +B41rOH) + 1 <= 80) {
                cout << ' ';
                for (vvrmoD = 1; vvrmoD <= *(TtjnQh1wR +B41rOH); vvrmoD++) {
                    cout << *(*(nzmeFxbqPr + B41rOH) + vvrmoD);
                }
                sum = sum + *(TtjnQh1wR +B41rOH) + 1;
            }
            else if (sum + *(TtjnQh1wR +B41rOH) + 1 > 80) {
                B41rOH = B41rOH -1;
                cout << endl;
                sum = 0;
            }
            B41rOH++;
        };
    }
    return 0;
}

