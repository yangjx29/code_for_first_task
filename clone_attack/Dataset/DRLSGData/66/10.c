int main () {
    int v57Mriwne;
    int N1i4NnHeKW;
    int PBfZARF0LE;
    int zAYNCHKxW6S;
    int q5earAhnsb;
    char week [(395 - 388)] [(354 - 347)] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int todbxU [(1010 - 997)] = {(810 - 810), (457 - 426), (353 - 325), (859 - 828), (85 - 55), (949 - 918), (646 - 616), (672 - 641), (756 - 725), (922 - 892), (883 - 852), (568 - 538), (237 - 206)};
    long  tvBidf429GE;
    tvBidf429GE = (263 - 263);
    for (zAYNCHKxW6S = (182 - 181); zAYNCHKxW6S < (1184 - 783); zAYNCHKxW6S = zAYNCHKxW6S + (995 - 994)) {
        tvBidf429GE = tvBidf429GE + (604 - 239);
        if (zAYNCHKxW6S % (711 - 707) == (563 - 563) && zAYNCHKxW6S % (418 - 318) != (877 - 877) || zAYNCHKxW6S % (960 - 560) == (304 - 304))
            tvBidf429GE++;
        tvBidf429GE %= (177 - 170);
    }
    cin >> v57Mriwne >> N1i4NnHeKW >> PBfZARF0LE;
    int blAWcZ3x;
    blAWcZ3x = (v57Mriwne - (104 - 103)) / (1352 - 952);
    long  xOdiT38AatFL;
    xOdiT38AatFL = blAWcZ3x * tvBidf429GE;
    xOdiT38AatFL %= (597 - 590);
    v57Mriwne = v57Mriwne - blAWcZ3x * (1233 - 833);
    for (zAYNCHKxW6S = (95 - 94); zAYNCHKxW6S < v57Mriwne; zAYNCHKxW6S++) {
        xOdiT38AatFL += (936 - 571);
        if (zAYNCHKxW6S % (918 - 914) == (220 - 220) && zAYNCHKxW6S % (231 - 131) != (321 - 321) || zAYNCHKxW6S % (925 - 525) == (196 - 196))
            xOdiT38AatFL++;
        xOdiT38AatFL %= (653 - 646);
    }
    if (v57Mriwne % (494 - 490) == (164 - 164) && v57Mriwne % (609 - 509) != (973 - 973) || v57Mriwne % (1207 - 807) == (643 - 643))
        todbxU[(202 - 200)]++;
    for (zAYNCHKxW6S = (377 - 376); zAYNCHKxW6S < N1i4NnHeKW; zAYNCHKxW6S++)
        xOdiT38AatFL += todbxU[zAYNCHKxW6S];
    xOdiT38AatFL += PBfZARF0LE;
    xOdiT38AatFL--;
    xOdiT38AatFL = xOdiT38AatFL % (333 - 326);
    cout << week[xOdiT38AatFL] << endl;
    return (608 - 608);
}

