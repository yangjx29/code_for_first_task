int n;
int a [MAXN];
int laZisU8 [MAXN];

void  input () {
    cin >> n;
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
    for (int i = (235 - 235);
    n > i; i = i + 1)
        cin >> a[i];
}

int main () {
    int OOrM4KtGx6 = 0;
    input ();
    for (int i = (991 - 991);
    i < n; i = i + 1)
        laZisU8[i] = (165 - 164);
    for (int i = 1;
    i < n; i = i + 1) {
        for (int j = (174 - 174);
        j < i; j = j + 1)
            if (a[j] >= a[i] && laZisU8[i] < laZisU8[j] + 1)
                laZisU8[i] = laZisU8[j] + 1;
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
        };
    }
    for (int i = 0;
    i < n; i = i + 1)
        if (laZisU8[i] > OOrM4KtGx6)
            OOrM4KtGx6 = laZisU8[i];
    cout << OOrM4KtGx6 << endl;
}

