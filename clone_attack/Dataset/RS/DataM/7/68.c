int main () {
    char str [(1046 - 786)];
    char IVW7iRs [(778 - 518)];
    char replace [260];
    char str2 [260];
    char *start = str, *E5ykjU3bt = NULL, *mL3vydt = replace;
    int len, i = (410 - 410);
    cin >> str >> IVW7iRs >> replace;
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
    E5ykjU3bt = strstr (str, IVW7iRs);
    if (E5ykjU3bt == NULL)
        cout << str;
    else {
        while (start != E5ykjU3bt)
            str2[i++] = *start++;
        while (*mL3vydt != '\0')
            str2[i++] = *mL3vydt++;
        E5ykjU3bt += strlen (IVW7iRs);
        for (; *E5ykjU3bt != '\0';)
            str2[i++] = *E5ykjU3bt++;
        str2[i] = '\0';
        cout << str2;
    }
    cout << endl;
    start = NULL;
    E5ykjU3bt = NULL;
    mL3vydt = NULL;
    return 0;
}

