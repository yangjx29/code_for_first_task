int sv709cPsXU, yv3OnmxUpE, hIBqLD, num;
int number (int, int);

int main () {
    cin >> yv3OnmxUpE >> hIBqLD;
    num = 1;
    sv709cPsXU = number (yv3OnmxUpE, num) * yv3OnmxUpE + hIBqLD;
    cout << sv709cPsXU << endl;
    return 0;
}

int number (int x, int y) {
    if (x == 1) {
        return y;
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
        };
    }
    if ((y * yv3OnmxUpE + hIBqLD) % (yv3OnmxUpE - 1) == 0) {
        return number (x - 1, (y * yv3OnmxUpE + hIBqLD) / (yv3OnmxUpE - 1));
    }
    else {
        if ((num * yv3OnmxUpE + hIBqLD) % (yv3OnmxUpE - 1) == 0) {
            num = num + yv3OnmxUpE - 1;
        }
        else {
            num = num + 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return number (yv3OnmxUpE, num);
    };
}

