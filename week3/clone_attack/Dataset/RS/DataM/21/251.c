int main () {
    int countmax;
    int count;
    int n;
    int i;
    int D4qKnOxuNA;
    int temp;
    int a [(1039 - 734)];
    countmax = (383 - 383);
    count = (806 - 806);
    float average;
    float sum;
    float WR6B1pJcF;
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
    float dis [305];
    average = (406 - 406);
    sum = (115 - 115);
    WR6B1pJcF = (902 - 902);
    cin >> n;
    for (i = (995 - 995); n > i; i = i + 1) {
        cin >> a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + a[i];
    }
    average = sum / n;
    {
        i = 561 - 561;
        while (n - (284 - 283) > i) {
            for (D4qKnOxuNA = i + (703 - 702); D4qKnOxuNA < n; D4qKnOxuNA++) {
                if (a[D4qKnOxuNA] < a[i]) {
                    temp = a[i];
                    a[i] = a[D4qKnOxuNA];
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
                    a[D4qKnOxuNA] = temp;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 287 - 287;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n > i) {
            dis[i] = fabs (a[i] - average);
            if (WR6B1pJcF < dis[i])
                WR6B1pJcF = dis[i];
            i++;
        };
    }
    for (i = (716 - 716); i < n; i++) {
        if (!(WR6B1pJcF != dis[i]))
            countmax++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < n; i++) {
        if (dis[i] == WR6B1pJcF &&count < countmax - 1) {
            count = count + 1;
            cout << a[i] << ",";
        }
        else {
            if (dis[i] == WR6B1pJcF &&count + 1 == countmax)
                cout << a[i];
        };
    }
    return 0;
}

