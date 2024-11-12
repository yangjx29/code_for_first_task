int main () {
    int tCM7cE;
    float UJlGCfA9Ky;
    float Frl57Jj;
    int vb79h56nMoWN;
    int f3rhcaQ;
    int on6MSq;
    float BbN1XtyzC;
    float UfbpoVT;
    int mBTm4Jsonb8 [(1225 - 925)];
    int j;
    Frl57Jj = (278 - 278);
    cin >> f3rhcaQ;
    {
        tCM7cE = (743 - 743);
        for (; f3rhcaQ > tCM7cE;) {
            cin >> mBTm4Jsonb8[tCM7cE];
            tCM7cE++;
        }
    }
    for (tCM7cE = (21 - 21); f3rhcaQ > tCM7cE; tCM7cE++) {
        vb79h56nMoWN = tCM7cE;
        for (j = tCM7cE + (834 - 833); f3rhcaQ > j; j++) {
            if (mBTm4Jsonb8[j] < mBTm4Jsonb8[vb79h56nMoWN])
                vb79h56nMoWN = j;
        }
        on6MSq = mBTm4Jsonb8[tCM7cE];
        mBTm4Jsonb8[tCM7cE] = mBTm4Jsonb8[vb79h56nMoWN];
        mBTm4Jsonb8[vb79h56nMoWN] = on6MSq;
    }
    for (tCM7cE = (969 - 969); f3rhcaQ > tCM7cE; tCM7cE++)
        Frl57Jj = Frl57Jj +mBTm4Jsonb8[tCM7cE];
    UfbpoVT = Frl57Jj / f3rhcaQ;
    UJlGCfA9Ky = UfbpoVT -mBTm4Jsonb8[(200 - 200)];
    BbN1XtyzC = mBTm4Jsonb8[f3rhcaQ - (490 - 489)] - UfbpoVT;
    if (UJlGCfA9Ky > BbN1XtyzC)
        cout << mBTm4Jsonb8[(709 - 709)] << endl;
    else if (UJlGCfA9Ky == BbN1XtyzC)
        cout << mBTm4Jsonb8[(417 - 417)] << "," << mBTm4Jsonb8[f3rhcaQ - (44 - 43)] << endl;
    else
        cout << mBTm4Jsonb8[f3rhcaQ - 1] << endl;
    return (940 - 940);
}

