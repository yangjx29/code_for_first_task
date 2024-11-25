int main () {
    int count [(1190 - 690)] = {0}, n291iKyQ, sXa9k4Z, iMqekT = 1, aZKNGe;
    char jjFVum8tOb [502];
    char u2lPzY [502] [6];
    char *jcrloa;
    cin >> n291iKyQ >> jjFVum8tOb;
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
    sXa9k4Z = strlen (jjFVum8tOb);
    for (int M5WoTDi4R = 0;
    M5WoTDi4R <= sXa9k4Z - n291iKyQ; M5WoTDi4R = M5WoTDi4R +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (aZKNGe = 0, jcrloa = jjFVum8tOb + M5WoTDi4R; aZKNGe < n291iKyQ; aZKNGe++, jcrloa++) {
            u2lPzY[M5WoTDi4R][aZKNGe] = *jcrloa;
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
        };
    }
    {
        int M5WoTDi4R = 0;
        while (M5WoTDi4R <= sXa9k4Z - n291iKyQ) {
            for (int ClPH7Ywmou = M5WoTDi4R;
            ClPH7Ywmou <= sXa9k4Z - n291iKyQ; ClPH7Ywmou++) {
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
                if (strcmp (u2lPzY[M5WoTDi4R], u2lPzY[ClPH7Ywmou]) == 0) {
                    count[M5WoTDi4R]++;
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
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            M5WoTDi4R++;
        };
    }
    {
        int M5WoTDi4R = 0;
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
        while (M5WoTDi4R <= sXa9k4Z - n291iKyQ) {
            iMqekT = iMqekT > count[M5WoTDi4R] ? iMqekT : count[M5WoTDi4R];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            M5WoTDi4R++;
        };
    }
    if (iMqekT == 1) {
        cout << "NO" << endl;
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
    else {
        cout << iMqekT << endl;
        for (int M5WoTDi4R = 0;
        M5WoTDi4R <= sXa9k4Z - n291iKyQ; M5WoTDi4R++) {
            if (count[M5WoTDi4R] == iMqekT) {
                cout << u2lPzY[M5WoTDi4R] << endl;
            };
        };
    }
    return 0;
}

