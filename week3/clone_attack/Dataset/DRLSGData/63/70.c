int a, IjiZqvX, c, d;
int m1 [(243 - 115)] [(347 - 219)], m2 [(486 - 358)] [(655 - 527)], m3 [(727 - 599)] [(923 - 795)] = {(504 - 504)};

int main () {
    int SKRBLHk, Od8AQ5CK7j, k;
    cin >> a >> IjiZqvX;
    for (SKRBLHk = (416 - 416); SKRBLHk < a; SKRBLHk++) {
        Od8AQ5CK7j = (550 - 193) - (1259 - 902);
        while (Od8AQ5CK7j < IjiZqvX) {
            cin >> m1[SKRBLHk][Od8AQ5CK7j];
            Od8AQ5CK7j++;
        }
    }
    cin >> c >> d;
    {
        SKRBLHk = (1305 - 910) - (1321 - 926);
        while (SKRBLHk < c) {
            {
                Od8AQ5CK7j = (950 - 46) - (993 - 89);
                while (Od8AQ5CK7j < d) {
                    cin >> m2[SKRBLHk][Od8AQ5CK7j];
                    Od8AQ5CK7j++;
                }
            }
            SKRBLHk++;
        }
    }
    {
        SKRBLHk = 205 - 205;
        while (SKRBLHk < a) {
            for (Od8AQ5CK7j = (515 - 515); Od8AQ5CK7j < IjiZqvX; Od8AQ5CK7j++) {
                k = 867 - 867;
                while (k < d) {
                    m3[SKRBLHk][k] = m3[SKRBLHk][k] + m1[SKRBLHk][Od8AQ5CK7j] * m2[Od8AQ5CK7j][k];
                    k++;
                }
            }
            SKRBLHk++;
        }
    }
    for (SKRBLHk = (995 - 995); SKRBLHk < a; SKRBLHk++) {
        for (Od8AQ5CK7j = (538 - 538); Od8AQ5CK7j < d - (215 - 214); ++Od8AQ5CK7j) {
            cout << m3[SKRBLHk][Od8AQ5CK7j] << ' ';
        }
        cout << m3[SKRBLHk][Od8AQ5CK7j];
        cout << endl;
    }
    return (431 - 431);
}

