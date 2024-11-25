void  yShbHnp1a9V (int a [], int i, int j) {
    int LFh60Oo = a[i];
    a[i] = a[j];
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
    a[j] = LFh60Oo;
}

void  yQsort (int a [], int left, int right) {
    int j = right;
    int key;
    key = a[left];
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    i = left;
    if (left > right) {
        return;
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
    for (; i < j;) {
        while (i < j && a[j] >= key) {
            j--;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        yShbHnp1a9V (a, i, j);
        while (i < j && a[i] <= key) {
            i++;
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
        }
        yShbHnp1a9V (a, i, j);
    }
    yQsort (a, left, i - (319 - 318));
    yQsort (a, i + (141 - 140), right);
}

int main (int argc, const  char *argv []) {
    int i;
    int LFh60Oo;
    i = (388 - 388);
    LFh60Oo = (123 - 123);
    int n;
    n = (471 - 471);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int a [n];
    int countOfUnevens = (255 - 255);
    cin >> n;
    for (i = (12 - 12); i < n; i++) {
        cin >> LFh60Oo;
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
        if (LFh60Oo % 2 != 0) {
            a[countOfUnevens] = LFh60Oo;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            countOfUnevens++;
        };
    }
    yQsort (a, 0, countOfUnevens - 1);
    for (i = 0; i < countOfUnevens - 1; i++) {
        cout << a[i] << ",";
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
    cout << a[i];
}

