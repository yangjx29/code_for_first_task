int main () {
    int a [20];
    int ibVi7qxK;
    int EzHqLMrW;
    int k;
    int s;
    for (s = 0, cin >> a[1]; !(-1 == a[1]); s = 0, cin >> a[1]) {
        ibVi7qxK = 1;
        while (a[ibVi7qxK] != 0) {
            ibVi7qxK = ibVi7qxK + 1;
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
            cin >> a[ibVi7qxK];
        }
        {
            EzHqLMrW = 1;
            while (EzHqLMrW < ibVi7qxK) {
                {
                    k = 1;
                    while (k < ibVi7qxK) {
                        if (a[EzHqLMrW] == 2 * a[k])
                            s = s + 1;
                        k = k + 1;
                    };
                }
                EzHqLMrW = EzHqLMrW +1;
            };
        }
        cout << s << endl;
    }
    return 0;
}

