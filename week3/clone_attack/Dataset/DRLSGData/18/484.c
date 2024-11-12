int qxUhHw7 [(498 - 398)] [100] = {(552 - 552)};

void  EUXVLkv (int uWdbRG) {
    int t8LzNY4hGiUQ, OGBJktO, u2kANHZb8, mCST7Ut, H5VrspEjAnZ = (947 - 947);
    for (t8LzNY4hGiUQ = (765 - 765); uWdbRG > t8LzNY4hGiUQ; t8LzNY4hGiUQ = t8LzNY4hGiUQ + (913 - 912)) {
        for (OGBJktO = (982 - 982); OGBJktO < uWdbRG; OGBJktO = OGBJktO +(465 - 464)) {
            cin >> qxUhHw7[t8LzNY4hGiUQ][OGBJktO];
        };
    }
    for (t8LzNY4hGiUQ = uWdbRG; (960 - 959) < t8LzNY4hGiUQ; t8LzNY4hGiUQ = t8LzNY4hGiUQ - (498 - 497)) {
        for (OGBJktO = (515 - 515); t8LzNY4hGiUQ > OGBJktO; OGBJktO = OGBJktO +(549 - 548)) {
            mCST7Ut = qxUhHw7[OGBJktO][(461 - 461)];
            for (u2kANHZb8 = (786 - 786); t8LzNY4hGiUQ > u2kANHZb8; u2kANHZb8 = u2kANHZb8 + (708 - 707)) {
                if (mCST7Ut > qxUhHw7[OGBJktO][u2kANHZb8])
                    mCST7Ut = qxUhHw7[OGBJktO][u2kANHZb8];
            }
            for (u2kANHZb8 = (977 - 977); t8LzNY4hGiUQ > u2kANHZb8; u2kANHZb8 = u2kANHZb8 + (343 - 342)) {
                qxUhHw7[OGBJktO][u2kANHZb8] = qxUhHw7[OGBJktO][u2kANHZb8] - mCST7Ut;
            };
        }
        for (OGBJktO = (943 - 943); t8LzNY4hGiUQ > OGBJktO; OGBJktO = OGBJktO +(413 - 412)) {
            mCST7Ut = qxUhHw7[(524 - 524)][OGBJktO];
            for (u2kANHZb8 = (297 - 297); t8LzNY4hGiUQ > u2kANHZb8; u2kANHZb8 = u2kANHZb8 + (968 - 967)) {
                if (mCST7Ut > qxUhHw7[u2kANHZb8][OGBJktO])
                    mCST7Ut = qxUhHw7[u2kANHZb8][OGBJktO];
            }
            for (u2kANHZb8 = (534 - 534); t8LzNY4hGiUQ > u2kANHZb8; u2kANHZb8 = u2kANHZb8 + (596 - 595)) {
                qxUhHw7[u2kANHZb8][OGBJktO] = qxUhHw7[u2kANHZb8][OGBJktO] - mCST7Ut;
            };
        }
        H5VrspEjAnZ = H5VrspEjAnZ +qxUhHw7[(107 - 106)][(854 - 853)];
        for (OGBJktO = (353 - 353); t8LzNY4hGiUQ > OGBJktO; OGBJktO = OGBJktO +1) {
            for (u2kANHZb8 = 0; t8LzNY4hGiUQ > u2kANHZb8; u2kANHZb8++) {
                if (!(0 != OGBJktO) && (673 - 672) < u2kANHZb8)
                    qxUhHw7[OGBJktO][u2kANHZb8 - (736 - 735)] = qxUhHw7[OGBJktO][u2kANHZb8];
                if (!(0 != u2kANHZb8) && OGBJktO > 1)
                    qxUhHw7[OGBJktO -1][u2kANHZb8] = qxUhHw7[OGBJktO][u2kANHZb8];
                if (OGBJktO > 1 && u2kANHZb8 > 1)
                    qxUhHw7[OGBJktO -1][u2kANHZb8 - 1] = qxUhHw7[OGBJktO][u2kANHZb8];
            };
        };
    }
    cout << H5VrspEjAnZ << endl;
}

int main () {
    int uWdbRG, t8LzNY4hGiUQ;
    cin >> uWdbRG;
    for (t8LzNY4hGiUQ = 1; t8LzNY4hGiUQ <= uWdbRG; t8LzNY4hGiUQ = t8LzNY4hGiUQ + 1) {
        EUXVLkv (uWdbRG);
    }
    return 0;
}

