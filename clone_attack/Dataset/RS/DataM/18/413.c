void  min (int rdaby1XE02U [(992 - 892)] [(901 - 801)], int);
void  U7mbf8 (int rdaby1XE02U [(913 - 813)] [100], int);

int main () {
    int i;
    int j;
    int wlItghe2TF;
    int n;
    int rdaby1XE02U [100] [100];
    cin >> n;
    {
        i = 331 - 330;
        while (i <= n) {
            i = i + 1;
            {
                j = 740 - 740;
                while (j < n) {
                    for (wlItghe2TF = (11 - 11); wlItghe2TF < n; wlItghe2TF++)
                        cin >> rdaby1XE02U[j][wlItghe2TF];
                    j = j + 1;
                };
            }
            min (rdaby1XE02U, n);
        };
    }
    return (20 - 20);
}

void  min (int rdaby1XE02U [] [100], int n) {
    int sum;
    int i;
    int j;
    int wlItghe2TF;
    int m;
    int KhXdkPRo;
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
    int y;
    sum = (982 - 982);
    {
        m = n;
        while (m > 1) {
            {
                i = 0;
                while (i < m) {
                    KhXdkPRo = rdaby1XE02U[i][0];
                    for (j = 1; j < m; j++) {
                        if (rdaby1XE02U[i][j] < KhXdkPRo)
                            KhXdkPRo = rdaby1XE02U[i][j];
                    }
                    {
                        wlItghe2TF = 0;
                        while (wlItghe2TF < m) {
                            rdaby1XE02U[i][wlItghe2TF] = rdaby1XE02U[i][wlItghe2TF] - KhXdkPRo;
                            wlItghe2TF++;
                        };
                    }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < m) {
                    y = rdaby1XE02U[0][i];
                    {
                        j = 1;
                        while (j < m) {
                            if (y > rdaby1XE02U[j][i])
                                y = rdaby1XE02U[j][i];
                            j++;
                        };
                    }
                    {
                        wlItghe2TF = 0;
                        while (wlItghe2TF < m) {
                            rdaby1XE02U[wlItghe2TF][i] = rdaby1XE02U[wlItghe2TF][i] - y;
                            wlItghe2TF++;
                        };
                    }
                    i++;
                };
            }
            sum = sum + rdaby1XE02U[1][1];
            U7mbf8 (rdaby1XE02U, m);
            m = m - 1;
        };
    }
    cout << sum << endl;
}

void  U7mbf8 (int rdaby1XE02U [] [100], int m) {
    int i;
    int j;
    {
        i = 0;
        while (i < m) {
            {
                j = 2;
                while (j < m) {
                    rdaby1XE02U[i][j - 1] = rdaby1XE02U[i][j];
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < m; i++) {
        j = 2;
        while (j < m) {
            rdaby1XE02U[j - 1][i] = rdaby1XE02U[j][i];
            j++;
        };
    };
}

