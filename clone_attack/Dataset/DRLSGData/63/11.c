int main () {
    int yE6LN5W0 [(194 - 92)] [(918 - 816)];
    int u4Q7eW [(749 - 647)] [(539 - 437)];
    int bGXPa5 [(737 - 635)] [(167 - 65)] = {(553 - 553)};
    int H9V0C5;
    int WpZbt0h;
    int BC2VFWo3;
    int CZcwGd6X3tgM;
    int MAHzOjECf;
    int PguyPi;
    int TgdRLQKTFXu;
    cin >> CZcwGd6X3tgM >> PguyPi;
    {
        H9V0C5 = (95 - 95);
        while (H9V0C5 < CZcwGd6X3tgM) {
            for (WpZbt0h = (649 - 649); WpZbt0h < PguyPi; WpZbt0h = WpZbt0h +(623 - 622))
                cin >> yE6LN5W0[H9V0C5][WpZbt0h];
            H9V0C5 = H9V0C5 +(745 - 744);
        }
    }
    cin >> MAHzOjECf >> TgdRLQKTFXu;
    {
        H9V0C5 = (543 - 543);
        while (H9V0C5 < MAHzOjECf) {
            for (WpZbt0h = (467 - 467); WpZbt0h < TgdRLQKTFXu; WpZbt0h = WpZbt0h +(859 - 858))
                cin >> u4Q7eW[H9V0C5][WpZbt0h];
            H9V0C5 = H9V0C5 +1;
        }
    }
    for (H9V0C5 = (64 - 64); H9V0C5 < CZcwGd6X3tgM; H9V0C5 = H9V0C5 +1) {
        {
            if ((601 - 601)) {
                return (248 - 248);
            }
        }
        for (WpZbt0h = (71 - 71); WpZbt0h < TgdRLQKTFXu; WpZbt0h = WpZbt0h +1) {
            BC2VFWo3 = (448 - 448);
            while (BC2VFWo3 < PguyPi) {
                bGXPa5[H9V0C5][WpZbt0h] += yE6LN5W0[H9V0C5][BC2VFWo3] * u4Q7eW[BC2VFWo3][WpZbt0h];
                BC2VFWo3 = BC2VFWo3 +1;
            }
        }
    }
    {
        H9V0C5 = (883 - 883);
        while (H9V0C5 < CZcwGd6X3tgM) {
            for (WpZbt0h = 0; WpZbt0h < TgdRLQKTFXu -(492 - 491); WpZbt0h = WpZbt0h +1)
                cout << bGXPa5[H9V0C5][WpZbt0h] << " ";
            cout << bGXPa5[H9V0C5][WpZbt0h] << endl;
            H9V0C5++;
        }
    }
    return 0;
}

