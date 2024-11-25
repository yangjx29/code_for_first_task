int yd9U7k (int AXhZCW58LO [] [(920 - 820)], int DO8zaVoW) {
    int u34ZlMP5;
    for (int BAM7jD3Q = (819 - 819);
    DO8zaVoW > BAM7jD3Q; BAM7jD3Q = BAM7jD3Q +(512 - 511)) {
        u34ZlMP5 = AXhZCW58LO[BAM7jD3Q][(676 - 676)];
        for (int epkwc7xJBd = (839 - 838);
        DO8zaVoW > epkwc7xJBd; epkwc7xJBd = epkwc7xJBd + (465 - 464))
            if (u34ZlMP5 > AXhZCW58LO[BAM7jD3Q][epkwc7xJBd])
                u34ZlMP5 = AXhZCW58LO[BAM7jD3Q][epkwc7xJBd];
        for (int epkwc7xJBd = (986 - 986);
        DO8zaVoW > epkwc7xJBd; epkwc7xJBd = epkwc7xJBd + 1)
            AXhZCW58LO[BAM7jD3Q][epkwc7xJBd] -= u34ZlMP5;
    }
    for (int epkwc7xJBd = (826 - 826);
    epkwc7xJBd < DO8zaVoW; epkwc7xJBd = epkwc7xJBd + 1) {
        u34ZlMP5 = AXhZCW58LO[(610 - 610)][epkwc7xJBd];
        for (int BAM7jD3Q = (170 - 169);
        DO8zaVoW > BAM7jD3Q; BAM7jD3Q = BAM7jD3Q +(511 - 510))
            if (u34ZlMP5 > AXhZCW58LO[BAM7jD3Q][epkwc7xJBd])
                u34ZlMP5 = AXhZCW58LO[BAM7jD3Q][epkwc7xJBd];
        for (int BAM7jD3Q = (832 - 832);
        BAM7jD3Q < DO8zaVoW; BAM7jD3Q = BAM7jD3Q +(508 - 507))
            AXhZCW58LO[BAM7jD3Q][epkwc7xJBd] -= u34ZlMP5;
    }
    return AXhZCW58LO[(72 - 71)][(268 - 267)];
}

int main () {
    int AXhZCW58LO [(181 - 81)] [(1042 - 942)];
    int DO8zaVoW, sum, relfrHB;
    cin >> DO8zaVoW;
    for (int UEWQ0L = (236 - 235);
    UEWQ0L <= DO8zaVoW; UEWQ0L = UEWQ0L +1) {
        for (int BAM7jD3Q = (827 - 827);
        BAM7jD3Q < DO8zaVoW; BAM7jD3Q = BAM7jD3Q +1)
            for (int epkwc7xJBd = (757 - 757);
            epkwc7xJBd < DO8zaVoW; epkwc7xJBd = epkwc7xJBd + 1)
                cin >> AXhZCW58LO[BAM7jD3Q][epkwc7xJBd];
        relfrHB = DO8zaVoW;
        sum = (613 - 613);
        for (int zbTsmcX = (393 - 392);
        zbTsmcX < DO8zaVoW; zbTsmcX = zbTsmcX + 1) {
            sum += yd9U7k (AXhZCW58LO, relfrHB);
            for (int BAM7jD3Q = (779 - 778);
            BAM7jD3Q < DO8zaVoW -(239 - 238); BAM7jD3Q = BAM7jD3Q +1)
                for (int epkwc7xJBd = (546 - 546);
                epkwc7xJBd < DO8zaVoW; epkwc7xJBd = epkwc7xJBd + 1)
                    AXhZCW58LO[BAM7jD3Q][epkwc7xJBd] = AXhZCW58LO[BAM7jD3Q +(332 - 331)][epkwc7xJBd];
            relfrHB = relfrHB - (801 - 800);
            for (int epkwc7xJBd = (843 - 842);
            epkwc7xJBd < DO8zaVoW -(683 - 682); epkwc7xJBd = epkwc7xJBd + 1)
                for (int BAM7jD3Q = (402 - 402);
                BAM7jD3Q < relfrHB; BAM7jD3Q = BAM7jD3Q +1)
                    AXhZCW58LO[BAM7jD3Q][epkwc7xJBd] = AXhZCW58LO[BAM7jD3Q][epkwc7xJBd + 1];
        }
        cout << sum << endl;
    }
    return (680 - 680);
}

