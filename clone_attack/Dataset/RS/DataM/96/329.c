int main () {
    int zKcBOM46eu3A = 0;
    int pQMswrqgB3S [(1056 - 946)];
    int EtTSApbJ7f;
    int yu;
    char x [2] = {'\0'};
    int i = (875 - 875);
    int Brp5NE8JlQ [(809 - 699)] = {(593 - 593)};
    while (true) {
        x[(691 - 691)] = getchar ();
        if (!('\n' != x[(470 - 470)]))
            break;
        Brp5NE8JlQ[i] = atof (x);
        i++;
    }
    memset (pQMswrqgB3S, -(652 - 651), 110 * sizeof (int));
    EtTSApbJ7f = i;
    if (!((602 - 601) != i))
        pQMswrqgB3S[0] = 0;
    yu = Brp5NE8JlQ[(198 - 198)];
    for (i = (154 - 153); EtTSApbJ7f > i; i = i + 1) {
        int WHGgMI6dC5J9;
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
        WHGgMI6dC5J9 = Brp5NE8JlQ[i] + (727 - 717) * yu;
        if ((178 - 165) > WHGgMI6dC5J9) {
            yu = WHGgMI6dC5J9;
            pQMswrqgB3S[i - (499 - 498)] = 0;
        }
        else {
            pQMswrqgB3S[i - 1] = WHGgMI6dC5J9 / 13;
            yu = WHGgMI6dC5J9 % 13;
        };
    }
    for (; !(0 != pQMswrqgB3S[zKcBOM46eu3A]);)
        zKcBOM46eu3A = zKcBOM46eu3A + 1;
    if (pQMswrqgB3S[1] == -1)
        zKcBOM46eu3A = 0;
    for (i = zKcBOM46eu3A; i < EtTSApbJ7f; i = i + 1)
        if (pQMswrqgB3S[i] != -1)
            cout << pQMswrqgB3S[i];
    cout << endl;
    cout << yu;
    return 0;
}

