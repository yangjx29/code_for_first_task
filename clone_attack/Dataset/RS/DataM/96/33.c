int main () {
    int i;
    int LXkUnW;
    int RVI8vxWz21;
    int flag;
    int shang [101] = {0};
    i = 0;
    LXkUnW = 0;
    RVI8vxWz21 = 0;
    flag = 0;
    char VjYSJQ [101];
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
    int *p = NULL;
    cin.getline (VjYSJQ, 101);
    for (i = 0; !('\0' == VjYSJQ[i]); i = i + 1) {
        shang[LXkUnW] = (RVI8vxWz21 *10 + (VjYSJQ[i] - '0')) / 13;
        RVI8vxWz21 = (RVI8vxWz21 *10 + (VjYSJQ[i] - '0')) % 13;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        LXkUnW = LXkUnW +1;
    }
    shang[LXkUnW +1] = 14;
    for (i = 0; !(14 == shang[i]); i++) {
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
        if (shang[i] != 0) {
            flag = 1;
            p = &shang[i];
            break;
        };
    }
    if (flag == 0) {
        cout << "0" << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << VjYSJQ << endl;
    }
    do {
        cout << *p;
        p++;
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
        i = i + 1;
    }
    while (shang[i + 1] != 14);
    cout << endl;
    cout << RVI8vxWz21 << endl;
    return 0;
}

