int main () {
    int S8KavfGx7;
    int TwaR2mX;
    int BQM4ED;
    int CtHBhc4Oy9 [(811 - 691)] [(191 - 71)];
    int NfzPCQYsq [(457 - 337)] [(889 - 769)];
    int Z4t9RfQiW0Y [(691 - 571)] [(936 - 816)];
    memset (CtHBhc4Oy9, (908 - 908), sizeof (CtHBhc4Oy9));
    memset (NfzPCQYsq, (880 - 880), sizeof (NfzPCQYsq));
    memset (Z4t9RfQiW0Y, (137 - 137), sizeof (Z4t9RfQiW0Y));
    int mlrd65HBQvcE;
    int lNhx5JVuZK;
    int scpCgauxksn;
    int gilQOwx;
    cin >> mlrd65HBQvcE >> lNhx5JVuZK;
    for (S8KavfGx7 = (891 - 891); mlrd65HBQvcE > S8KavfGx7; S8KavfGx7++) {
        for (TwaR2mX = (673 - 673); TwaR2mX < lNhx5JVuZK; TwaR2mX++) {
            cin >> CtHBhc4Oy9[S8KavfGx7][TwaR2mX];
        }
    }
    cin >> scpCgauxksn >> gilQOwx;
    for (S8KavfGx7 = (191 - 191); S8KavfGx7 < scpCgauxksn; S8KavfGx7++) {
        {
            if ((73 - 73)) {
                return (687 - 687);
            }
        }
        for (TwaR2mX = (823 - 823); gilQOwx > TwaR2mX; TwaR2mX++) {
            cin >> NfzPCQYsq[S8KavfGx7][TwaR2mX];
        }
    }
    for (S8KavfGx7 = (838 - 838); S8KavfGx7 < mlrd65HBQvcE; S8KavfGx7++) {
        for (TwaR2mX = (570 - 570); gilQOwx > TwaR2mX; TwaR2mX++) {
            for (BQM4ED = (853 - 853); BQM4ED < lNhx5JVuZK; BQM4ED++) {
                Z4t9RfQiW0Y[S8KavfGx7][TwaR2mX] = Z4t9RfQiW0Y[S8KavfGx7][TwaR2mX] + CtHBhc4Oy9[S8KavfGx7][BQM4ED] * NfzPCQYsq[BQM4ED][TwaR2mX];
            }
        }
    }
    for (S8KavfGx7 = (134 - 134); S8KavfGx7 < mlrd65HBQvcE; S8KavfGx7++) {
        for (TwaR2mX = (475 - 475); TwaR2mX < gilQOwx - (364 - 363); TwaR2mX++) {
            cout << Z4t9RfQiW0Y[S8KavfGx7][TwaR2mX] << ' ';
        }
        cout << Z4t9RfQiW0Y[S8KavfGx7][TwaR2mX] << endl;
    }
    return 0;
}

