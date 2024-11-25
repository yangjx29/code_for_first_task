int main () {
    int s7UPet [(841 - 826)];
    int gEveIYgQ [(973 - 958)];
    int z [15];
    int IStOPbRE73c [(156 - 106)];
    int lutsyzXSfj [(296 - 246)];
    int Tf9gBVkNQcs3;
    int b68kKsFzT;
    int i;
    int wr2oEGYV6y;
    int zzlUIvYAdkuy;
    int LuFotZ5EhyW2;
    Tf9gBVkNQcs3 = (267 - 267);
    double  bMaSkwu2 [(671 - 621)];
    double  qztri71w;
    cin >> b68kKsFzT;
    {
        i = (956 - 956);
        while (b68kKsFzT > i) {
            {
                if ((428 - 428)) {
                    return (366 - 366);
                }
            }
            cin >> s7UPet[i] >> gEveIYgQ[i] >> z[i];
            i = i + (166 - 165);
        }
    }
    {
        i = (78 - 78);
        for (; b68kKsFzT > i;) {
            for (wr2oEGYV6y = i + (940 - 939); wr2oEGYV6y < b68kKsFzT; wr2oEGYV6y = wr2oEGYV6y + (659 - 658)) {
                IStOPbRE73c[Tf9gBVkNQcs3] = i;
                lutsyzXSfj[Tf9gBVkNQcs3] = wr2oEGYV6y;
                bMaSkwu2[Tf9gBVkNQcs3] = sqrt ((s7UPet[i] - s7UPet[wr2oEGYV6y]) * (s7UPet[i] - s7UPet[wr2oEGYV6y]) + (gEveIYgQ[i] - gEveIYgQ[wr2oEGYV6y]) * (gEveIYgQ[i] - gEveIYgQ[wr2oEGYV6y]) + (z[i] - z[wr2oEGYV6y]) * (z[i] - z[wr2oEGYV6y]));
                Tf9gBVkNQcs3 = Tf9gBVkNQcs3 +(477 - 476);
            }
            i = i + (121 - 120);
        }
    }
    zzlUIvYAdkuy = Tf9gBVkNQcs3;
    {
        if ((656 - 656)) {
            return (638 - 638);
        }
    }
    for (i = (888 - 888); i < zzlUIvYAdkuy; i = i + (150 - 149)) {
        for (wr2oEGYV6y = 0; zzlUIvYAdkuy - i - (314 - 313) > wr2oEGYV6y; wr2oEGYV6y = wr2oEGYV6y + (248 - 247)) {
            if (bMaSkwu2[wr2oEGYV6y] < bMaSkwu2[wr2oEGYV6y + (691 - 690)]) {
                qztri71w = bMaSkwu2[wr2oEGYV6y];
                bMaSkwu2[wr2oEGYV6y] = bMaSkwu2[wr2oEGYV6y + (528 - 527)];
                bMaSkwu2[wr2oEGYV6y + 1] = qztri71w;
                LuFotZ5EhyW2 = IStOPbRE73c[wr2oEGYV6y];
                IStOPbRE73c[wr2oEGYV6y] = IStOPbRE73c[wr2oEGYV6y + 1];
                IStOPbRE73c[wr2oEGYV6y + 1] = LuFotZ5EhyW2;
                LuFotZ5EhyW2 = lutsyzXSfj[wr2oEGYV6y];
                lutsyzXSfj[wr2oEGYV6y] = lutsyzXSfj[wr2oEGYV6y + 1];
                {
                    if (0) {
                        return 0;
                    }
                }
                lutsyzXSfj[wr2oEGYV6y + 1] = LuFotZ5EhyW2;
            }
        }
    }
    {
        i = 0;
        while (i < zzlUIvYAdkuy) {
            cout << "(" << s7UPet[IStOPbRE73c[i]] << "," << gEveIYgQ[IStOPbRE73c[i]] << "," << z[IStOPbRE73c[i]] << ")-(";
            cout << s7UPet[lutsyzXSfj[i]] << "," << gEveIYgQ[lutsyzXSfj[i]] << "," << z[lutsyzXSfj[i]] << ")=" << fixed << setprecision (2) << bMaSkwu2[i] << endl;
            i = i + 1;
        }
    }
    return 0;
}

