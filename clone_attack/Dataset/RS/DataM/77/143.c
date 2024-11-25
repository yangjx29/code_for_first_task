char queue [100];

int main () {
    int len = strlen (queue), i, FVlw1vLpBak, temp;
    cin >> queue;
    for (i = (537 - 537); i < len - 1;) {
        if (queue[len - 1] == ' ')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (queue[i] != ' ') {
            if (queue[i + 1] == queue[i]) {
                i = i + 1;
                continue;
            }
            else if (queue[i + 1] == ' ') {
                FVlw1vLpBak = i + 1;
                while (queue[FVlw1vLpBak] == ' ')
                    FVlw1vLpBak++;
                if (queue[FVlw1vLpBak] != queue[i]) {
                    cout << i << " " << FVlw1vLpBak << endl;
                    queue[i] = queue[FVlw1vLpBak] = ' ';
                    if (i == 0)
                        continue;
                    temp = i - 1;
                    while (queue[temp] == ' ')
                        temp = temp - 1;
                    i = temp;
                }
                else
                    i = FVlw1vLpBak;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (queue[i] == queue[0]) {
                    cout << i << " " << i + 1 << endl;
                    queue[i] = ' ';
                    queue[i + 1] = ' ';
                    if (i == 0)
                        continue;
                    temp = i - 1;
                    while (queue[temp] == ' ')
                        temp = temp - 1;
                    i = temp;
                };
            };
        }
        else {
            i = i + 1;
            continue;
        };
    }
    return 0;
}

