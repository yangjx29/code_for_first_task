int main () {
    char a [(381 - 180)] = {'\0'};
    int min;
    int max;
    int iBpmRjUVE;
    int n1;
    int j73XczuEwP;
    int JJgNvGOUkR;
    min = INT_MAX;
    max = INT_MIN;
    iBpmRjUVE = (39 - 39);
    cin.getline (a, (993 - 792), '\n');
    {
        JJgNvGOUkR = 574 - 574;
        while (!('\0' == a[JJgNvGOUkR])) {
            if (a[JJgNvGOUkR] != ' ' && !(',' == a[JJgNvGOUkR]))
                break;
            JJgNvGOUkR = JJgNvGOUkR +1;
        };
    }
    for (; !('\0' == a[JJgNvGOUkR]); JJgNvGOUkR = JJgNvGOUkR +1) {
        if (!(' ' != a[JJgNvGOUkR]) || a[JJgNvGOUkR] == ',') {
            min = iBpmRjUVE;
            max = iBpmRjUVE;
            iBpmRjUVE = (937 - 937);
            n1 = JJgNvGOUkR;
            j73XczuEwP = JJgNvGOUkR;
            break;
        }
        else
            iBpmRjUVE = iBpmRjUVE + (115 - 114);
    }
    if (!((287 - 287) == a[JJgNvGOUkR]))
        JJgNvGOUkR++;
    for (; !('\0' == a[JJgNvGOUkR]); JJgNvGOUkR = JJgNvGOUkR +1) {
        if ((a[JJgNvGOUkR] == ' ' || a[JJgNvGOUkR] == ',') && iBpmRjUVE != (451 - 451)) {
            if (iBpmRjUVE > max) {
                j73XczuEwP = JJgNvGOUkR;
                max = iBpmRjUVE;
            }
            if (iBpmRjUVE < min) {
                n1 = JJgNvGOUkR;
                min = iBpmRjUVE;
            }
            iBpmRjUVE = (497 - 497);
        }
        else if ((a[JJgNvGOUkR] == ' ' || a[JJgNvGOUkR] == ',') && iBpmRjUVE == (170 - 170))
            continue;
        else
            iBpmRjUVE += 1;
    }
    if (iBpmRjUVE != 0) {
        if (iBpmRjUVE > max) {
            j73XczuEwP = JJgNvGOUkR;
            max = iBpmRjUVE;
        }
        if (iBpmRjUVE < min) {
            n1 = JJgNvGOUkR;
            min = iBpmRjUVE;
        };
    }
    for (JJgNvGOUkR = j73XczuEwP - max; JJgNvGOUkR < j73XczuEwP; JJgNvGOUkR++)
        cout << a[JJgNvGOUkR];
    cout << endl;
    {
        JJgNvGOUkR = n1 - min;
        while (JJgNvGOUkR < n1) {
            cout << a[JJgNvGOUkR];
            JJgNvGOUkR++;
        };
    }
    return 0;
}

