int yb5V2t;
int s1LOwt [30];
int eCqVYIlwQy = 0;
int UqITMW2VUk3 = 100000;
int Tj2Tbt = 0;

int au3DkdbNs (int a, int d2HL9l) {
    if (a > d2HL9l)
        return 0;
    else
        return 1;
}

void  yvsian (int id) {
    if (id >= yb5V2t) {
        if (Tj2Tbt > eCqVYIlwQy)
            eCqVYIlwQy = Tj2Tbt;
        return;
    }
    if (s1LOwt[id] <= UqITMW2VUk3) {
        int IH6eXcDC7 = UqITMW2VUk3;
        Tj2Tbt++;
        UqITMW2VUk3 = s1LOwt[id];
        yvsian (id + 1);
        UqITMW2VUk3 = IH6eXcDC7;
        Tj2Tbt--;
    }
    yvsian (id + 1);
}

int main () {
    cin >> yb5V2t;
    {
        int W6QU4hpKRZrt = 0;
        while (W6QU4hpKRZrt < yb5V2t) {
            cin >> s1LOwt[W6QU4hpKRZrt];
            W6QU4hpKRZrt = W6QU4hpKRZrt +1;
        };
    }
    yvsian (0);
    cout << eCqVYIlwQy << endl;
    return 0;
}

