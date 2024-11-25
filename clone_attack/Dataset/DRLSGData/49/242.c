int main () {
    int GJU5OT;
    char c2CfGH [(1456 - 954)] = {0};
    int f;
    int lC6uY39;
    int AcP5dT2IheGt;
    int j5pWcQ19;
    cin >> c2CfGH;
    GJU5OT = strlen (c2CfGH);
    {
        lC6uY39 = (1511 - 674) - (1079 - 243);
        for (; lC6uY39 >= 0;) {
            c2CfGH[lC6uY39 + (1000 - 999)] = c2CfGH[lC6uY39];
            lC6uY39--;
        }
    }
    c2CfGH[0] = '\0';
    {
        AcP5dT2IheGt = 2;
        for (; AcP5dT2IheGt <= GJU5OT;) {
            for (j5pWcQ19 = (355 - 354); j5pWcQ19 <= GJU5OT -AcP5dT2IheGt+1; j5pWcQ19++) {
                f = 1;
                for (lC6uY39 = j5pWcQ19; lC6uY39 <= j5pWcQ19 + AcP5dT2IheGt -1; lC6uY39++) {
                    if (c2CfGH[lC6uY39] != c2CfGH[j5pWcQ19 + AcP5dT2IheGt -1 - lC6uY39 + j5pWcQ19]) {
                        f = 0;
                        break;
                    }
                }
                if (f) {
                    {
                        lC6uY39 = j5pWcQ19;
                        for (; lC6uY39 <= j5pWcQ19 + AcP5dT2IheGt -1;) {
                            cout << c2CfGH[lC6uY39];
                            lC6uY39++;
                        }
                    }
                    cout << endl;
                }
            }
            AcP5dT2IheGt++;
        }
    }
    return 0;
}

