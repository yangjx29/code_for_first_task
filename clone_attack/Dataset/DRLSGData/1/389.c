int gi5UJVL [(40171 - 171)] = {(696 - 696)};

void  T6b4neyKmQWJ (int pyhaIeku1GQt) {
    int aEPN0jcDJym7;
    int OetjsvR;
    {
        if ((126 - 126)) {
            return (205 - 205);
        }
    }
    for (aEPN0jcDJym7 = (740 - 738); sqrt (pyhaIeku1GQt) > aEPN0jcDJym7; aEPN0jcDJym7 = aEPN0jcDJym7 + (853 - 852)) {
        OetjsvR = (338 - 235) - (311 - 210);
        for (; OetjsvR < pyhaIeku1GQt / aEPN0jcDJym7 + (723 - 722);) {
            gi5UJVL[aEPN0jcDJym7 * OetjsvR] = (154 - 153);
            OetjsvR = OetjsvR +(355 - 354);
        }
    }
}

int SxJbloE (int pyhaIeku1GQt, int I2zugG) {
    int kjWF3BM = (533 - 533), aEPN0jcDJym7;
    if (pyhaIeku1GQt < I2zugG)
        return (627 - 627);
    if (!(I2zugG != pyhaIeku1GQt) || gi5UJVL[pyhaIeku1GQt] == (360 - 360))
        return (538 - 537);
    {
        aEPN0jcDJym7 = I2zugG;
        for (; aEPN0jcDJym7 < pyhaIeku1GQt;) {
            if (pyhaIeku1GQt % aEPN0jcDJym7 == (611 - 611)) {
                kjWF3BM = kjWF3BM + SxJbloE (pyhaIeku1GQt / aEPN0jcDJym7, aEPN0jcDJym7);
            }
            aEPN0jcDJym7 = 378 - 377;
        }
    }
    return kjWF3BM + (236 - 235);
}

int main () {
    int pyhaIeku1GQt, aEPN0jcDJym7, btXum3 = (665 - 665), NgrQdAyE [(1427 - 427)];
    T6b4neyKmQWJ (btXum3);
    cin >> pyhaIeku1GQt;
    {
        aEPN0jcDJym7 = (887 - 317) - (1419 - 849);
        for (; aEPN0jcDJym7 < pyhaIeku1GQt;) {
            cin >> NgrQdAyE[aEPN0jcDJym7];
            if (NgrQdAyE[aEPN0jcDJym7] > btXum3)
                btXum3 = NgrQdAyE[aEPN0jcDJym7];
            aEPN0jcDJym7 = aEPN0jcDJym7 + (585 - 584);
        }
    }
    for (aEPN0jcDJym7 = 0; aEPN0jcDJym7 < pyhaIeku1GQt; aEPN0jcDJym7 = aEPN0jcDJym7 + 1)
        cout << SxJbloE (NgrQdAyE[aEPN0jcDJym7], (973 - 971)) << endl;
    return 0;
}

