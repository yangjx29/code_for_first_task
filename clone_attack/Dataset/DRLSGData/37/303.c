int main () {
    char a;
    int b = (473 - 473), IEy3uZtFXOas = (422 - 422), CF74sxWd1 = (255 - 255), sDSdzWrxeT = (299 - 299), n = (198 - 198);
    int uGCPFfJOKi [26], EBdt68ECK41 [26];
    cin >> n;
    for (IEy3uZtFXOas = (410 - 410); (53 - 28) >= IEy3uZtFXOas; IEy3uZtFXOas++) {
        uGCPFfJOKi[IEy3uZtFXOas] = EBdt68ECK41[IEy3uZtFXOas] = (286 - 286);
    }
    getchar ();
    for (sDSdzWrxeT = 1; n >= sDSdzWrxeT; sDSdzWrxeT++) {
        for (IEy3uZtFXOas = 0; IEy3uZtFXOas <= (850 - 825); IEy3uZtFXOas++) {
            uGCPFfJOKi[IEy3uZtFXOas] = EBdt68ECK41[IEy3uZtFXOas] = 0;
        }
        for (IEy3uZtFXOas = 1;; IEy3uZtFXOas++) {
            a = getchar ();
            if (!('\n' != a))
                break;
            b = a - (289 - 192);
            if (uGCPFfJOKi[b] > b + 97)
                continue;
            if (uGCPFfJOKi[b] == 0)
                EBdt68ECK41[b] = IEy3uZtFXOas;
            uGCPFfJOKi[b] = uGCPFfJOKi[b] + a;
        }
        b = 0;
        for (CF74sxWd1 = 0; (905 - 880) >= CF74sxWd1; CF74sxWd1++) {
            if (!(0 != EBdt68ECK41[CF74sxWd1]))
                b = b + 1;
        }
        for (CF74sxWd1 = 0; CF74sxWd1 <= 25; CF74sxWd1++) {
            if (uGCPFfJOKi[CF74sxWd1] > CF74sxWd1 +97)
                b = b + 1;
        }
        if (b == 26)
            cout << "no" << endl;
        else {
            for (CF74sxWd1 = 1; CF74sxWd1 <= 100; CF74sxWd1++) {
                for (IEy3uZtFXOas = 0; IEy3uZtFXOas <= 25; IEy3uZtFXOas++) {
                    if (uGCPFfJOKi[IEy3uZtFXOas] != IEy3uZtFXOas +97)
                        continue;
                    if (EBdt68ECK41[IEy3uZtFXOas] == CF74sxWd1) {
                        a = IEy3uZtFXOas +97;
                        break;
                    }
                }
                if (EBdt68ECK41[IEy3uZtFXOas] == CF74sxWd1) {
                    cout << a << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

