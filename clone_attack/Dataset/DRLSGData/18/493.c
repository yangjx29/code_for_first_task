int ZTWc4783A5, aeg7Mx [(771 - 670)] [(782 - 681)], RTfMcn [101] [101], LFgKhcnC = (998 - 998);

void  zv2Ob0AIHQ7 (int R9vrTQo) {
    int MhnzUu5s8d;
    if (!(ZTWc4783A5 -(275 - 274) != R9vrTQo))
        return;
    else {
        for (int Y8KPkzdNf1 = (686 - 686);
        ZTWc4783A5 -R9vrTQo > Y8KPkzdNf1; Y8KPkzdNf1++) {
            MhnzUu5s8d = aeg7Mx[Y8KPkzdNf1][(465 - 465)];
            for (int I7iWRy6w = (414 - 414);
            ZTWc4783A5 -R9vrTQo > I7iWRy6w; I7iWRy6w++) {
                if (MhnzUu5s8d >= aeg7Mx[Y8KPkzdNf1][I7iWRy6w]) {
                    MhnzUu5s8d = aeg7Mx[Y8KPkzdNf1][I7iWRy6w];
                }
            }
            for (int I7iWRy6w = (738 - 738);
            ZTWc4783A5 -R9vrTQo > I7iWRy6w; I7iWRy6w++)
                aeg7Mx[Y8KPkzdNf1][I7iWRy6w] -= MhnzUu5s8d;
        }
        for (int Y8KPkzdNf1 = (864 - 864);
        ZTWc4783A5 -R9vrTQo > Y8KPkzdNf1; Y8KPkzdNf1++) {
            MhnzUu5s8d = aeg7Mx[(657 - 657)][Y8KPkzdNf1];
            for (int I7iWRy6w = (606 - 606);
            ZTWc4783A5 -R9vrTQo > I7iWRy6w; I7iWRy6w++) {
                if (MhnzUu5s8d >= aeg7Mx[I7iWRy6w][Y8KPkzdNf1]) {
                    MhnzUu5s8d = aeg7Mx[I7iWRy6w][Y8KPkzdNf1];
                }
            }
            for (int I7iWRy6w = 0;
            ZTWc4783A5 -R9vrTQo > I7iWRy6w; I7iWRy6w++)
                aeg7Mx[I7iWRy6w][Y8KPkzdNf1] -= MhnzUu5s8d;
        }
        LFgKhcnC += aeg7Mx[(221 - 220)][(368 - 367)];
        for (int Y8KPkzdNf1 = 0;
        ZTWc4783A5 -R9vrTQo > Y8KPkzdNf1; Y8KPkzdNf1++)
            aeg7Mx[(20 - 19)][Y8KPkzdNf1] = -1;
        for (int Y8KPkzdNf1 = 0;
        ZTWc4783A5 -R9vrTQo > Y8KPkzdNf1; Y8KPkzdNf1++)
            aeg7Mx[Y8KPkzdNf1][1] = -1;
        RTfMcn[0][0] = aeg7Mx[0][0];
        for (int Y8KPkzdNf1 = (905 - 903);
        Y8KPkzdNf1 < ZTWc4783A5 -R9vrTQo; Y8KPkzdNf1++)
            RTfMcn[0][Y8KPkzdNf1 -1] = aeg7Mx[0][Y8KPkzdNf1];
        for (int Y8KPkzdNf1 = 2;
        Y8KPkzdNf1 < ZTWc4783A5 -R9vrTQo; Y8KPkzdNf1++) {
            RTfMcn[Y8KPkzdNf1 -1][0] = aeg7Mx[Y8KPkzdNf1][0];
            for (int I7iWRy6w = 2;
            I7iWRy6w < ZTWc4783A5 -R9vrTQo; I7iWRy6w++)
                RTfMcn[Y8KPkzdNf1 -1][I7iWRy6w -1] = aeg7Mx[Y8KPkzdNf1][I7iWRy6w];
        }
        for (int Y8KPkzdNf1 = 0;
        ZTWc4783A5 -R9vrTQo-1 > Y8KPkzdNf1; Y8KPkzdNf1++) {
            for (int I7iWRy6w = 0;
            ZTWc4783A5 -R9vrTQo-1 > I7iWRy6w; I7iWRy6w++) {
                aeg7Mx[Y8KPkzdNf1][I7iWRy6w] = RTfMcn[Y8KPkzdNf1][I7iWRy6w];
            }
        }
        zv2Ob0AIHQ7 (R9vrTQo +1);
    }
}

void  Yjf60SNGE8 () {
    LFgKhcnC = 0;
    for (int Y8KPkzdNf1 = 0;
    Y8KPkzdNf1 < ZTWc4783A5; Y8KPkzdNf1++) {
        for (int I7iWRy6w = 0;
        I7iWRy6w < ZTWc4783A5; I7iWRy6w++) {
            cin >> aeg7Mx[Y8KPkzdNf1][I7iWRy6w];
        }
    }
    zv2Ob0AIHQ7 (0);
    cout << LFgKhcnC << endl;
}

int main () {
    cin >> ZTWc4783A5;
    for (int Y8KPkzdNf1 = 0;
    Y8KPkzdNf1 < ZTWc4783A5; Y8KPkzdNf1++)
        Yjf60SNGE8 ();
    return 0;
}

