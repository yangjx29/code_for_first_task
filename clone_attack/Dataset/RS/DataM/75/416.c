int main () {
    int sum;
    int people [1000] [2];
    int foTQe1GOK5g [1000] = {(315 - 315)};
    sum = (700 - 699);
    int max;
    max = 0;
    cin >> people[0][0];
    for (; scanf (",%d", &people[sum++][0]);)
        ;
    cin >> people[0][1];
    sum = 1;
    while (scanf (",%d", &people[sum++][1]))
        ;
    {
        int i = 0;
        while (sum > i) {
            {
                int j = people[i][0];
                while (people[i][1] > j) {
                    foTQe1GOK5g[j]++;
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < 1000) {
            if (foTQe1GOK5g[i] > max)
                max = foTQe1GOK5g[i];
            i++;
        };
    }
    cout << sum - 1 << " " << max << endl;
}

