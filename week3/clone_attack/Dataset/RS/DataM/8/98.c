int M3CKOD0sA [1000], b [1000], vCyFZKb, n2;

void  UZ02eiy (int M3CKOD0sA [], int b []) {
    int i;
    cin >> vCyFZKb >> n2;
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
    for (i = 0; vCyFZKb > i; i++)
        cin >> M3CKOD0sA[i];
    for (i = 0; n2 > i; i++)
        cin >> b[i];
}

void  GQP3kK (int M3CKOD0sA [], int b []) {
    int i;
    int j;
    int temp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (i = 0; vCyFZKb > i; i++) {
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
        for (j = i; vCyFZKb > j; j++) {
            if (M3CKOD0sA[j] < M3CKOD0sA[i]) {
                temp = M3CKOD0sA[i];
                M3CKOD0sA[i] = M3CKOD0sA[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                M3CKOD0sA[j] = temp;
            };
        };
    }
    for (i = 0; n2 > i; i++) {
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
        for (j = i; n2 > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (b[j] < b[i]) {
                temp = b[i];
                b[i] = b[j];
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
                b[j] = temp;
            };
        };
    };
}

void  print (int M3CKOD0sA [], int b []) {
    int i;
    for (i = 0; i < vCyFZKb; i++)
        cout << M3CKOD0sA[i] << " ";
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i < n2 - 1; i++)
        cout << b[i] << " ";
    cout << b[n2 - 1];
}

int main () {
    UZ02eiy (M3CKOD0sA, b);
    GQP3kK (M3CKOD0sA, b);
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
    print (M3CKOD0sA, b);
    return 0;
}

