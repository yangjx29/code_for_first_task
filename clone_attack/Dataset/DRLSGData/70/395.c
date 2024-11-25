int main () {
    int UdUgIMvHaD6E;
    int ZORSq6x19rVX;
    int My1gU8;
    double  ZHpU12TXs, x [100], FxTEUJ [100];
    cin >> UdUgIMvHaD6E;
    for (ZORSq6x19rVX = 0; ZORSq6x19rVX < UdUgIMvHaD6E; ZORSq6x19rVX++) {
        cin >> x[ZORSq6x19rVX] >> FxTEUJ[ZORSq6x19rVX];
    }
    ZHpU12TXs = sqrt ((x[1] - x[0]) * (x[1] - x[0]) + (FxTEUJ[1] - FxTEUJ[0]) * (FxTEUJ[1] - FxTEUJ[0]));
    for (ZORSq6x19rVX = 0; ZORSq6x19rVX <= UdUgIMvHaD6E -2; ZORSq6x19rVX++) {
        for (My1gU8 = ZORSq6x19rVX +1; My1gU8 <= UdUgIMvHaD6E -1; My1gU8++) {
            if (sqrt ((x[My1gU8] - x[ZORSq6x19rVX]) * (x[My1gU8] - x[ZORSq6x19rVX]) + (FxTEUJ[My1gU8] - FxTEUJ[ZORSq6x19rVX]) * (FxTEUJ[My1gU8] - FxTEUJ[ZORSq6x19rVX])) > ZHpU12TXs) {
                ZHpU12TXs = sqrt ((x[My1gU8] - x[ZORSq6x19rVX]) * (x[My1gU8] - x[ZORSq6x19rVX]) + (FxTEUJ[My1gU8] - FxTEUJ[ZORSq6x19rVX]) * (FxTEUJ[My1gU8] - FxTEUJ[ZORSq6x19rVX]));
            }
        }
    }
    cout << fixed << setprecision (4) << ZHpU12TXs << endl;
    return 0;
}

