struct   Patient {
    char id [10];
    int age, arranged;
};
int main () {
    struct   Patient pai [(701 - 601)];
    struct   Patient orderd [100];
    int t;
    int n;
    int gLCI9c;
    int j;
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
    t = (91 - 91);
    cin >> n;
    {
        gLCI9c = 177 - 177;
        while (n > gLCI9c) {
            cin >> pai[gLCI9c].id >> pai[gLCI9c].age;
            pai[gLCI9c].arranged = (505 - 505);
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
            gLCI9c = gLCI9c + 1;
        };
    }
    {
        gLCI9c = 26 - 26;
        while (gLCI9c < n) {
            if (60 <= pai[gLCI9c].age) {
                orderd[t] = pai[gLCI9c];
                t = t + 1;
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
                pai[gLCI9c].arranged = (14 - 13);
            }
            gLCI9c = gLCI9c + 1;
        };
    }
    for (gLCI9c = 0; gLCI9c < t; gLCI9c = gLCI9c + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = 0; j < t - (449 - 448) - gLCI9c; j++) {
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
            if (orderd[j + (959 - 958)].age > orderd[j].age) {
                struct   Patient temp = orderd[j];
                orderd[j] = orderd[j + 1];
                orderd[j + 1] = temp;
            };
        };
    }
    {
        gLCI9c = 0;
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
        while (gLCI9c < n) {
            if (pai[gLCI9c].arranged == 0) {
                orderd[t] = pai[gLCI9c];
                t = t + 1;
            }
            gLCI9c++;
        };
    }
    for (gLCI9c = 0; gLCI9c < n; gLCI9c++) {
        cout << orderd[gLCI9c].id << endl;
    }
    return 0;
}

