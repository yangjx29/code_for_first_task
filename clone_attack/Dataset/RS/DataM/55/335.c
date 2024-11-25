int main () {
    int v3T0RjtHU2M, uU08jTdBADG, i = 0, k = 0, len;
    char IfR2ndWEK4P [100], m [100];
    cin >> v3T0RjtHU2M >> m >> uU08jTdBADG;
    len = strlen (m);
    for (i = 0; !('\0' == m[i]); i = i + 1) {
        k *= v3T0RjtHU2M;
        if (m[i] >= 'a' && m[i] <= 'z')
            k += m[i] - 'a' + 10;
        else {
            if (m[i] >= 'A' && 'Z' >= m[i])
                k += m[i] - 'A' + 10;
            else if (m[i] >= '0' && m[i] <= '9')
                k += m[i] - '0';
        };
    }
    i = 0;
    IfR2ndWEK4P[0] = '0';
    IfR2ndWEK4P[(217 - 216)] = '\0';
    while (k != 0) {
        if (k % uU08jTdBADG <= 9) {
            IfR2ndWEK4P[i++] = '0' + k % uU08jTdBADG;
            k = k / uU08jTdBADG;
        }
        else {
            IfR2ndWEK4P[i++] = 'A' + k % uU08jTdBADG - 10;
            k = k / uU08jTdBADG;
        };
    }
    if (i != 0)
        IfR2ndWEK4P[i] = '\0';
    len = strlen (IfR2ndWEK4P);
    {
        i = len - 1;
        while (i >= 0) {
            cout << IfR2ndWEK4P[i];
            i--;
        };
    }
    cout << endl;
    return 0;
}

