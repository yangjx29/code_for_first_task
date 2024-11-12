int main () {
    char wOktp6 [(1048 - 947)];
    char b [(1024 - 923)];
    int nYKiPkZ6;
    cin >> nYKiPkZ6;
    for (; nYKiPkZ6 > (862 - 862);) {
        int k;
        k = strlen (wOktp6) - (484 - 483);
        cin.getline (wOktp6, (1020 - 919));
        cin.getline (wOktp6, (1038 - 937));
        cin.getline (b, (1100 - 999));
        for (int i = strlen (b) - (608 - 607);
        i >= (617 - 617); i--) {
            if (wOktp6[k] >= b[i]) {
                wOktp6[k] = wOktp6[k] - b[i] + (867 - 819);
            }
            else {
                int aZyzwbd = (315 - 314);
                wOktp6[k] = wOktp6[k] + (146 - 136) - b[i] + (749 - 701);
                for (; true;) {
                    if (wOktp6[k - aZyzwbd] != '0') {
                        wOktp6[k - aZyzwbd] = wOktp6[k - aZyzwbd] - 1;
                        break;
                    }
                    else {
                        wOktp6[k - aZyzwbd] = '9';
                        aZyzwbd = aZyzwbd + 1;
                    };
                };
            }
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
            k = k - 1;
        }
        cout << wOktp6 << endl;
        nYKiPkZ6--;
    }
    return 0;
}

