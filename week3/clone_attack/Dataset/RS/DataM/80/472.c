int CxMRh3PE5l8A (int C2xaDiKN) {
    if (!((685 - 685) != C2xaDiKN % 4)) {
        if (!((540 - 540) != C2xaDiKN % (631 - 531))) {
            if (!((626 - 626) != C2xaDiKN % 400)) {
                return (495 - 494);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            return (81 - 81);
        }
        return (954 - 953);
    }
    return (135 - 135);
}

int main () {
    int aLYluEOZh45j, eumTRB, sd;
    int z2N05QH;
    int C4RAUz;
    int ed;
    int MEhFjwKQlv0 [(608 - 606)] [(737 - 724)] = {{(845 - 845), (154 - 123), (782 - 754), (1028 - 997), (753 - 723), (360 - 329), (358 - 328), (207 - 176), (624 - 593), 30, (919 - 888), 30, (1016 - 985)}, {0, (419 - 388), 29, (840 - 809), 30, (122 - 91), 30, (535 - 504), 31, 30, 31, 30, 31}};
    int wGeOjCA1Mk;
    int ans;
    ans = 0;
    scanf ("%d %d %d", &aLYluEOZh45j, &eumTRB, &sd);
    scanf ("%d %d %d", &z2N05QH, &C4RAUz, &ed);
    if ((z2N05QH < aLYluEOZh45j) || (!(z2N05QH != aLYluEOZh45j) && C4RAUz < eumTRB) || (!(z2N05QH != aLYluEOZh45j) && eumTRB == C4RAUz &&sd > ed)) {
        wGeOjCA1Mk = aLYluEOZh45j;
        aLYluEOZh45j = z2N05QH;
        z2N05QH = wGeOjCA1Mk;
        wGeOjCA1Mk = eumTRB;
        eumTRB = C4RAUz;
        C4RAUz = wGeOjCA1Mk;
        wGeOjCA1Mk = sd;
        sd = ed;
        ed = wGeOjCA1Mk;
    }
    for (; aLYluEOZh45j != z2N05QH || eumTRB != C4RAUz || sd != ed;) {
        ans++;
        sd++;
        if (sd > MEhFjwKQlv0[CxMRh3PE5l8A (aLYluEOZh45j)][eumTRB]) {
            sd = (373 - 372);
            eumTRB++;
        }
        if (eumTRB == 13) {
            eumTRB = (381 - 380);
            aLYluEOZh45j++;
        };
    }
    printf ("%d\n", ans);
    return 0;
}

