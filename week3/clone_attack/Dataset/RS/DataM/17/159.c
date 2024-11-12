char l5xMezqXRY [(461 - 360)], qNKSOkC [101];
int o0P1fkZ4i;
void  vFKOpT7kbMs (int S6JfbemS);

int main () {
    while (cin.getline (l5xMezqXRY, 101)) {
        o0P1fkZ4i = strlen (l5xMezqXRY);
        {
            int i = 0;
            while (o0P1fkZ4i > i) {
                if (!('(' != l5xMezqXRY[i]))
                    qNKSOkC[i] = '$';
                else if (l5xMezqXRY[i] == ')')
                    qNKSOkC[i] = '?';
                else
                    qNKSOkC[i] = ' ';
                i++;
            };
        }
        vFKOpT7kbMs (1);
        {
            int i = 0;
            while (i < o0P1fkZ4i) {
                cout << l5xMezqXRY[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
        {
            int i = 0;
            while (i < o0P1fkZ4i) {
                cout << qNKSOkC[i];
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

void  vFKOpT7kbMs (int S6JfbemS) {
    int b = S6JfbemS -1;
    if (S6JfbemS == o0P1fkZ4i)
        return;
    if (qNKSOkC[S6JfbemS] == '?') {
        while (qNKSOkC[b] == ' ') {
            if (b == 0) {
                vFKOpT7kbMs (S6JfbemS +1);
                return;
            }
            b--;
        }
        if (qNKSOkC[b] == '?') {
            vFKOpT7kbMs (S6JfbemS +1);
            return;
        }
        qNKSOkC[b] = ' ';
        qNKSOkC[S6JfbemS] = ' ';
        vFKOpT7kbMs (S6JfbemS +1);
    }
    else
        vFKOpT7kbMs (S6JfbemS +1);
}

