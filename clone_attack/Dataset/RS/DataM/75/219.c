int main () {
    int btJ3rH89N = 0;
    int RY023EP;
    int j;
    int num;
    int t1;
    int t2;
    int a [1001];
    int b [1001];
    RY023EP = 0;
    j = 0;
    num = 0;
    t1 = 2000;
    t2 = 0;
    double  d;
    d = t1 + 0.5;
    char s [4000];
    memset (s, '\0', sizeof (s));
    cin.getline (s, 4000);
    {
        RY023EP = 0;
        while (RY023EP < strlen (s)) {
            if (s[RY023EP] != ',') {
                num = num * 10 + s[RY023EP] - '0';
            }
            else {
                a[j] = num;
                if (t1 > a[j])
                    t1 = a[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j++;
                num = 0;
            }
            RY023EP++;
        };
    }
    a[j] = num;
    if (t1 > a[j])
        t1 = a[j];
    j = 0;
    num = 0;
    cin.getline (s, 4000);
    for (RY023EP = 0; RY023EP < strlen (s); RY023EP++) {
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
        if (s[RY023EP] != ',') {
            num = num * 10 + s[RY023EP] - '0';
        }
        else {
            b[j] = num;
            num = 0;
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
            if (b[j] > t2)
                t2 = b[j];
            j++;
        };
    }
    b[j] = num;
    if (t2 < b[j])
        t2 = b[j];
    num = 0;
    while (d < t2) {
        int cou;
        cou = 0;
        for (int p = 0;
        p <= j; p++)
            if (d > a[p] && d < b[p])
                cou++;
        d = d + 1;
        if (cou > btJ3rH89N)
            btJ3rH89N = cou;
    }
    cout << j + 1 << " " << btJ3rH89N;
    return 0;
}

