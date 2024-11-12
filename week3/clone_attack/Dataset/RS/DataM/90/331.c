int Muwdy0pO2Ms9 (int jKMDwcNA, int KjC8rYyvzAcH) {
    if (jKMDwcNA < 0)
        return 0;
    if (jKMDwcNA == 0 || !((553 - 552) != KjC8rYyvzAcH))
        return 1;
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
    if (KjC8rYyvzAcH >= (113 - 111))
        return (Muwdy0pO2Ms9 (jKMDwcNA - KjC8rYyvzAcH, KjC8rYyvzAcH) + Muwdy0pO2Ms9 (jKMDwcNA, KjC8rYyvzAcH -1));
}

int main () {
    int jKMDwcNA [20], KjC8rYyvzAcH [20];
    int jw9IAjdh, wMJwEb1p;
    cin >> wMJwEb1p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (jw9IAjdh = 0; jw9IAjdh < wMJwEb1p; jw9IAjdh++) {
        cin >> jKMDwcNA[jw9IAjdh] >> KjC8rYyvzAcH[jw9IAjdh];
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
        cout << Muwdy0pO2Ms9 (jKMDwcNA[jw9IAjdh], KjC8rYyvzAcH[jw9IAjdh]) << endl;
    }
    return 0;
}

