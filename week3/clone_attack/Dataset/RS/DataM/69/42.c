int main () {
    int J5doR9E, bR9G0ivF5f, nF7auRl4q, HrMGP8VBi, OXjyNwe, NYphfAb = 0, vdfYwZpV = -(357 - 356);
    char FwyQIgr [255], kL6kUJSs [255], iRLTpeC9U [255], pGg2KV;
    for (J5doR9E = 0; 255 > J5doR9E; J5doR9E = J5doR9E +1) {
        FwyQIgr[J5doR9E] = 'a';
        kL6kUJSs[J5doR9E] = 'a';
        iRLTpeC9U[J5doR9E] = 'a';
    }
    scanf ("%s\n%s", FwyQIgr, kL6kUJSs);
    bR9G0ivF5f = strlen (FwyQIgr);
    for (J5doR9E = 0; bR9G0ivF5f / 2 > J5doR9E; J5doR9E = J5doR9E +1) {
        pGg2KV = FwyQIgr[J5doR9E];
        FwyQIgr[J5doR9E] = FwyQIgr[bR9G0ivF5f - 1 - J5doR9E];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        FwyQIgr[bR9G0ivF5f - 1 - J5doR9E] = pGg2KV;
    }
    nF7auRl4q = strlen (kL6kUJSs);
    for (J5doR9E = 0; nF7auRl4q / 2 > J5doR9E; J5doR9E = J5doR9E +1) {
        pGg2KV = kL6kUJSs[J5doR9E];
        kL6kUJSs[J5doR9E] = kL6kUJSs[nF7auRl4q - 1 - J5doR9E];
        kL6kUJSs[nF7auRl4q - 1 - J5doR9E] = pGg2KV;
    }
    if (nF7auRl4q > bR9G0ivF5f)
        HrMGP8VBi = nF7auRl4q;
    else
        HrMGP8VBi = bR9G0ivF5f;
    for (J5doR9E = 0; HrMGP8VBi > J5doR9E; J5doR9E = J5doR9E +1) {
        if (!('a' != FwyQIgr[J5doR9E]) || !('\0' != FwyQIgr[J5doR9E]))
            FwyQIgr[J5doR9E] = (575 - 527);
        if (!('a' != kL6kUJSs[J5doR9E]) || kL6kUJSs[J5doR9E] == '\0')
            kL6kUJSs[J5doR9E] = 48;
        OXjyNwe = FwyQIgr[J5doR9E] - 48 + kL6kUJSs[J5doR9E] - 48 + NYphfAb;
        if (10 <= OXjyNwe) {
            iRLTpeC9U[J5doR9E] = OXjyNwe -10 + 48;
            NYphfAb = 1;
        }
        else {
            iRLTpeC9U[J5doR9E] = OXjyNwe +48;
            NYphfAb = 0;
        };
    }
    if (NYphfAb == 1) {
        iRLTpeC9U[HrMGP8VBi] = '1';
        HrMGP8VBi = HrMGP8VBi +1;
    }
    for (J5doR9E = 250; J5doR9E >= 0; J5doR9E = J5doR9E -1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (iRLTpeC9U[J5doR9E] != '0' && iRLTpeC9U[J5doR9E] != 'a') {
            vdfYwZpV = J5doR9E;
            break;
        };
    }
    if (vdfYwZpV == -1)
        printf ("0");
    else {
        for (J5doR9E = vdfYwZpV; J5doR9E >= 0; J5doR9E = J5doR9E -1)
            printf ("%c", iRLTpeC9U[J5doR9E]);
    }
    return 0;
}

