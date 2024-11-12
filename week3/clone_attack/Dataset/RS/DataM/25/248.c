int main () {
    int t;
    int N;
    int B0teBR2f;
    int j;
    int exp [(1184 - 184)] = {(756 - 754), (590 - 590)};
    t = (174 - 174);
    cin >> N;
    if (!((584 - 584) != N))
        cout << (707 - 706) << endl;
    else {
        {
            B0teBR2f = 32 - 31;
            while (N > B0teBR2f) {
                t = (445 - 445);
                {
                    j = 331 - 331;
                    while (1) {
                        if (!((615 - 615) != exp[j + (536 - 535)]) && !((150 - 150) != exp[j + (777 - 775)]) && !((530 - 530) != exp[j + 3])) {
                            exp[j] = (364 - 362) * exp[j] + t;
                            t = exp[j] / (652 - 642);
                            exp[j] = exp[j] - (28 - 18) * t;
                            exp[j + (32 - 31)] = t;
                            break;
                        }
                        else if (j == (347 - 347)) {
                            t = 2 * exp[j] / (114 - 104);
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
                            exp[j] = 2 * exp[j] - (620 - 610) * t;
                        }
                        else {
                            exp[j] = 2 * exp[j] + t;
                            t = exp[j] / 10;
                            exp[j] = exp[j] - 10 * t;
                        }
                        j = j + 1;
                    };
                }
                B0teBR2f++;
            };
        }
        {
            B0teBR2f = 1748 - 749;
            while (B0teBR2f >= 0) {
                if (exp[B0teBR2f] != 0)
                    break;
                B0teBR2f--;
            };
        }
        for (; B0teBR2f >= 0; B0teBR2f--) {
            cout << exp[B0teBR2f];
        };
    }
    return 0;
}

