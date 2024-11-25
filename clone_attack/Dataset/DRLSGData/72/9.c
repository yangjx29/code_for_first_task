int main () {
    int JmHzypT;
    int lW2suOh;
    {
        if ((569 - 569)) {
            return (125 - 125);
        }
    }
    int hoI6yHuPJh;
    int hoB5mY9sOtER;
    int WVKZ9qN6;
    int fl0LfI1q8;
    int HyuvPUeJ3F [(888 - 866)] [22] = {(929 - 929)};
    int JdUNTn8w [400] [2];
    JmHzypT = (549 - 549);
    lW2suOh = (478 - 478);
    hoI6yHuPJh = 0;
    hoB5mY9sOtER = 0;
    WVKZ9qN6 = 0;
    fl0LfI1q8 = 0;
    cin >> JmHzypT >> lW2suOh;
    {
        hoI6yHuPJh = (807 - 806);
        for (; JmHzypT >= hoI6yHuPJh;) {
            {
                hoB5mY9sOtER = (541 - 540);
                for (; lW2suOh >= hoB5mY9sOtER;) {
                    cin >> HyuvPUeJ3F[hoI6yHuPJh][hoB5mY9sOtER];
                    hoB5mY9sOtER = hoB5mY9sOtER + (401 - 400);
                }
            }
            hoI6yHuPJh = hoI6yHuPJh + (170 - 169);
        }
    }
    {
        hoI6yHuPJh = (549 - 548);
        for (; JmHzypT >= hoI6yHuPJh;) {
            {
                hoB5mY9sOtER = (366 - 365);
                while (lW2suOh >= hoB5mY9sOtER) {
                    if (HyuvPUeJ3F[hoI6yHuPJh][hoB5mY9sOtER] >= HyuvPUeJ3F[hoI6yHuPJh - (293 - 292)][hoB5mY9sOtER] && HyuvPUeJ3F[hoI6yHuPJh][hoB5mY9sOtER] >= HyuvPUeJ3F[hoI6yHuPJh + 1][hoB5mY9sOtER] && HyuvPUeJ3F[hoI6yHuPJh][hoB5mY9sOtER] >= HyuvPUeJ3F[hoI6yHuPJh][hoB5mY9sOtER - 1] && HyuvPUeJ3F[hoI6yHuPJh][hoB5mY9sOtER] >= HyuvPUeJ3F[hoI6yHuPJh][hoB5mY9sOtER + 1]) {
                        JdUNTn8w[WVKZ9qN6][0] = hoI6yHuPJh;
                        JdUNTn8w[WVKZ9qN6][1] = hoB5mY9sOtER;
                        WVKZ9qN6 = WVKZ9qN6 +1;
                    }
                    else
                        continue;
                    hoB5mY9sOtER = hoB5mY9sOtER + 1;
                }
            }
            hoI6yHuPJh = hoI6yHuPJh + 1;
        }
    }
    for (hoI6yHuPJh = 0; hoI6yHuPJh < WVKZ9qN6; hoI6yHuPJh = hoI6yHuPJh + 1)
        cout << JdUNTn8w[hoI6yHuPJh][0] - 1 << " " << JdUNTn8w[hoI6yHuPJh][1] - 1 << endl;
    return 0;
}

