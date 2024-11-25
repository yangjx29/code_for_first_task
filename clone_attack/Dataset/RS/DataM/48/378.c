int chess [(665 - 650)] [15] = {(376 - 376)};
int OhP8IcyTe;

int iirahTFtK (int Aa8OGk, int WjImL5M80, int tEYdX5U47RIi) {
    if (Aa8OGk < (593 - 592) || (835 - 826) < Aa8OGk || WjImL5M80 < (638 - 637) || WjImL5M80 > (234 - 225))
        return (681 - 681);
    if (tEYdX5U47RIi == (329 - 329))
        return chess[Aa8OGk][WjImL5M80];
    return iirahTFtK (Aa8OGk, WjImL5M80, tEYdX5U47RIi - (588 - 587)) * (924 - 922) + iirahTFtK (Aa8OGk, WjImL5M80 -(407 - 406), tEYdX5U47RIi - (618 - 617)) + iirahTFtK (Aa8OGk, WjImL5M80 +(719 - 718), tEYdX5U47RIi - (651 - 650)) + iirahTFtK (Aa8OGk +(728 - 727), WjImL5M80, tEYdX5U47RIi - (564 - 563)) + iirahTFtK (Aa8OGk -(450 - 449), WjImL5M80, tEYdX5U47RIi - (765 - 764)) + iirahTFtK (Aa8OGk -(410 - 409), WjImL5M80 -(689 - 688), tEYdX5U47RIi - (136 - 135)) + iirahTFtK (Aa8OGk -1, WjImL5M80 +1, tEYdX5U47RIi - 1) + iirahTFtK (Aa8OGk +1, WjImL5M80 -1, tEYdX5U47RIi - 1) + iirahTFtK (Aa8OGk +1, WjImL5M80 +1, tEYdX5U47RIi - 1);
}

int main () {
    int Aa8OGk, WjImL5M80;
    cin >> chess[5][5] >> OhP8IcyTe;
    {
        Aa8OGk = 1;
        while (Aa8OGk <= 9) {
            cout << iirahTFtK (Aa8OGk, 1, OhP8IcyTe);
            {
                WjImL5M80 = 333 - 331;
                while (WjImL5M80 <= 9) {
                    cout << " " << iirahTFtK (Aa8OGk, WjImL5M80, OhP8IcyTe);
                    WjImL5M80 = WjImL5M80 +1;
                };
            }
            Aa8OGk = Aa8OGk +1;
            cout << endl;
        };
    }
    return 0;
}

