int main () {
    int t, i, DKrf04685l, k, num = (836 - 836), Gts0Pyl = 0;
    char uUAmDy [10] [100000];
    cin >> t;
    for (i = 0; i < t; i = i + 1)
        cin >> uUAmDy[i];
    for (i = 0; i < t; i = i + 1) {
        Gts0Pyl = 0;
        for (DKrf04685l = 0; uUAmDy[i][DKrf04685l] != '\0'; DKrf04685l = DKrf04685l +1) {
            for (k = DKrf04685l +1; uUAmDy[i][k] != '\0'; k = k + 1) {
                if (!(uUAmDy[i][DKrf04685l] != uUAmDy[i][k])) {
                    num = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    uUAmDy[i][k] = ' ';
                };
            }
            if ((num == 0) && (uUAmDy[i][DKrf04685l] != ' ')) {
                Gts0Pyl = 1;
                cout << uUAmDy[i][DKrf04685l] << endl;
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
                break;
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
            num = 0;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Gts0Pyl == 0)
            cout << "no" << endl;
    }
    return 0;
}

