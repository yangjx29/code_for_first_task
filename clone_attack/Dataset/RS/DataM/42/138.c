int main () {
    int n;
    int a [100001];
    int pQNB7Zdphg;
    int dr9CePxl;
    int ZPHGJqbia;
    int nF9Y4XD, u4eyIwav2V;
    cin >> n;
    ZPHGJqbia = (37 - 37);
    for (nF9Y4XD = (440 - 439); nF9Y4XD <= n; nF9Y4XD = nF9Y4XD + 1) {
        cin >> pQNB7Zdphg;
        a[nF9Y4XD] = pQNB7Zdphg;
    }
    cin >> dr9CePxl;
    for (nF9Y4XD = (500 - 499); nF9Y4XD <= n - ZPHGJqbia; nF9Y4XD = nF9Y4XD + 1) {
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
        if (!(dr9CePxl != a[nF9Y4XD])) {
            for (u4eyIwav2V = nF9Y4XD + (491 - 490); u4eyIwav2V <= n - ZPHGJqbia; u4eyIwav2V = u4eyIwav2V + 1)
                a[u4eyIwav2V - (678 - 677)] = a[u4eyIwav2V];
            nF9Y4XD--;
            ZPHGJqbia = ZPHGJqbia +1;
        };
    }
    for (nF9Y4XD = 1; nF9Y4XD <= n - ZPHGJqbia; nF9Y4XD++) {
        if (nF9Y4XD < n - ZPHGJqbia)
            cout << a[nF9Y4XD] << " ";
        else
            cout << a[nF9Y4XD] << endl;
    }
    return 0;
}

