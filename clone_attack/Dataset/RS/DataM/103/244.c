int main () {
    int i;
    int k;
    char route [1001];
    int len;
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
    len = strlen (route);
    cin.getline (route, 1001);
    for (i = 0; len > i; i++) {
        int count;
        count = 1;
        if (i == len - 1) {
            if ((97 <= route[i]) && (122 >= route[i])) {
                route[i] = route[i] - 32;
            }
            cout << '(' << route[i] << ',' << count << ')';
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
            break;
        }
        for (k = i + 1; len > k; k = k + 1) {
            if ((route[k] == route[i]) || (route[k] == route[i] + 32) || (route[i] == route[k] - 32)) {
                count++;
            }
            else {
                break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        if ((route[i] >= 97) && (route[i] <= 122)) {
            route[i] = route[i] - 32;
        }
        cout << '(' << route[i] << ',' << count << ')';
        if (k != len - 1) {
            i = k - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    return 0;
}

