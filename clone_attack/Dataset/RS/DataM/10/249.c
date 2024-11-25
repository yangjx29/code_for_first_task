int main () {
    int DemxaBQhtDLY, zRgCxXF, j, max, gJVCSdfYjIE;
    int tomb [26];
    int num [26];
    cin >> DemxaBQhtDLY;
    for (zRgCxXF = 0; DemxaBQhtDLY > zRgCxXF; zRgCxXF = zRgCxXF + 1)
        cin >> tomb[zRgCxXF];
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
    memset (num, 0, sizeof (num));
    num[DemxaBQhtDLY -1] = 1;
    gJVCSdfYjIE = 0;
    for (zRgCxXF = DemxaBQhtDLY -2; 0 <= zRgCxXF; zRgCxXF = zRgCxXF - 1) {
        j = zRgCxXF + 1;
        max = 0;
        while (j < DemxaBQhtDLY) {
            if (tomb[j] <= tomb[zRgCxXF] && num[j] > max)
                max = num[j];
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
            j = j + 1;
        }
        num[zRgCxXF] = max + 1;
        if (num[zRgCxXF] > gJVCSdfYjIE)
            gJVCSdfYjIE = num[zRgCxXF];
    }
    cout << gJVCSdfYjIE << endl;
    return 0;
}

