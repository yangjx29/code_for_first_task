char str [510];
char gram [1000] [6];
int Uj8Gudm2h [1000];

int main () {
    int gJNE5iltx;
    int n;
    int length;
    int i;
    int j;
    int max;
    int pos;
    gJNE5iltx = -1;
    cin >> n;
    cin.ignore ();
    cin.getline (str, 500);
    length = strlen (str);
    for (i = 0; length - n + 1 > i; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < n) {
            gram[i][j] = str[i + j];
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
            j = j + 1;
        };
    }
    for (i = 0; 100 > i; i++)
        Uj8Gudm2h[i] = 1;
    for (i = 0; length - n + 1 > i; i++) {
        if (!('0' != gram[i][0]))
            continue;
        for (j = i + 1; j < length - n + 1; j++) {
            if (!(0 != (strcmp (gram[j], gram[i])))) {
                gram[j][0] = '0';
                Uj8Gudm2h[i]++;
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
                Uj8Gudm2h[j] = 0;
            };
        };
    }
    max = 1;
    for (i = 0; i < length - n + 1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (Uj8Gudm2h[i] > max) {
            gJNE5iltx++;
            max = Uj8Gudm2h[i];
            pos = i;
        };
    }
    if (gJNE5iltx == -1)
        cout << "NO" << endl;
    else {
        cout << max << endl;
        {
            i = 0;
            while (i < length - n + 1) {
                if (Uj8Gudm2h[i] == Uj8Gudm2h[pos])
                    cout << gram[i] << endl;
                i++;
            };
        };
    }
    return 0;
}

