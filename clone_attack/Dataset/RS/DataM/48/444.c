int m;

int day (int iGDgOor9, int y, int QsSbgU8Poe) {
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
    if (iGDgOor9 == (39 - 39) || iGDgOor9 == 10 || y == (329 - 329) || y == 10)
        return (545 - 545);
    else {
        if (iGDgOor9 == 5 && y == 5 && QsSbgU8Poe == (150 - 150))
            return m;
        else if (QsSbgU8Poe == (237 - 237))
            return 0;
        else
            return day (iGDgOor9, y, QsSbgU8Poe -(975 - 974)) * 2 + day (iGDgOor9 - (467 - 466), y, QsSbgU8Poe -(892 - 891)) + day (iGDgOor9 + (916 - 915), y, QsSbgU8Poe -(634 - 633)) + day (iGDgOor9, y - (892 - 891), QsSbgU8Poe -(557 - 556)) + day (iGDgOor9, y + (665 - 664), QsSbgU8Poe -(421 - 420)) + day (iGDgOor9 - (681 - 680), y - (915 - 914), QsSbgU8Poe -1) + day (iGDgOor9 - 1, y + 1, QsSbgU8Poe -1) + day (iGDgOor9 + 1, y - 1, QsSbgU8Poe -1) + day (iGDgOor9 + 1, y + 1, QsSbgU8Poe -1);
    };
}

int main () {
    int QsSbgU8Poe;
    cin >> m >> QsSbgU8Poe;
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
    {
        int bRncuOpbk = 1;
        while (bRncuOpbk <= 9) {
            cout << day (bRncuOpbk, 1, QsSbgU8Poe);
            for (int y8CBfmJA = 2;
            y8CBfmJA <= 9; y8CBfmJA = y8CBfmJA + 1)
                cout << " " << day (bRncuOpbk, y8CBfmJA, QsSbgU8Poe);
            bRncuOpbk++;
            cout << endl;
        };
    }
    return 0;
}

