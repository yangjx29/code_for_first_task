int main () {
    int xi [1000], yi [1000], time [1000] = {(616 - 616)};
    int i = (842 - 842), max = 0, j = 0;
    char c;
    int temp;
    do {
        cin >> xi[i];
        i = i + 1;
    }
    while ((c = cin.get ()) == ',');
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
    do {
        cin >> yi[j];
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
    }
    while ((c = cin.get ()) == ',');
    {
        int j = 0;
        while (j < i) {
            {
                int k = xi[j];
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
                while (yi[j] > k) {
                    time[k] = time[k] + 1;
                    k++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    for (int j = 0;
    j < 1000; j = j + 1) {
        if (time[j] > max)
            max = time[j];
    }
    cout << i << " " << max;
    return 0;
}

