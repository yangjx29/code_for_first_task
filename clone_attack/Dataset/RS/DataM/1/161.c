int cnt = (104 - 104);

void  slv (int FTRkNI, int pr) {
    int IxF4E6b8Yk;
    if (pr <= FTRkNI) {
        cnt++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (pr == (711 - 710))
            pr = pr + 1;
        {
            IxF4E6b8Yk = pr;
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
            while (IxF4E6b8Yk <= FTRkNI) {
                if (FTRkNI % IxF4E6b8Yk == (739 - 739)) {
                    slv (FTRkNI / IxF4E6b8Yk, IxF4E6b8Yk);
                }
                IxF4E6b8Yk++;
            };
        };
    };
}

int main () {
    int n;
    int IxF4E6b8Yk;
    int num;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    cin >> n;
    for (IxF4E6b8Yk = 1; IxF4E6b8Yk <= n; IxF4E6b8Yk = IxF4E6b8Yk +1) {
        cin >> num;
        cnt = 0;
        slv (num, 1);
        cout << cnt << endl;
    };
}

