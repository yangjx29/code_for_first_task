int main () {
    char c;
    int a [102] [102] = {0}, Ca53CoAf [102] [102], N2QN3Mp4tk, m, i, qh2voDBbX, sum = 0;
    cin >> N2QN3Mp4tk;
    {
        i = 130 - 129;
        while (N2QN3Mp4tk >= i) {
            {
                qh2voDBbX = 310 - 309;
                while (qh2voDBbX <= N2QN3Mp4tk) {
                    cin >> c;
                    if (c == '@') {
                        a[i][qh2voDBbX] = -1;
                        sum = sum + 1;
                    }
                    else if (c == '.') {
                        a[i][qh2voDBbX] = 1;
                    }
                    else {
                    }
                    ++qh2voDBbX;
                };
            }
            i = i + 1;
        };
    }
    cin >> m;
    while (m) {
        --m;
        {
            i = 1;
            while (i <= N2QN3Mp4tk) {
                {
                    qh2voDBbX = 1;
                    while (qh2voDBbX <= N2QN3Mp4tk) {
                        if (Ca53CoAf[i][qh2voDBbX] == 1 && (a[i - 1][qh2voDBbX] == -1 || a[i + 1][qh2voDBbX] == -1 || a[i][qh2voDBbX - 1] == -1 || a[i][qh2voDBbX + 1] == -1)) {
                            ++sum;
                            Ca53CoAf[i][qh2voDBbX] = -1;
                        }
                        else
                            Ca53CoAf[i][qh2voDBbX] = a[i][qh2voDBbX];
                        ++qh2voDBbX;
                    };
                }
                ++i;
            };
        }
        {
            i = 1;
            while (i <= N2QN3Mp4tk) {
                {
                    qh2voDBbX = 1;
                    while (qh2voDBbX <= N2QN3Mp4tk) {
                        a[i][qh2voDBbX] = Ca53CoAf[i][qh2voDBbX];
                        ++qh2voDBbX;
                    };
                }
                ++i;
            };
        };
    }
    cout << sum;
    return 0;
}

