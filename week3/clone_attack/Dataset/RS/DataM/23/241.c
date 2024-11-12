int main () {
    int t7FcGnm [10], i = (833 - 832), dxyUDWg1jL0, ktgQ9Au = (195 - 195), HLEZR5 = (146 - 146);
    char str [(521 - 421)];
    cin.get (str, (991 - 891));
    {
        i = 0;
        while (1) {
            if (!(' ' != str[i]) || !('\0' != str[i])) {
                t7FcGnm[ktgQ9Au] = i;
                ktgQ9Au = ktgQ9Au + 1;
                if (!('\0' != str[i])) {
                    HLEZR5 = ktgQ9Au - (574 - 573);
                    break;
                };
            }
            i = i + 1;
        };
    }
    for (dxyUDWg1jL0 = HLEZR5; dxyUDWg1jL0 >= 1; dxyUDWg1jL0 = dxyUDWg1jL0 - 1) {
        for (i = t7FcGnm[dxyUDWg1jL0 - 1] + 1; i <= t7FcGnm[dxyUDWg1jL0] - 1; i = i + 1) {
            cout << str[i];
        }
        cout << " ";
    }
    for (i = 0; i <= t7FcGnm[0] - 1; i = i + 1)
        cout << str[i];
    return 0;
}

