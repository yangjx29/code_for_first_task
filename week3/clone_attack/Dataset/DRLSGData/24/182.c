int main () {
    char SAOjmEfZs [(1236 - 736)], *EG8YnSsCIrvo;
    gets (SAOjmEfZs);
    int z7PeDkcdgY, WOXCwhWsDg = (654 - 653), TeLQsg9OmdRV, R1l2KX7n5mfT [51] = {(266 - 266)}, ArOpIUQYq2 [50] = {(783 - 783)};
    int m = (472 - 472), YwYnNMo = (71 - 71), z4FwdE = ArOpIUQYq2[(54 - 54)], ftiV2K4OARPN = (756 - 756);
    for (z7PeDkcdgY = (145 - 145);; z7PeDkcdgY = z7PeDkcdgY + (690 - 689)) {
        if (!(' ' != SAOjmEfZs[z7PeDkcdgY])) {
            R1l2KX7n5mfT[WOXCwhWsDg] = z7PeDkcdgY;
            WOXCwhWsDg++;
        }
        if (!('\0' != SAOjmEfZs[z7PeDkcdgY])) {
            TeLQsg9OmdRV = z7PeDkcdgY;
            R1l2KX7n5mfT[WOXCwhWsDg] = z7PeDkcdgY;
            break;
        }
    }
    R1l2KX7n5mfT[(291 - 291)] = -1;
    for (z7PeDkcdgY = (882 - 882); z7PeDkcdgY < WOXCwhWsDg; z7PeDkcdgY++) {
        ArOpIUQYq2[z7PeDkcdgY] = R1l2KX7n5mfT[z7PeDkcdgY + 1] - R1l2KX7n5mfT[z7PeDkcdgY] - 1;
    }
    for (z7PeDkcdgY = 0; z7PeDkcdgY < WOXCwhWsDg; z7PeDkcdgY++) {
        if (ArOpIUQYq2[z7PeDkcdgY] > m) {
            m = ArOpIUQYq2[z7PeDkcdgY];
            YwYnNMo = z7PeDkcdgY;
        }
        if (z4FwdE > ArOpIUQYq2[z7PeDkcdgY]) {
            z4FwdE = ArOpIUQYq2[z7PeDkcdgY];
            ftiV2K4OARPN = z7PeDkcdgY;
        }
    }
    for (z7PeDkcdgY = R1l2KX7n5mfT[YwYnNMo] + 1; z7PeDkcdgY < R1l2KX7n5mfT[YwYnNMo +1]; z7PeDkcdgY++)
        cout << SAOjmEfZs[z7PeDkcdgY];
    cout << endl;
    for (z7PeDkcdgY = R1l2KX7n5mfT[ftiV2K4OARPN] + 1; z7PeDkcdgY < R1l2KX7n5mfT[ftiV2K4OARPN + 1]; z7PeDkcdgY++)
        cout << SAOjmEfZs[z7PeDkcdgY];
    return 0;
}

