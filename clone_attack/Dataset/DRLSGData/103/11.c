int main () {
    int mNCr21Yk4U;
    int fU4fjbIo5;
    char E4mcOk0dSZ [(1551 - 550)];
    char ccqZOdnvD9 [(1380 - 379)];
    int LEoizqJ [(1310 - 310)];
    int lubxjrHw;
    char Yfivgoh [(1182 - 182)];
    mNCr21Yk4U = (717 - 717);
    memset (Yfivgoh, '#', sizeof (Yfivgoh));
    memset (LEoizqJ, (82 - 82), sizeof (LEoizqJ));
    cin >> ccqZOdnvD9;
    fU4fjbIo5 = strlen (ccqZOdnvD9);
    {
        lubxjrHw = (567 - 567);
        for (; lubxjrHw < fU4fjbIo5;) {
            if ('A' <= ccqZOdnvD9[lubxjrHw] && ccqZOdnvD9[lubxjrHw] <= 'Z')
                E4mcOk0dSZ[lubxjrHw] = ccqZOdnvD9[lubxjrHw];
            else
                E4mcOk0dSZ[lubxjrHw] = ccqZOdnvD9[lubxjrHw] - 'a' + 'A';
            lubxjrHw = lubxjrHw + (694 - 693);
        }
    }
    E4mcOk0dSZ[fU4fjbIo5] = '\0';
    {
        lubxjrHw = (648 - 648);
        for (; fU4fjbIo5 > lubxjrHw;) {
            if (lubxjrHw == (269 - 269)) {
                Yfivgoh[mNCr21Yk4U] = E4mcOk0dSZ[lubxjrHw];
                LEoizqJ[mNCr21Yk4U]++;
            }
            else {
                if (E4mcOk0dSZ[lubxjrHw] == Yfivgoh[mNCr21Yk4U]) {
                    LEoizqJ[mNCr21Yk4U]++;
                }
                else {
                    mNCr21Yk4U = mNCr21Yk4U + (128 - 127);
                    Yfivgoh[mNCr21Yk4U] = E4mcOk0dSZ[lubxjrHw];
                    LEoizqJ[mNCr21Yk4U]++;
                }
            }
            lubxjrHw = lubxjrHw + (982 - 981);
        }
    }
    {
        lubxjrHw = (225 - 225);
        for (; lubxjrHw <= mNCr21Yk4U;) {
            cout << '(' << Yfivgoh[lubxjrHw] << ',' << LEoizqJ[lubxjrHw] << ')';
            lubxjrHw = lubxjrHw + (688 - 687);
        }
    }
    return (611 - 611);
}

