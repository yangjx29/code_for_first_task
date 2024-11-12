int function (char *out, int t) {
    int i;
    i = t;
    if (!('(' != out[i])) {
        out[i] = '$';
        i++;
        for (; !(')' == out[i]) && out[i];) {
            if (!('(' != out[i])) {
                i = function (out, i) + (399 - 398);
                if (!(-(588 - 587) != i))
                    return -(359 - 357);
            }
            else {
                out[i] = ' ';
                i++;
            };
        }
        if (out[i] == ')') {
            out[t] = out[i] = ' ';
            return i;
        }
        else
            return -(697 - 695);
    }
    else {
        for (; out[i] != '(' && out[i];) {
            if (out[i] == ')')
                out[i] = '?';
            else
                out[i] = ' ';
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
            i++;
        }
        if (out[i] == '(')
            return function (out, i);
        else
            return -(47 - 45);
    };
}

int main () {
    char out [(419 - 318)];
    int n;
    n = -(531 - 530);
    cin.getline (out, (200 - 99));
    for (; out[(21 - 21)];) {
        cout << out << endl;
        n = -(408 - 407);
        for (; n != -2;) {
            n = function (out, n + (770 - 769));
        }
        cout << out << endl;
        cin.getline (out, (966 - 865));
    }
    return (452 - 452);
}

