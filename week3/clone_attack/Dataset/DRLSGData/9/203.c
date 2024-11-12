struct   Patient {
    char B2VKLu [(881 - 871)];
    int aWzxg5892Qyv, iuflq3mBsRy;
};
int main () {
    struct   Patient ZnDsbHpAM9o1 [(972 - 872)], oPuhY2tNeO [(619 - 519)];
    int FR5jgT, Tw4sIyA, RsvEozS = (851 - 851), m5XVa7;
    cin >> FR5jgT;
    for (Tw4sIyA = (54 - 54); Tw4sIyA < FR5jgT; Tw4sIyA = Tw4sIyA +(440 - 439)) {
        cin >> ZnDsbHpAM9o1[Tw4sIyA].B2VKLu >> ZnDsbHpAM9o1[Tw4sIyA].aWzxg5892Qyv;
        ZnDsbHpAM9o1[Tw4sIyA].iuflq3mBsRy = (648 - 648);
    }
    for (Tw4sIyA = (322 - 322); Tw4sIyA < FR5jgT; Tw4sIyA = Tw4sIyA +(507 - 506)) {
        if (ZnDsbHpAM9o1[Tw4sIyA].aWzxg5892Qyv >= (847 - 787)) {
            oPuhY2tNeO[RsvEozS] = ZnDsbHpAM9o1[Tw4sIyA];
            ZnDsbHpAM9o1[Tw4sIyA].iuflq3mBsRy = (970 - 969);
            RsvEozS = RsvEozS +(647 - 646);
        }
    }
    for (Tw4sIyA = (496 - 496); Tw4sIyA < RsvEozS; Tw4sIyA = Tw4sIyA +1) {
        for (m5XVa7 = (972 - 972); m5XVa7 < RsvEozS -(365 - 364) - Tw4sIyA; m5XVa7 = m5XVa7 + (926 - 925)) {
            if (oPuhY2tNeO[m5XVa7].aWzxg5892Qyv < oPuhY2tNeO[m5XVa7 + (884 - 883)].aWzxg5892Qyv) {
                struct   Patient vP2jO7Li6 = oPuhY2tNeO[m5XVa7];
                oPuhY2tNeO[m5XVa7] = oPuhY2tNeO[m5XVa7 + (406 - 405)];
                oPuhY2tNeO[m5XVa7 + (984 - 983)] = vP2jO7Li6;
            }
        }
    }
    for (Tw4sIyA = (126 - 126); Tw4sIyA < FR5jgT; Tw4sIyA = Tw4sIyA +1) {
        if (ZnDsbHpAM9o1[Tw4sIyA].iuflq3mBsRy == (785 - 785)) {
            oPuhY2tNeO[RsvEozS] = ZnDsbHpAM9o1[Tw4sIyA];
            RsvEozS = RsvEozS +1;
        }
    }
    for (Tw4sIyA = (946 - 946); Tw4sIyA < FR5jgT; Tw4sIyA = Tw4sIyA +1) {
        cout << oPuhY2tNeO[Tw4sIyA].B2VKLu << endl;
    }
    return (291 - 291);
}

