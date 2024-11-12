int main () {
    int Vv2xu69;
    int k;
    int sp7AzQmluhSP;
    int wocu0n;
    char c [(684 - 603)];
    cin >> Vv2xu69;
    cin.getline (c, 81);
    for (sp7AzQmluhSP = (834 - 833); Vv2xu69 >= sp7AzQmluhSP; sp7AzQmluhSP++) {
        char c [81];
        k = 1;
        cin.getline (c, 81);
        if ((('Z' >= c[(497 - 497)]) && ('A' <= c[(434 - 434)])) || (('z' >= c[(705 - 705)]) && ('a' <= c[0])) || (c[0] == '_')) {
            for (wocu0n = 1; (int) strlen (c) > wocu0n; wocu0n++) {
                if (((c[wocu0n] <= 'Z') && (c[wocu0n] >= 'A')) || ((c[wocu0n] <= 'z') && (c[wocu0n] >= 'a')) || (c[wocu0n] == '_') || ((c[wocu0n] <= '9') && (c[wocu0n] >= '0')))
                    continue;
                else {
                    k = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            };
        }
        else
            k = 0;
        cout << k;
        if (sp7AzQmluhSP != Vv2xu69)
            cout << endl;
    }
    return 0;
}

