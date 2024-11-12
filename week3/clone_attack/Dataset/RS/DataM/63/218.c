int main () {
    int k;
    int qfEgzYdObCr [(813 - 712)] [(694 - 593)];
    int DAYNL5StFu;
    int tEbPzZjlMB3;
    int XCojuvMme [(826 - 725)] [(1096 - 995)];
    int b [101] [101];
    int x1;
    int D3WUnbwuPB;
    int bu7PXINedW;
    int y2;
    scanf ("%d%d", &x1, &bu7PXINedW);
    for (DAYNL5StFu = (79 - 78); x1 >= DAYNL5StFu; DAYNL5StFu = DAYNL5StFu +1)
        for (tEbPzZjlMB3 = (968 - 967); bu7PXINedW >= tEbPzZjlMB3; tEbPzZjlMB3 = tEbPzZjlMB3 + 1)
            scanf ("%d", &XCojuvMme[DAYNL5StFu][tEbPzZjlMB3]);
    scanf ("%d%d", &D3WUnbwuPB, &y2);
    {
        DAYNL5StFu = 67 - 66;
        while (D3WUnbwuPB >= DAYNL5StFu) {
            for (tEbPzZjlMB3 = (444 - 443); tEbPzZjlMB3 <= y2; tEbPzZjlMB3 = tEbPzZjlMB3 + 1)
                scanf ("%d", &b[DAYNL5StFu][tEbPzZjlMB3]);
            DAYNL5StFu = DAYNL5StFu +1;
        };
    }
    {
        DAYNL5StFu = 544 - 543;
        while (x1 >= DAYNL5StFu) {
            {
                tEbPzZjlMB3 = 1;
                while (tEbPzZjlMB3 <= y2) {
                    qfEgzYdObCr[DAYNL5StFu][tEbPzZjlMB3] = (110 - 110);
                    tEbPzZjlMB3 = tEbPzZjlMB3 + 1;
                };
            }
            DAYNL5StFu = DAYNL5StFu +1;
        };
    }
    {
        DAYNL5StFu = 1;
        while (DAYNL5StFu <= x1) {
            {
                tEbPzZjlMB3 = 1;
                while (tEbPzZjlMB3 <= y2) {
                    for (k = 1; k <= D3WUnbwuPB; k++)
                        qfEgzYdObCr[DAYNL5StFu][tEbPzZjlMB3] = qfEgzYdObCr[DAYNL5StFu][tEbPzZjlMB3] + XCojuvMme[DAYNL5StFu][k] * b[k][tEbPzZjlMB3];
                    tEbPzZjlMB3 = tEbPzZjlMB3 + 1;
                };
            }
            DAYNL5StFu++;
        };
    }
    for (DAYNL5StFu = 1; DAYNL5StFu <= x1; DAYNL5StFu = DAYNL5StFu +1) {
        for (tEbPzZjlMB3 = 1; tEbPzZjlMB3 < y2; tEbPzZjlMB3 = tEbPzZjlMB3 + 1)
            cout << qfEgzYdObCr[DAYNL5StFu][tEbPzZjlMB3] << " ";
        cout << qfEgzYdObCr[DAYNL5StFu][y2] << endl;
    }
    return 0;
}

