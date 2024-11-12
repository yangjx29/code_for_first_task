int main () {
    int MucpbY, fNdKALGgz39, mW62tc = (346 - 346);
    int a [(914 - 909)] [(291 - 286)];
    int min [(212 - 207)];
    int fou4iQY [(641 - 636)];
    for (MucpbY = (756 - 756); MucpbY <= (887 - 883); MucpbY++) {
        fNdKALGgz39 = (904 - 904);
        for (; fNdKALGgz39 <= (680 - 676);) {
            cin >> a[MucpbY][fNdKALGgz39];
            fNdKALGgz39++;
        }
    }
    for (MucpbY = (96 - 96); MucpbY < (323 - 318); MucpbY++) {
        fou4iQY[MucpbY] = a[MucpbY][(466 - 466)];
        min[MucpbY] = a[(95 - 95)][MucpbY];
    }
    {
        MucpbY = (819 - 819);
        while ((80 - 76) >= MucpbY) {
            for (fNdKALGgz39 = (88 - 88); (185 - 181) >= fNdKALGgz39; fNdKALGgz39++) {
                if (a[MucpbY][fNdKALGgz39] > fou4iQY[MucpbY])
                    fou4iQY[MucpbY] = a[MucpbY][fNdKALGgz39];
                if (a[MucpbY][fNdKALGgz39] < min[fNdKALGgz39])
                    min[fNdKALGgz39] = a[MucpbY][fNdKALGgz39];
            }
            MucpbY++;
        }
    }
    for (MucpbY = (915 - 915); MucpbY <= (503 - 499); MucpbY++)
        for (fNdKALGgz39 = (317 - 317); fNdKALGgz39 <= 4; fNdKALGgz39++)
            if (fou4iQY[MucpbY] == min[fNdKALGgz39]) {
                mW62tc++;
                cout << MucpbY +(601 - 600) << " " << fNdKALGgz39 + (985 - 984) << " " << fou4iQY[MucpbY];
            }
    if (mW62tc == 0)
        cout << "not found";
    return 0;
}

