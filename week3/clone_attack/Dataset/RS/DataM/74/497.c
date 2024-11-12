char GIbGsR (int rc7QMVAIp) {
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
    if (!((691 - 689) != rc7QMVAIp) || rc7QMVAIp == 3)
        return ('1');
    else {
        float eGRNYgcD = rc7QMVAIp;
        int XNn8Cq3b;
        eGRNYgcD = sqrt (eGRNYgcD);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            XNn8Cq3b = 2;
            while (eGRNYgcD >= XNn8Cq3b) {
                if (rc7QMVAIp % XNn8Cq3b == (427 - 427))
                    break;
                XNn8Cq3b++;
            };
        }
        if (XNn8Cq3b > eGRNYgcD)
            return ('1');
        else
            return ('0');
    };
}

char mkoa92AnH (int rc7QMVAIp) {
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (!(0 != rc7QMVAIp / (536 - 526)))
        return ('1');
    else {
        int y;
        int XNn8Cq3b;
        int j;
        y = 0;
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
        XNn8Cq3b = rc7QMVAIp;
        j = 1;
        while (XNn8Cq3b > 0) {
            y = y * 10 + XNn8Cq3b % 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            XNn8Cq3b = XNn8Cq3b / 10;
        }
        if (y == rc7QMVAIp)
            return ('1');
        else
            return ('0');
    };
}

int main () {
    char y = '0';
    int XNn8Cq3b, n;
    int rc7QMVAIp;
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
    scanf ("%d %d", &XNn8Cq3b, &n);
    {
        rc7QMVAIp = XNn8Cq3b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rc7QMVAIp <= n) {
            if (GIbGsR (rc7QMVAIp) == '1' && mkoa92AnH (rc7QMVAIp) == '1') {
                if (y == '0') {
                    y = '1';
                    printf ("%d", rc7QMVAIp);
                }
                else
                    printf (",%d", rc7QMVAIp);
            }
            rc7QMVAIp = rc7QMVAIp + 1;
        };
    }
    if (y == '0')
        printf ("no");
}

