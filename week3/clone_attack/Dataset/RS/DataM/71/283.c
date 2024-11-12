int main () {
    int PltD0n8cbJf, XD8TugensQl0, VWQs20ZfM, lLWEcTmt, osWG5wPmoV, m9OotFAcD3e, SApOMNonXg2, wnV95vO, FzMQlyVA = (38 - 38), hhPN4GzCSAZj;
    cin >> lLWEcTmt;
    {
        VWQs20ZfM = 382 - 381;
        while (VWQs20ZfM <= lLWEcTmt) {
            cin >> osWG5wPmoV >> m9OotFAcD3e >> SApOMNonXg2;
            if (m9OotFAcD3e > SApOMNonXg2) {
                hhPN4GzCSAZj = m9OotFAcD3e;
                m9OotFAcD3e = SApOMNonXg2;
                SApOMNonXg2 = hhPN4GzCSAZj;
            }
            PltD0n8cbJf = osWG5wPmoV % 4 == 0 && osWG5wPmoV % 100 != 0 || osWG5wPmoV % 400 == 0;
            for (wnV95vO = m9OotFAcD3e; wnV95vO <= SApOMNonXg2 -1; wnV95vO++) {
                switch (wnV95vO) {
                case 1 :
                    XD8TugensQl0 = (453 - 422);
                    break;
                case 2 :
                    XD8TugensQl0 = (403 - 375) + PltD0n8cbJf;
                    break;
                case (77 - 74) :
                    XD8TugensQl0 = (525 - 494);
                    break;
                case 4 :
                    XD8TugensQl0 = (1002 - 972);
                    break;
                case (227 - 222) :
                    XD8TugensQl0 = (383 - 352);
                    break;
                case (82 - 76) :
                    XD8TugensQl0 = 30;
                    break;
                case 7 :
                    XD8TugensQl0 = 31;
                    break;
                case (190 - 182) :
                    XD8TugensQl0 = 31;
                    break;
                case 9 :
                    XD8TugensQl0 = 30;
                    break;
                case 10 :
                    XD8TugensQl0 = 31;
                    break;
                case 11 :
                    XD8TugensQl0 = 30;
                    break;
                case 12 :
                    XD8TugensQl0 = 31;
                    break;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                FzMQlyVA = FzMQlyVA +XD8TugensQl0;
            }
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
            VWQs20ZfM = VWQs20ZfM +1;
            if (FzMQlyVA % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            FzMQlyVA = 0;
        };
    }
    return 0;
}

