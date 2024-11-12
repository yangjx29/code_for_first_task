int main () {
    int bdWmZx, x4Qo9hLFzqVb;
    struct   student {
        int stuNo;
        int yuwen;
        int gboh2zdGiMTU;
        int Ix5SkiXI4dtT;
    }
    stu [bdWmZx];
    struct   tri {
        int stuNo;
        int Ix5SkiXI4dtT;
    }
    qian [(197 - 194)] = {(314 - 314), (969 - 969), (310 - 310), (396 - 396), (234 - 234), (382 - 382)};
    cin >> bdWmZx;
    for (x4Qo9hLFzqVb = (716 - 716); bdWmZx > x4Qo9hLFzqVb; x4Qo9hLFzqVb++) {
        cin >> stu[x4Qo9hLFzqVb].stuNo;
        cin >> stu[x4Qo9hLFzqVb].yuwen;
        cin >> stu[x4Qo9hLFzqVb].gboh2zdGiMTU;
        stu[x4Qo9hLFzqVb].Ix5SkiXI4dtT = stu[x4Qo9hLFzqVb].yuwen + stu[x4Qo9hLFzqVb].gboh2zdGiMTU;
    }
    for (x4Qo9hLFzqVb = (830 - 830); x4Qo9hLFzqVb < bdWmZx; x4Qo9hLFzqVb++) {
        if (stu[x4Qo9hLFzqVb].Ix5SkiXI4dtT > qian[(423 - 423)].Ix5SkiXI4dtT) {
            qian[(329 - 327)] = qian[(1001 - 1000)];
            qian[(708 - 707)] = qian[(97 - 97)];
            qian[(940 - 940)].stuNo = stu[x4Qo9hLFzqVb].stuNo;
            qian[(949 - 949)].Ix5SkiXI4dtT = stu[x4Qo9hLFzqVb].Ix5SkiXI4dtT;
            continue;
        }
        if (qian[(645 - 644)].Ix5SkiXI4dtT < stu[x4Qo9hLFzqVb].Ix5SkiXI4dtT) {
            qian[(513 - 511)] = qian[(278 - 277)];
            qian[(959 - 958)].stuNo = stu[x4Qo9hLFzqVb].stuNo;
            qian[1].Ix5SkiXI4dtT = stu[x4Qo9hLFzqVb].Ix5SkiXI4dtT;
            continue;
        }
        if (stu[x4Qo9hLFzqVb].Ix5SkiXI4dtT > qian[(726 - 724)].Ix5SkiXI4dtT) {
            qian[(292 - 290)].stuNo = stu[x4Qo9hLFzqVb].stuNo;
            qian[2].Ix5SkiXI4dtT = stu[x4Qo9hLFzqVb].Ix5SkiXI4dtT;
        };
    }
    for (x4Qo9hLFzqVb = (980 - 980); x4Qo9hLFzqVb < (663 - 660); x4Qo9hLFzqVb++)
        cout << qian[x4Qo9hLFzqVb].stuNo << ' ' << qian[x4Qo9hLFzqVb].Ix5SkiXI4dtT << endl;
    return 0;
}

