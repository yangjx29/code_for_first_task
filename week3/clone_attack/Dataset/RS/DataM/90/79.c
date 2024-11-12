int EaF36fHpA1i (int Z0Gjcs6DuQn, int czW5UTKiu4) {
    int CkRieD;
    if (Z0Gjcs6DuQn == (369 - 369) || czW5UTKiu4 == 0)
        return 0;
    if (czW5UTKiu4 == (522 - 521) || !(1 != Z0Gjcs6DuQn))
        return 1;
    if (Z0Gjcs6DuQn < czW5UTKiu4)
        return EaF36fHpA1i (Z0Gjcs6DuQn, Z0Gjcs6DuQn);
    if (czW5UTKiu4 == Z0Gjcs6DuQn)
        return EaF36fHpA1i (Z0Gjcs6DuQn, czW5UTKiu4 - 1) + 1;
    if (Z0Gjcs6DuQn > czW5UTKiu4)
        return EaF36fHpA1i (Z0Gjcs6DuQn, czW5UTKiu4 - 1) + EaF36fHpA1i (Z0Gjcs6DuQn -czW5UTKiu4, czW5UTKiu4);
}

int main () {
    int ExKAGNIY;
    int Z0Gjcs6DuQn;
    int czW5UTKiu4;
    int tQcEZWt;
    int rypOsQhw;
    cin >> ExKAGNIY;
    {
        rypOsQhw = 1;
        while (rypOsQhw <= ExKAGNIY) {
            rypOsQhw = rypOsQhw + 1;
            cin >> Z0Gjcs6DuQn >> czW5UTKiu4;
            tQcEZWt = EaF36fHpA1i (Z0Gjcs6DuQn, czW5UTKiu4);
            cout << tQcEZWt << endl;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

