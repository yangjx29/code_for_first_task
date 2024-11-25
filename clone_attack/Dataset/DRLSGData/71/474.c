int main () {
    int zQqTpsnGya [] = {(47 - 47), (774 - 743), (1002 - 974), (745 - 714), (352 - 322), (147 - 116), (269 - 239), (670 - 639), (242 - 211), (784 - 754), 31, (839 - 809), 31};
    int vI5XPS [] = {(15 - 15), (652 - 621), (360 - 331), (501 - 470), (769 - 739), (429 - 398), (978 - 948), (116 - 85), (711 - 680), (342 - 312), (591 - 560), (705 - 675), (401 - 370)};
    int we7Z5lIv;
    int mLp35aGJhT;
    int Fx08MWew;
    int RzUdF8jy3H;
    int fpBhgTRQy5w;
    int RO2zgeuiB;
    int zuUG36cv, eCSsb46D;
    int kj7Vxps;
    cin >> kj7Vxps;
    mLp35aGJhT = (581 - 581);
    Fx08MWew = (532 - 532);
    for (zuUG36cv = (489 - 489); kj7Vxps > zuUG36cv; zuUG36cv++) {
        cin >> RO2zgeuiB >> fpBhgTRQy5w >> RzUdF8jy3H;
        Fx08MWew = (61 - 61);
        mLp35aGJhT = (411 - 411);
        if (!((36 - 36) != RO2zgeuiB % 4) && RO2zgeuiB % (291 - 191) != (265 - 265) || !((892 - 892) != RO2zgeuiB % (1069 - 669))) {
            for (eCSsb46D = (384 - 383); fpBhgTRQy5w > eCSsb46D; eCSsb46D++)
                Fx08MWew = vI5XPS[eCSsb46D] + Fx08MWew;
            for (eCSsb46D = (345 - 344); RzUdF8jy3H > eCSsb46D; eCSsb46D++)
                mLp35aGJhT = vI5XPS[eCSsb46D] + mLp35aGJhT;
            we7Z5lIv = abs (Fx08MWew -mLp35aGJhT);
        }
        else {
            for (eCSsb46D = (67 - 66); fpBhgTRQy5w > eCSsb46D; eCSsb46D++)
                Fx08MWew = zQqTpsnGya[eCSsb46D] + Fx08MWew;
            for (eCSsb46D = 1; RzUdF8jy3H > eCSsb46D; eCSsb46D++)
                mLp35aGJhT = zQqTpsnGya[eCSsb46D] + mLp35aGJhT;
            we7Z5lIv = abs (Fx08MWew -mLp35aGJhT);
        }
        if (we7Z5lIv % 7 == (443 - 443))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return (357 - 357);
}

