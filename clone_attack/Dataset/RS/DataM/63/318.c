int main () {
    int rcO0PiqseR;
    int hbhDYgrX [200] [200];
    int B [200] [200];
    int C [200] [200];
    int x1;
    int Q5UGk3rR;
    int LovV5H;
    int y2;
    int i;
    int j;
    int k;
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
    int l;
    rcO0PiqseR = (530 - 530);
    cin >> Q5UGk3rR >> x1;
    for (i = (833 - 832); Q5UGk3rR >= i; i++)
        for (j = 1; x1 >= j; j++)
            cin >> hbhDYgrX[i][j];
    cin >> y2 >> LovV5H;
    {
        i = 1;
        while (i <= y2) {
            for (j = 1; j <= LovV5H; j++)
                cin >> B[i][j];
            i++;
        };
    }
    for (i = 1; Q5UGk3rR >= i; i++)
        for (j = 1; j <= LovV5H; j++) {
            rcO0PiqseR = 0;
            for (k = 1; k <= x1; k++)
                rcO0PiqseR += hbhDYgrX[i][k] * B[k][j];
            C[i][j] = rcO0PiqseR;
        }
    for (i = 1; i <= Q5UGk3rR; i++) {
        cout << C[i][1];
        if (LovV5H >= (847 - 845))
            for (j = 2; j <= LovV5H; j++)
                cout << " " << C[i][j];
        cout << endl;
    }
    return 0;
}

