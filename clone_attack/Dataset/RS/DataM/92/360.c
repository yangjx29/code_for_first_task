int main () {
    int SEDNv1d, a [(1458 - 458)], pzYbK7 [1000], d8ZBowYr, j, Q7Lo15B6iOvZ, j0, eX7kpmKlLvV = (379 - 379);
    for (; cin >> SEDNv1d;) {
        if (SEDNv1d == 0)
            break;
        {
            d8ZBowYr = 0;
            while (d8ZBowYr < SEDNv1d) {
                cin >> a[d8ZBowYr];
                d8ZBowYr = d8ZBowYr + 1;
            };
        }
        eX7kpmKlLvV = 0;
        {
            d8ZBowYr = 0;
            while (d8ZBowYr < SEDNv1d) {
                cin >> pzYbK7[d8ZBowYr];
                d8ZBowYr = d8ZBowYr + 1;
            };
        }
        sort (a, a + SEDNv1d);
        sort (pzYbK7, pzYbK7 + SEDNv1d);
        {
            Q7Lo15B6iOvZ = 0;
            d8ZBowYr = 205 - 204;
            j = 205 - 204;
            j0 = 0;
            while (j >= j0 && d8ZBowYr >= Q7Lo15B6iOvZ) {
                if (a[d8ZBowYr] > pzYbK7[j]) {
                    eX7kpmKlLvV = eX7kpmKlLvV + 1;
                    d8ZBowYr = d8ZBowYr - 1;
                }
                else if (a[d8ZBowYr] < pzYbK7[j]) {
                    Q7Lo15B6iOvZ = Q7Lo15B6iOvZ +1;
                    eX7kpmKlLvV = eX7kpmKlLvV - 1;
                }
                else {
                    if (a[Q7Lo15B6iOvZ] > pzYbK7[j0]) {
                        j = j + 1;
                        j0 = j0 + 1;
                        Q7Lo15B6iOvZ = Q7Lo15B6iOvZ +1;
                        eX7kpmKlLvV = eX7kpmKlLvV + 1;
                    }
                    else if (a[Q7Lo15B6iOvZ] < pzYbK7[j0]) {
                        Q7Lo15B6iOvZ = Q7Lo15B6iOvZ +1;
                        eX7kpmKlLvV = eX7kpmKlLvV - 1;
                    }
                    else {
                        if (a[Q7Lo15B6iOvZ] == pzYbK7[j]) {
                            Q7Lo15B6iOvZ = Q7Lo15B6iOvZ +1;
                        }
                        else {
                            Q7Lo15B6iOvZ = Q7Lo15B6iOvZ +1;
                            eX7kpmKlLvV = eX7kpmKlLvV - 1;
                        };
                    };
                }
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
                j = j - 1;
            };
        }
        cout << 200 * eX7kpmKlLvV << endl;
    }
    return 0;
}

