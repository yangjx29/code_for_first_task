int year [3001] = {0};
int aGI4VbAD9Mr (int h0UsTxA7F, int ZMFgN4sByTkA, int PdlTtLFjUfYi);

int main () {
    int DnbV1fTv0E, sMiK6knGSFt = 0, TNl8YQzmF, mon1, P0hydakI, zScML4bKDvoF, P2Uqd3pPieY, aHknQxsJZiE;
    cin >> TNl8YQzmF >> mon1 >> P0hydakI >> zScML4bKDvoF >> P2Uqd3pPieY >> aHknQxsJZiE;
    {
        DnbV1fTv0E = 242 - 241;
        while (DnbV1fTv0E <= 3000) {
            if ((DnbV1fTv0E % 4 == 0 && DnbV1fTv0E % 100 != 0) || (!(0 != DnbV1fTv0E % 400)))
                year[DnbV1fTv0E] = 366;
            else
                year[DnbV1fTv0E] = (398 - 33);
            DnbV1fTv0E = DnbV1fTv0E +1;
        };
    }
    if (TNl8YQzmF < zScML4bKDvoF) {
        {
            DnbV1fTv0E = TNl8YQzmF +1;
            while (zScML4bKDvoF > DnbV1fTv0E) {
                sMiK6knGSFt = sMiK6knGSFt + year[DnbV1fTv0E];
                DnbV1fTv0E++;
            };
        }
        sMiK6knGSFt = sMiK6knGSFt + aGI4VbAD9Mr (TNl8YQzmF, mon1, P0hydakI) + year[zScML4bKDvoF] - aGI4VbAD9Mr (zScML4bKDvoF, P2Uqd3pPieY, aHknQxsJZiE);
    }
    else if (TNl8YQzmF == zScML4bKDvoF) {
        sMiK6knGSFt = sMiK6knGSFt + aGI4VbAD9Mr (TNl8YQzmF, mon1, P0hydakI) - aGI4VbAD9Mr (zScML4bKDvoF, P2Uqd3pPieY, aHknQxsJZiE);
    }
    cout << sMiK6knGSFt << endl;
    return 0;
}

int aGI4VbAD9Mr (int h0UsTxA7F, int ZMFgN4sByTkA, int PdlTtLFjUfYi) {
    int mBbh3zmK;
    int DnbV1fTv0E;
    int AvVSb6G [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    mBbh3zmK = 0;
    if (year[h0UsTxA7F] == 365) {
        mBbh3zmK = mBbh3zmK + AvVSb6G[ZMFgN4sByTkA] - PdlTtLFjUfYi;
        {
            DnbV1fTv0E = ZMFgN4sByTkA +1;
            while (DnbV1fTv0E <= 12) {
                mBbh3zmK = mBbh3zmK + AvVSb6G[DnbV1fTv0E];
                DnbV1fTv0E++;
            };
        };
    }
    else {
        AvVSb6G[2] = 29;
        mBbh3zmK = mBbh3zmK + AvVSb6G[ZMFgN4sByTkA] - PdlTtLFjUfYi;
        for (DnbV1fTv0E = ZMFgN4sByTkA +1; DnbV1fTv0E <= 12; DnbV1fTv0E++)
            mBbh3zmK += AvVSb6G[DnbV1fTv0E];
    }
    return mBbh3zmK;
}

