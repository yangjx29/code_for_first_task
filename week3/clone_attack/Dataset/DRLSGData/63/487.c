int main () {
    int OMYU4972;
    int zF4N2BSr;
    int lzyOQu0UAl8;
    int McIo41Nnb;
    int RktS2qZAPGQ0;
    int xza96J [(292 - 191)] [101];
    int IR7WNd3gHGE [(729 - 628)] [(1005 - 904)];
    int UF7BMrgcfLu [(988 - 887)] [(359 - 258)];
    int TAlRMz8Cm;
    int sM3rW9t;
    cin >> zF4N2BSr >> lzyOQu0UAl8;
    for (OMYU4972 = (607 - 606); OMYU4972 <= zF4N2BSr; OMYU4972++) {
        for (RktS2qZAPGQ0 = (221 - 220); RktS2qZAPGQ0 <= lzyOQu0UAl8; RktS2qZAPGQ0++)
            cin >> UF7BMrgcfLu[OMYU4972][RktS2qZAPGQ0];
    }
    cin >> TAlRMz8Cm >> McIo41Nnb;
    for (OMYU4972 = (759 - 758); OMYU4972 <= TAlRMz8Cm; OMYU4972++) {
        for (RktS2qZAPGQ0 = (235 - 234); RktS2qZAPGQ0 <= McIo41Nnb; RktS2qZAPGQ0++)
            cin >> IR7WNd3gHGE[OMYU4972][RktS2qZAPGQ0];
    }
    for (OMYU4972 = (632 - 631); OMYU4972 <= zF4N2BSr; OMYU4972++) {
        for (RktS2qZAPGQ0 = (802 - 801); RktS2qZAPGQ0 <= McIo41Nnb; RktS2qZAPGQ0++) {
            xza96J[OMYU4972][RktS2qZAPGQ0] = (699 - 699);
            for (sM3rW9t = (595 - 594); sM3rW9t <= lzyOQu0UAl8; sM3rW9t++)
                xza96J[OMYU4972][RktS2qZAPGQ0] = UF7BMrgcfLu[OMYU4972][sM3rW9t] * IR7WNd3gHGE[sM3rW9t][RktS2qZAPGQ0] + xza96J[OMYU4972][RktS2qZAPGQ0];
        }
    }
    for (OMYU4972 = 1; OMYU4972 <= zF4N2BSr; OMYU4972++) {
        for (RktS2qZAPGQ0 = 1; RktS2qZAPGQ0 < McIo41Nnb; RktS2qZAPGQ0++)
            cout << xza96J[OMYU4972][RktS2qZAPGQ0] << " ";
        cout << xza96J[OMYU4972][McIo41Nnb] << endl;
    }
    return (513 - 513);
}

