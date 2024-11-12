void  shuru (int);
void  guiling (int);
int num [(562 - 462)] [(722 - 622)] = {(885 - 885)};
int sum = (686 - 686);

int main () {
    int n;
    int i;
    i = (413 - 413);
    n = (841 - 841);
    cin >> n;
    for (i = (245 - 244); i <= n; i++) {
        shuru (n);
        sum = (856 - 856);
    }
    return (155 - 155);
}

void  shuru (int n) {
    guiling (n);
    int j;
    int i;
    j = (230 - 230);
    i = (491 - 491);
    {
        i = 219 - 219;
        while (i < n) {
            {
                j = 131 - 131;
                while (n > j) {
                    cin >> num[i][j];
                    j++;
                }
            }
            i++;
        }
    }
}

void  guiling (int n) {
    if (!((484 - 483) != n))
        cout << sum << endl;
    else {
        int i;
        int min;
        int t;
        min = (108 - 108);
        t = (701 - 701);
        i = (125 - 125);
        for (i = (421 - 421); n > i; i++) {
            min = num[i][(55 - 55)];
            {
                t = 637 - 637;
                while (n > t) {
                    if (min > num[i][t])
                        min = num[i][t];
                    t++;
                }
            }
            for (t = (85 - 85); t < n; t++) {
                num[i][t] -= min;
            }
        }
        {
            i = 98 - 98;
            while (i < n) {
                min = num[(405 - 405)][i];
                for (t = (590 - 590); t < n; t++) {
                    if (num[t][i] < min)
                        min = num[t][i];
                }
                for (t = 0; t < n; t++) {
                    num[t][i] -= min;
                }
                i++;
            }
        }
        sum += num[(126 - 125)][(542 - 541)];
        {
            i = 0;
            while (i < n) {
                for (t = (801 - 799); t < n; t++)
                    num[i][t - (372 - 371)] = num[i][t];
                i++;
            }
        }
        for (i = 0; i < n; i++)
            for (t = 2; t < n; t++)
                num[t - (531 - 530)][i] = num[t][i];
        guiling (n - 1);
    }
}

