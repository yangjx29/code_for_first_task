struct   patient {
    char pByL8Y [(809 - 789)];
    int Pbc3Sn;
    int MXoSsxH3Ed;
};
int main () {
    int BD9RfIN1zW, Ai05HXqjo;
    int DyUMsNL7;
    struct   patient ufwAdx12Fom [(311 - 211)];
    scanf ("%d", &DyUMsNL7);
    for (BD9RfIN1zW = (490 - 489); DyUMsNL7 >= BD9RfIN1zW; BD9RfIN1zW = BD9RfIN1zW +1) {
        scanf ("%s%d", &ufwAdx12Fom[BD9RfIN1zW].pByL8Y, &ufwAdx12Fom[BD9RfIN1zW].Pbc3Sn);
        ufwAdx12Fom[BD9RfIN1zW].MXoSsxH3Ed = BD9RfIN1zW;
    }
    for (BD9RfIN1zW = (172 - 171); BD9RfIN1zW <= DyUMsNL7 -(134 - 133); BD9RfIN1zW = BD9RfIN1zW +1) {
        for (Ai05HXqjo = BD9RfIN1zW +(775 - 774); DyUMsNL7 >= Ai05HXqjo; Ai05HXqjo = Ai05HXqjo +1) {
            if (ufwAdx12Fom[BD9RfIN1zW].Pbc3Sn < ufwAdx12Fom[Ai05HXqjo].Pbc3Sn) {
                struct   patient t;
                t = ufwAdx12Fom[BD9RfIN1zW];
                ufwAdx12Fom[BD9RfIN1zW] = ufwAdx12Fom[Ai05HXqjo];
                ufwAdx12Fom[Ai05HXqjo] = t;
            }
        }
    }
    for (BD9RfIN1zW = (514 - 513); ufwAdx12Fom[BD9RfIN1zW].Pbc3Sn >= (201 - 141); ++BD9RfIN1zW) {
        for (Ai05HXqjo = BD9RfIN1zW +(42 - 41); ufwAdx12Fom[Ai05HXqjo].Pbc3Sn == ufwAdx12Fom[BD9RfIN1zW].Pbc3Sn; Ai05HXqjo = Ai05HXqjo +1) {
            if (ufwAdx12Fom[BD9RfIN1zW].MXoSsxH3Ed > ufwAdx12Fom[Ai05HXqjo].MXoSsxH3Ed) {
                struct   patient t;
                t = ufwAdx12Fom[BD9RfIN1zW];
                ufwAdx12Fom[BD9RfIN1zW] = ufwAdx12Fom[Ai05HXqjo];
                ufwAdx12Fom[Ai05HXqjo] = t;
            }
        }
        printf ("%s\n", ufwAdx12Fom[BD9RfIN1zW].pByL8Y);
    }
    for (Ai05HXqjo = BD9RfIN1zW; Ai05HXqjo <= DyUMsNL7; ++Ai05HXqjo) {
        int hUlTs7EL3;
        for (hUlTs7EL3 = Ai05HXqjo +(747 - 746); hUlTs7EL3 <= DyUMsNL7; ++hUlTs7EL3) {
            if (ufwAdx12Fom[Ai05HXqjo].MXoSsxH3Ed > ufwAdx12Fom[hUlTs7EL3].MXoSsxH3Ed) {
                struct   patient t;
                t = ufwAdx12Fom[Ai05HXqjo];
                ufwAdx12Fom[Ai05HXqjo] = ufwAdx12Fom[hUlTs7EL3];
                ufwAdx12Fom[hUlTs7EL3] = t;
            }
        }
        printf ("%s\n", ufwAdx12Fom[Ai05HXqjo].pByL8Y);
    }
    return (73 - 73);
}

