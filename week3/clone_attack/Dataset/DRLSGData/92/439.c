int vw6XYhyePt = 0;
int Jxu5S0v;
int AhK8Jr [1001], NOcVYSIxP [1001];

void  EptbGfzUXjk () {
    int hg4CeY2O;
    if (!(-1 != AhK8Jr[Jxu5S0v -1]))
        return;
    {
        int HGwsmMteyfv = 0;
        while (Jxu5S0v > HGwsmMteyfv) {
            if (AhK8Jr[HGwsmMteyfv] != -1) {
                hg4CeY2O = HGwsmMteyfv;
                break;
            }
            HGwsmMteyfv++;
        };
    }
    if (NOcVYSIxP[hg4CeY2O] < AhK8Jr[hg4CeY2O]) {
        vw6XYhyePt += 200;
        AhK8Jr[hg4CeY2O] = -1;
        NOcVYSIxP[hg4CeY2O] = -1;
        EptbGfzUXjk ();
        return;
    }
    if (NOcVYSIxP[hg4CeY2O] > AhK8Jr[hg4CeY2O]) {
        AhK8Jr[hg4CeY2O] = -1;
        vw6XYhyePt -= 200;
        {
            int HGwsmMteyfv = Jxu5S0v -1;
            for (; HGwsmMteyfv >= 1;) {
                NOcVYSIxP[HGwsmMteyfv] = NOcVYSIxP[HGwsmMteyfv -1];
                HGwsmMteyfv--;
            };
        }
        NOcVYSIxP[0] = -1;
        EptbGfzUXjk ();
        return;
    }
    if (NOcVYSIxP[Jxu5S0v -1] < AhK8Jr[Jxu5S0v -1]) {
        {
            int HGwsmMteyfv = Jxu5S0v -1;
            while (HGwsmMteyfv >= 1) {
                AhK8Jr[HGwsmMteyfv] = AhK8Jr[HGwsmMteyfv -1];
                HGwsmMteyfv--;
            };
        }
        {
            int HGwsmMteyfv = Jxu5S0v -1;
            while (HGwsmMteyfv >= 1) {
                NOcVYSIxP[HGwsmMteyfv] = NOcVYSIxP[HGwsmMteyfv -1];
                HGwsmMteyfv--;
            };
        }
        NOcVYSIxP[0] = -1;
        AhK8Jr[0] = -1;
        vw6XYhyePt += 200;
        EptbGfzUXjk ();
        return;
    }
    if (NOcVYSIxP[Jxu5S0v -1] > AhK8Jr[Jxu5S0v -1]) {
        AhK8Jr[hg4CeY2O] = -1;
        vw6XYhyePt -= 200;
        {
            int HGwsmMteyfv = Jxu5S0v -1;
            while (1 <= HGwsmMteyfv) {
                NOcVYSIxP[HGwsmMteyfv] = NOcVYSIxP[HGwsmMteyfv -1];
                HGwsmMteyfv--;
            };
        }
        NOcVYSIxP[0] = -1;
        EptbGfzUXjk ();
        return;
    }
    if (AhK8Jr[Jxu5S0v -1] == NOcVYSIxP[Jxu5S0v -1]) {
        if (AhK8Jr[hg4CeY2O] < NOcVYSIxP[Jxu5S0v -1])
            vw6XYhyePt -= 200;
        {
            int HGwsmMteyfv = Jxu5S0v -1;
            while (HGwsmMteyfv >= 1) {
                NOcVYSIxP[HGwsmMteyfv] = NOcVYSIxP[HGwsmMteyfv -1];
                HGwsmMteyfv--;
            };
        }
        NOcVYSIxP[0] = -1;
        AhK8Jr[hg4CeY2O] = -1;
        EptbGfzUXjk ();
        return;
    };
}

int main () {
    for (; 1;) {
        cin >> Jxu5S0v;
        if (Jxu5S0v == 0)
            break;
        {
            int HGwsmMteyfv = 0;
            while (HGwsmMteyfv < Jxu5S0v) {
                cin >> AhK8Jr[HGwsmMteyfv];
                HGwsmMteyfv++;
            };
        }
        {
            int HGwsmMteyfv = 0;
            while (HGwsmMteyfv < Jxu5S0v) {
                cin >> NOcVYSIxP[HGwsmMteyfv];
                HGwsmMteyfv++;
            };
        }
        sort (AhK8Jr, AhK8Jr +Jxu5S0v);
        sort (NOcVYSIxP, NOcVYSIxP +Jxu5S0v);
        EptbGfzUXjk ();
        cout << vw6XYhyePt << endl;
        vw6XYhyePt = 0;
    }
    return 0;
}

