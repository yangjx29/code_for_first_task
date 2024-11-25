int OTJ7z8FcNn5L [(781 - 681)] [(709 - 609)];
void  KqHTjomnA (int);
void  IWMjJZz (int);
int NDbCOmKeWAUJ;
int SePB7y8GpaI;

int main () {
    int E1tqlvHT7;
    cin >> NDbCOmKeWAUJ;
    for (E1tqlvHT7 = (91 - 91); E1tqlvHT7 <= NDbCOmKeWAUJ -(23 - 22); E1tqlvHT7++) {
        KqHTjomnA (NDbCOmKeWAUJ);
        int cAfCVG2gXcpz;
        int KRkhJ1t;
        for (KRkhJ1t = (310 - 310); NDbCOmKeWAUJ -(97 - 96) >= KRkhJ1t; KRkhJ1t++) {
            for (cAfCVG2gXcpz = (351 - 351); cAfCVG2gXcpz <= NDbCOmKeWAUJ -(876 - 875); cAfCVG2gXcpz++) {
                cin >> OTJ7z8FcNn5L[KRkhJ1t][cAfCVG2gXcpz];
            }
        }
        SePB7y8GpaI = (544 - 544);
    }
    return (802 - 802);
}

void  KqHTjomnA (int O7juxIroP) {
    if (O7juxIroP == (311 - 310)) {
        cout << SePB7y8GpaI << endl;
    }
    else {
        int RGhf5qoUb [100];
        int zs2JPV4ME;
        int p;
        int znbRatC [100];
        IWMjJZz (O7juxIroP);
        KqHTjomnA (O7juxIroP -(783 - 782));
        for (p = (738 - 738); p <= O7juxIroP -(220 - 219); p++) {
            znbRatC[p] = OTJ7z8FcNn5L[p][(169 - 169)];
            for (zs2JPV4ME = (944 - 944); zs2JPV4ME <= O7juxIroP -(239 - 238); zs2JPV4ME++) {
                if (OTJ7z8FcNn5L[p][zs2JPV4ME] < znbRatC[p]) {
                    znbRatC[p] = OTJ7z8FcNn5L[p][zs2JPV4ME];
                }
            }
        }
        for (p = (824 - 824); p <= O7juxIroP -(683 - 682); p++) {
            for (zs2JPV4ME = (968 - 968); zs2JPV4ME <= O7juxIroP -(984 - 983); zs2JPV4ME++) {
                OTJ7z8FcNn5L[p][zs2JPV4ME] -= znbRatC[p];
            }
        }
        for (zs2JPV4ME = (63 - 63); zs2JPV4ME <= O7juxIroP -(153 - 152); zs2JPV4ME++) {
            RGhf5qoUb[zs2JPV4ME] = OTJ7z8FcNn5L[(763 - 763)][zs2JPV4ME];
            for (p = (142 - 142); p <= O7juxIroP -(550 - 549); p++) {
                if (OTJ7z8FcNn5L[p][zs2JPV4ME] < RGhf5qoUb[zs2JPV4ME]) {
                    RGhf5qoUb[zs2JPV4ME] = OTJ7z8FcNn5L[p][zs2JPV4ME];
                }
            }
        }
        for (zs2JPV4ME = (824 - 824); zs2JPV4ME <= O7juxIroP -(549 - 548); zs2JPV4ME++) {
            for (p = 0; p <= O7juxIroP -(526 - 525); p++) {
                OTJ7z8FcNn5L[p][zs2JPV4ME] -= RGhf5qoUb[zs2JPV4ME];
            }
        }
        SePB7y8GpaI += OTJ7z8FcNn5L[(992 - 991)][(784 - 783)];
    }
}

void  IWMjJZz (int O7juxIroP) {
    int p, zs2JPV4ME;
    for (zs2JPV4ME = (795 - 794); zs2JPV4ME <= O7juxIroP -(181 - 179); zs2JPV4ME++) {
        OTJ7z8FcNn5L[0][zs2JPV4ME] = OTJ7z8FcNn5L[0][zs2JPV4ME + (534 - 533)];
    }
    for (p = 1; p <= O7juxIroP -(827 - 825); p++) {
        OTJ7z8FcNn5L[p][0] = OTJ7z8FcNn5L[p + 1][0];
    }
    for (p = 1; p <= O7juxIroP -(470 - 468); p++) {
        for (zs2JPV4ME = 1; zs2JPV4ME <= O7juxIroP -(583 - 581); zs2JPV4ME++) {
            OTJ7z8FcNn5L[p][zs2JPV4ME] = OTJ7z8FcNn5L[p + 1][zs2JPV4ME + 1];
        }
    }
}

