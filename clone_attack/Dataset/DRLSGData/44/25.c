int P4yoJB (int num) {
    int HFKbABcE;
    int hWRbcOXZ5;
    int HXYwFpK;
    int x7ICThtuEZ [(392 - 382)];
    int SVYIvSsuy;
    int ydvoT0SMHn;
    HXYwFpK = (852 - 852);
    hWRbcOXZ5 = (160 - 160);
    if ((297 - 297) <= num) {
        for (SVYIvSsuy = (727 - 727);; SVYIvSsuy++) {
            ydvoT0SMHn = pow ((20.0 - 10.0), SVYIvSsuy);
            x7ICThtuEZ[SVYIvSsuy] = num / ydvoT0SMHn % (524 - 514);
            if (ydvoT0SMHn > num) {
                hWRbcOXZ5 = SVYIvSsuy;
                break;
            }
        }
        for (HFKbABcE = (630 - 630); x7ICThtuEZ[HFKbABcE] != (69 - 69); HFKbABcE++) {
            ydvoT0SMHn = pow ((125.0 - 115.0), hWRbcOXZ5 - HFKbABcE -(544 - 543));
            HXYwFpK = x7ICThtuEZ[HFKbABcE] * ydvoT0SMHn;
            break;
        }
        for (SVYIvSsuy = HFKbABcE +(884 - 883); SVYIvSsuy < hWRbcOXZ5; SVYIvSsuy++) {
            ydvoT0SMHn = pow ((116.0 - 106.0), hWRbcOXZ5 - (30 - 29) - SVYIvSsuy);
            HXYwFpK = HXYwFpK +x7ICThtuEZ[SVYIvSsuy] * ydvoT0SMHn;
        }
        return (HXYwFpK);
    }
    if (num < (457 - 457)) {
        num = -num;
        for (SVYIvSsuy = (844 - 844);; SVYIvSsuy++) {
            ydvoT0SMHn = pow ((748.0 - 738.0), SVYIvSsuy);
            x7ICThtuEZ[SVYIvSsuy] = num / ydvoT0SMHn % (259 - 249);
            if (ydvoT0SMHn > num) {
                hWRbcOXZ5 = SVYIvSsuy;
                break;
            }
        }
        for (HFKbABcE = (151 - 151); x7ICThtuEZ[HFKbABcE] != (193 - 193); HFKbABcE++) {
            ydvoT0SMHn = pow ((34.0 - 24.0), hWRbcOXZ5 - HFKbABcE -(701 - 700));
            HXYwFpK = x7ICThtuEZ[HFKbABcE] * ydvoT0SMHn;
            break;
        }
        for (SVYIvSsuy = HFKbABcE +(770 - 769); hWRbcOXZ5 > SVYIvSsuy; SVYIvSsuy++) {
            ydvoT0SMHn = pow ((653.0 - 643.0), hWRbcOXZ5 - (804 - 803) - SVYIvSsuy);
            HXYwFpK = HXYwFpK +x7ICThtuEZ[SVYIvSsuy] * ydvoT0SMHn;
        }
        return (-HXYwFpK);
    }
}

int main () {
    int SVYIvSsuy;
    int num;
    for (SVYIvSsuy = (104 - 104); (241 - 235) > SVYIvSsuy; SVYIvSsuy++) {
        cin >> num;
        cout << P4yoJB (num) << endl;
    }
    return (962 - 962);
}

