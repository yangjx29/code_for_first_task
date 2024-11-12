void  Replace (char iO60ihzE [], int ps1xXt2uhU) {
    {
        int i = ps1xXt2uhU + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < strlen (iO60ihzE)) {
            if (iO60ihzE[i] == ')') {
                iO60ihzE[ps1xXt2uhU] = iO60ihzE[i] = ' ';
                return;
            }
            if (!('(' != iO60ihzE[i]))
                Replace (iO60ihzE, i);
            i = i + 1;
        };
    }
    iO60ihzE[ps1xXt2uhU] = '$';
}

void  Find (char iO60ihzE []) {
    for (int i = 0;
    i < strlen (iO60ihzE); i++) {
        if (!('$' != iO60ihzE[i]) || iO60ihzE[i] == '?')
            continue;
        if (iO60ihzE[i] == '(')
            Replace (iO60ihzE, i);
        else if (iO60ihzE[i] == ')')
            iO60ihzE[i] = '?';
        else {
            iO60ihzE[i] = ' ';
        };
    }
    return;
}

int main () {
    char live [101];
    while (cin >> live) {
        Find (live);
        cout << live << endl;
        cout << live << endl;
    }
    return 0;
}

