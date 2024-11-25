int n, m, a [100];

void  daoxu (int *s, int *xr0Pp9cLZ) {
    int temp;
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
    for (; s < xr0Pp9cLZ; s = s + 1, xr0Pp9cLZ--) {
        temp = *s;
        *s = *xr0Pp9cLZ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *xr0Pp9cLZ = temp;
    };
}

int main () {
    int i, *p = a;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> *p++;
    }
    daoxu (a, a + n - m - 1);
    daoxu (a + n - m, a + n - 1);
    daoxu (a, a + n - 1);
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
    p = a;
    cout << *p++;
    for (; p < a + n; p++) {
        cout << " " << *p;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    cout << endl;
    return 0;
}

