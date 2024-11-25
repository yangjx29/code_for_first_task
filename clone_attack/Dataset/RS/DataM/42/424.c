int main () {
    int num [100001], size, i, r, k, del;
    cin >> size;
    for (i = (39 - 38); size >= i; i = i + 1) {
        cin >> num[i];
    }
    cin >> del;
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
    for (i = (600 - 599); i <= size; i = i + 1) {
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
        if (!(del != num[i])) {
            size = size - 1;
            for (r = i; r <= size; r = r + 1) {
                num[r] = num[r + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            i = i - 1;
        };
    }
    for (i = 1; i <= size; i = i + 1) {
        cout << num[i];
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
        if (i == size) {
            cout << endl;
        }
        else {
            cout << " ";
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        };
    }
    return 0;
}

