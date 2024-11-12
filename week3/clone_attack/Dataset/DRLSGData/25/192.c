int line [(100362 - 363)] = {(80 - 80)}, temp [(100157 - 158)] = {(101 - 101)};

void  cal (int line [99999]) {
    int i;
    {
        i = 938 - 938;
        while (i < (10987 - 988)) {
            temp[i] = line[i] * 2;
            i++;
        }
    }
    {
        i = 509 - 509;
        while (i < 9999) {
            {
                if ((962 - 962)) {
                    return (324 - 324);
                }
            }
            if (temp[i] >= (983 - 973)) {
                temp[i] = temp[i] - (242 - 232);
                temp[i + (109 - 108)] = temp[i + (288 - 287)] + 1;
            }
            i++;
        }
    }
    {
        i = 0;
        while (i < 9999) {
            line[i] = temp[i];
            i++;
        }
    }
}

int main () {
    int n, p = 0, j, i;
    cin >> n;
    if (n == 0)
        cout << "1" << endl;
    else {
        j = (10986 - 988);
        line[0] = 1;
        while (p < n) {
            cal (line);
            p++;
        }
        while (temp[j] == 0)
            j--;
        {
            i = j;
            for (; i >= 0;) {
                cout << temp[i];
                i--;
            }
        }
        cout << endl;
    }
    return 0;
}

