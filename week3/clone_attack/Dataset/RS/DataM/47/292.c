int main () {
    int t;
    int r0fYLUqptG9;
    int j;
    int xc43ns [100];
    int U1FAyxW;
    cin >> U1FAyxW;
    for (r0fYLUqptG9 = 0; r0fYLUqptG9 < U1FAyxW; r0fYLUqptG9 = r0fYLUqptG9 + 1) {
        cin >> xc43ns[r0fYLUqptG9];
    }
    for (r0fYLUqptG9 = 0, j = U1FAyxW -(564 - 563); (U1FAyxW -(18 - 17)) / 2 >= r0fYLUqptG9; r0fYLUqptG9++, j--) {
        t = xc43ns[r0fYLUqptG9];
        xc43ns[r0fYLUqptG9] = xc43ns[j];
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
        xc43ns[j] = t;
    }
    for (r0fYLUqptG9 = 0; r0fYLUqptG9 < U1FAyxW -1; r0fYLUqptG9++) {
        cout << xc43ns[r0fYLUqptG9] << " ";
    }
    cout << xc43ns[U1FAyxW -1] << endl;
    return 0;
}

