int ablZ5P9 [(964 - 864)] [(613 - 513)];
int CPguwdL (int U6TUNGWK5EpV);

int main () {
    int U6TUNGWK5EpV;
    cin >> U6TUNGWK5EpV;
    for (int lw63m5yTGebA = (972 - 972);
    lw63m5yTGebA < U6TUNGWK5EpV; lw63m5yTGebA = lw63m5yTGebA + (868 - 867)) {
        for (int K28dBmqRAbx = (300 - 300);
        U6TUNGWK5EpV > K28dBmqRAbx; K28dBmqRAbx = K28dBmqRAbx +(939 - 938)) {
            for (int AcJ5sCe6ZvxV = (815 - 815);
            AcJ5sCe6ZvxV < U6TUNGWK5EpV; AcJ5sCe6ZvxV = AcJ5sCe6ZvxV +(804 - 803))
                cin >> ablZ5P9[K28dBmqRAbx][AcJ5sCe6ZvxV];
        }
        cout << CPguwdL (U6TUNGWK5EpV) << endl;
    }
    return (402 - 402);
}

int CPguwdL (int U6TUNGWK5EpV) {
    int OoNV3RL;
    int lw63m5yTGebA;
    int AcJ5sCe6ZvxV;
    int K28dBmqRAbx;
    for (lw63m5yTGebA = (144 - 144); lw63m5yTGebA < U6TUNGWK5EpV; lw63m5yTGebA = lw63m5yTGebA + (375 - 374)) {
        OoNV3RL = ablZ5P9[lw63m5yTGebA][(542 - 542)];
        for (K28dBmqRAbx = (484 - 483); K28dBmqRAbx < U6TUNGWK5EpV; K28dBmqRAbx = K28dBmqRAbx +(860 - 859))
            if (OoNV3RL > ablZ5P9[lw63m5yTGebA][K28dBmqRAbx])
                OoNV3RL = ablZ5P9[lw63m5yTGebA][K28dBmqRAbx];
        for (K28dBmqRAbx = (840 - 840); K28dBmqRAbx < U6TUNGWK5EpV; K28dBmqRAbx = K28dBmqRAbx +(266 - 265))
            ablZ5P9[lw63m5yTGebA][K28dBmqRAbx] -= OoNV3RL;
    }
    for (lw63m5yTGebA = (534 - 534); lw63m5yTGebA < U6TUNGWK5EpV; lw63m5yTGebA++) {
        OoNV3RL = ablZ5P9[(104 - 104)][lw63m5yTGebA];
        for (K28dBmqRAbx = (301 - 300); K28dBmqRAbx < U6TUNGWK5EpV; K28dBmqRAbx = K28dBmqRAbx +(781 - 780))
            if (ablZ5P9[K28dBmqRAbx][lw63m5yTGebA] < OoNV3RL)
                OoNV3RL = ablZ5P9[K28dBmqRAbx][lw63m5yTGebA];
        for (K28dBmqRAbx = (199 - 199); K28dBmqRAbx < U6TUNGWK5EpV; K28dBmqRAbx = K28dBmqRAbx +(723 - 722))
            ablZ5P9[K28dBmqRAbx][lw63m5yTGebA] -= OoNV3RL;
    }
    if (U6TUNGWK5EpV == (550 - 548))
        return ablZ5P9[(970 - 969)][(514 - 513)];
    AcJ5sCe6ZvxV = ablZ5P9[(387 - 386)][(218 - 217)];
    for (lw63m5yTGebA = (488 - 487); U6TUNGWK5EpV -(832 - 831) > lw63m5yTGebA; lw63m5yTGebA++) {
        ablZ5P9[(47 - 47)][lw63m5yTGebA] = ablZ5P9[(428 - 428)][lw63m5yTGebA + (434 - 433)];
        ablZ5P9[lw63m5yTGebA][0] = ablZ5P9[lw63m5yTGebA + (79 - 78)][0];
        for (K28dBmqRAbx = (701 - 700); K28dBmqRAbx < U6TUNGWK5EpV -(897 - 896); K28dBmqRAbx++)
            ablZ5P9[lw63m5yTGebA][K28dBmqRAbx] = ablZ5P9[lw63m5yTGebA + (88 - 87)][K28dBmqRAbx +1];
    }
    return AcJ5sCe6ZvxV +CPguwdL(U6TUNGWK5EpV -1);
}

