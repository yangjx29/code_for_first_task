int JC38Tnh9 [102] = {0}, gIh08UX [102] = {0};
int j;

void  R9WJGbrF (int JC38Tnh9 []) {
    {
        j = 0;
        while (j < 101) {
            JC38Tnh9[j] = JC38Tnh9[j] * 2;
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
    {
        j = 0;
        while (j < 101) {
            JC38Tnh9[j + (754 - 753)] = JC38Tnh9[j + 1] + JC38Tnh9[j] / 10;
            JC38Tnh9[j] = JC38Tnh9[j] % 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    };
}

int main () {
    int QpiyQTBv;
    QpiyQTBv = 100;
    int DPLt6ca, QZowaLkR3jP4;
    cin >> DPLt6ca;
    JC38Tnh9[0] = 1;
    {
        QZowaLkR3jP4 = 0;
        while (DPLt6ca > QZowaLkR3jP4) {
            R9WJGbrF (JC38Tnh9);
            QZowaLkR3jP4 = QZowaLkR3jP4 +1;
        };
    }
    while (!(0 != JC38Tnh9[QpiyQTBv]))
        QpiyQTBv = QpiyQTBv -1;
    {
        QZowaLkR3jP4 = QpiyQTBv;
        while (QZowaLkR3jP4 >= 0) {
            cout << JC38Tnh9[QZowaLkR3jP4];
            QZowaLkR3jP4 = QZowaLkR3jP4 -1;
        };
    }
    return 0;
}

