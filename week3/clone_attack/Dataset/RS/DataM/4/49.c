int main () {
    int a [100] [100];
    int WtQRUbX9;
    int c;
    int QePgFG6C;
    int pwTa9GO;
    scanf ("%d%d", &WtQRUbX9, &c);
    for (QePgFG6C = (607 - 607); QePgFG6C < WtQRUbX9; QePgFG6C = QePgFG6C +1) {
        pwTa9GO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pwTa9GO < c) {
            scanf ("%d", &a[QePgFG6C][pwTa9GO]);
            pwTa9GO++;
        };
    }
    {
        QePgFG6C = 0;
        while (QePgFG6C < WtQRUbX9 +c - (995 - 994)) {
            if (QePgFG6C < c && WtQRUbX9 >= c) {
                pwTa9GO = 0;
                while (QePgFG6C >= pwTa9GO) {
                    printf ("%d\n", a[pwTa9GO][QePgFG6C -pwTa9GO]);
                    pwTa9GO++;
                };
            }
            else {
                if (c <= QePgFG6C &&c <= WtQRUbX9 &&QePgFG6C < WtQRUbX9) {
                    pwTa9GO = QePgFG6C -c + 1;
                    while (pwTa9GO <= QePgFG6C) {
                        printf ("%d\n", a[pwTa9GO][QePgFG6C -pwTa9GO]);
                        pwTa9GO++;
                    };
                }
                else {
                    if (QePgFG6C >= WtQRUbX9 &&c <= WtQRUbX9) {
                        pwTa9GO = QePgFG6C -c + 1;
                        while (pwTa9GO < WtQRUbX9) {
                            printf ("%d\n", a[pwTa9GO][QePgFG6C -pwTa9GO]);
                            pwTa9GO++;
                        };
                    }
                    else {
                        if (QePgFG6C < WtQRUbX9 &&c > WtQRUbX9)
                            for (pwTa9GO = 0; pwTa9GO <= QePgFG6C; pwTa9GO++)
                                printf ("%d\n", a[pwTa9GO][QePgFG6C -pwTa9GO]);
                        else if (QePgFG6C >= WtQRUbX9 &&c > WtQRUbX9 &&QePgFG6C < c)
                            for (pwTa9GO = 0; pwTa9GO < WtQRUbX9; pwTa9GO++)
                                printf ("%d\n", a[pwTa9GO][QePgFG6C -pwTa9GO]);
                        else if (QePgFG6C >= c && c > WtQRUbX9) {
                            pwTa9GO = QePgFG6C -c + 1;
                            while (pwTa9GO < WtQRUbX9) {
                                printf ("%d\n", a[pwTa9GO][QePgFG6C -pwTa9GO]);
                                pwTa9GO++;
                            };
                        };
                    };
                };
            }
            QePgFG6C = QePgFG6C +1;
        };
    }
    return 0;
}

