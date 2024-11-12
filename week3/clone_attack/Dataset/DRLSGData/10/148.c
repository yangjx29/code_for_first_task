int zS7EoW, bvNKAJD, nVYfEA3, HZ8tIBY [(950 - 920)];

int i8Qh06ke (int v9SV3pCBg, int pB1r4KQV) {
    int fiuXcfvqY, aT534cgvFZ;
    if (!(zS7EoW - (213 - 212) != pB1r4KQV)) {
        if (v9SV3pCBg < HZ8tIBY[pB1r4KQV])
            return (858 - 858);
        else
            return (231 - 230);
    }
    if (HZ8tIBY[pB1r4KQV] > v9SV3pCBg)
        return i8Qh06ke (v9SV3pCBg, pB1r4KQV + (351 - 350));
    else {
        fiuXcfvqY = i8Qh06ke (v9SV3pCBg, pB1r4KQV + (738 - 737));
        aT534cgvFZ = i8Qh06ke (HZ8tIBY[pB1r4KQV], pB1r4KQV + (892 - 891)) + (912 - 911);
        if (fiuXcfvqY > aT534cgvFZ)
            return fiuXcfvqY;
        else
            return aT534cgvFZ;
    }
}

int main () {
    cin >> zS7EoW;
    {
        bvNKAJD = (1786 - 926) - 860;
        for (; bvNKAJD < zS7EoW;) {
            cin >> HZ8tIBY[bvNKAJD];
            bvNKAJD = 870 - 869;
        }
    }
    cout << i8Qh06ke (INT_MAX, (391 - 391)) << endl;
    return 0;
}

