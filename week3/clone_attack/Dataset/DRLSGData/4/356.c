int main () {
    int AgY26w7q3;
    int fub6RGHx;
    int xJYcvq1op [100] [100];
    int tar23s, col;
    cin >> tar23s >> col;
    {
        fub6RGHx = 0;
        while (tar23s > fub6RGHx) {
            {
                AgY26w7q3 = 0;
                for (; col > AgY26w7q3;) {
                    cin >> xJYcvq1op[fub6RGHx][AgY26w7q3];
                    AgY26w7q3++;
                }
            }
            fub6RGHx++;
        }
    }
    {
        fub6RGHx = 0;
        while (fub6RGHx < col) {
            {
                AgY26w7q3 = 0;
                while (fub6RGHx >= AgY26w7q3) {
                    if (tar23s > AgY26w7q3)
                        cout << xJYcvq1op[AgY26w7q3][fub6RGHx - AgY26w7q3] << endl;
                    AgY26w7q3++;
                }
            }
            fub6RGHx++;
        }
    }
    for (fub6RGHx = 1; tar23s > fub6RGHx; fub6RGHx++) {
        AgY26w7q3 = fub6RGHx;
        while (col + fub6RGHx > AgY26w7q3) {
            if (AgY26w7q3 < tar23s)
                cout << xJYcvq1op[AgY26w7q3][col + fub6RGHx - AgY26w7q3 -1] << endl;
            AgY26w7q3++;
        }
    }
    return 0;
}

