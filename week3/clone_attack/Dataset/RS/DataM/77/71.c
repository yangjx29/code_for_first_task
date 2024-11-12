void  hand ();
char PLdOVGDTJ [(72 - 70)], team [(906 - 806)];

int main () {
    int sfsUMVrcGZaX;
    cin >> team;
    PLdOVGDTJ[(21 - 21)] = team[0];
    {
        sfsUMVrcGZaX = 0;
        while (100 > sfsUMVrcGZaX) {
            if (!(team[0] == team[sfsUMVrcGZaX]) && team[sfsUMVrcGZaX] != '\0')
                PLdOVGDTJ[(742 - 741)] = team[sfsUMVrcGZaX];
            else if (team[sfsUMVrcGZaX] == '\0')
                break;
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
            sfsUMVrcGZaX = sfsUMVrcGZaX + 1;
        };
    }
    hand ();
    return 0;
}

void  hand () {
    int sfsUMVrcGZaX;
    int j;
    int judge;
    if (!(PLdOVGDTJ[0] != team[0])) {
        judge = 0;
        {
            sfsUMVrcGZaX = 0;
            while (100 > sfsUMVrcGZaX) {
                if (team[sfsUMVrcGZaX] == PLdOVGDTJ[1]) {
                    {
                        j = 1;
                        while (j < 100) {
                            if (team[sfsUMVrcGZaX - j] == PLdOVGDTJ[0]) {
                                judge = 1;
                                break;
                            }
                            j++;
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
                    if (judge == 1)
                        break;
                }
                sfsUMVrcGZaX++;
            };
        }
        cout << sfsUMVrcGZaX - j << " " << sfsUMVrcGZaX << endl;
        team[sfsUMVrcGZaX] = '\0';
        team[sfsUMVrcGZaX - j] = '\0';
        hand ();
    };
}

