int main () {
    char a6diZtL [MAX_LENGTH];
    cin.getline (a6diZtL, MAX_LENGTH);
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
    {
        int q1D8KBL2 = 0;
        while (!(0 == a6diZtL[q1D8KBL2])) {
            if (a6diZtL[q1D8KBL2] == ' ') {
                while (true) {
                    q1D8KBL2 = q1D8KBL2 + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (a6diZtL[q1D8KBL2] != ' ') {
                        cout << ' ';
                        break;
                    };
                };
            }
            cout << a6diZtL[q1D8KBL2];
            q1D8KBL2++;
        };
    }
    return 0;
}

