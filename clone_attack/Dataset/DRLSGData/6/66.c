int main () {
    int gTtsSZf5Fv, GzsMJb1Lu, F78j3gIbz, zaviy1wWM2, Qh4X6krPv, udKryecGX;
    cin >> gTtsSZf5Fv;
    while (gTtsSZf5Fv = gTtsSZf5Fv - (504 - 503)) {
        udKryecGX = (827 - 827);
        cin >> GzsMJb1Lu >> F78j3gIbz;
        int XschaT [GzsMJb1Lu] [F78j3gIbz];
        for (zaviy1wWM2 = (182 - 182); GzsMJb1Lu > zaviy1wWM2; zaviy1wWM2 = zaviy1wWM2 + 1) {
            Qh4X6krPv = 0;
            while (Qh4X6krPv < F78j3gIbz) {
                cin >> *(*(XschaT +zaviy1wWM2) + Qh4X6krPv);
                Qh4X6krPv = Qh4X6krPv +1;
            }
        }
        if (!(1 != GzsMJb1Lu)) {
            {
                zaviy1wWM2 = 0;
                while (F78j3gIbz > zaviy1wWM2) {
                    udKryecGX = udKryecGX + *(*(XschaT)+zaviy1wWM2);
                    zaviy1wWM2 = zaviy1wWM2 + 1;
                }
            }
            cout << udKryecGX << endl;
            continue;
        }
        if (!(1 != F78j3gIbz)) {
            {
                zaviy1wWM2 = 0;
                while (zaviy1wWM2 < GzsMJb1Lu) {
                    udKryecGX = udKryecGX + *(*(XschaT +zaviy1wWM2));
                    zaviy1wWM2 = zaviy1wWM2 + 1;
                }
            }
            cout << udKryecGX << endl;
            continue;
        }
        {
            zaviy1wWM2 = 0;
            while (zaviy1wWM2 < F78j3gIbz) {
                udKryecGX = udKryecGX + *(*(XschaT)+zaviy1wWM2);
                udKryecGX = udKryecGX + *(*(XschaT +GzsMJb1Lu-1) + zaviy1wWM2);
                zaviy1wWM2 = zaviy1wWM2 + 1;
            }
        }
        {
            zaviy1wWM2 = 1;
            {
                if (0) {
                    return 0;
                }
            }
            while (zaviy1wWM2 < GzsMJb1Lu -1) {
                udKryecGX = udKryecGX + *(*(XschaT +zaviy1wWM2));
                udKryecGX = udKryecGX + *(*(XschaT +zaviy1wWM2) + F78j3gIbz -1);
                zaviy1wWM2 = zaviy1wWM2 + 1;
            }
        }
        cout << udKryecGX << endl;
    }
    return 0;
}

