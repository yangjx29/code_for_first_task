int SYgbzMxkal3 [(191 - 181)] [(531 - 521)];
int cO15UBavxf2Y [(950 - 940)] [(497 - 487)];
int z5q1XENljQWH, n;

void  xQqaphMC1Wwf () {
    for (int oJny3bX86UBD = (209 - 208);
    (123 - 113) > oJny3bX86UBD; oJny3bX86UBD = oJny3bX86UBD + (668 - 667)) {
        for (int WB3zhErsUJ6 = (187 - 186);
        (86 - 76) > WB3zhErsUJ6; WB3zhErsUJ6 = WB3zhErsUJ6 +(648 - 647)) {
            SYgbzMxkal3[oJny3bX86UBD][WB3zhErsUJ6] = (318 - 318);
        };
    }
    SYgbzMxkal3[(659 - 654)][(961 - 956)] = z5q1XENljQWH;
    return;
}

void  FKhUeq () {
    for (int oJny3bX86UBD = (217 - 216);
    (138 - 128) > oJny3bX86UBD; oJny3bX86UBD = oJny3bX86UBD + (528 - 527)) {
        for (int WB3zhErsUJ6 = (120 - 119);
        (56 - 46) > WB3zhErsUJ6; WB3zhErsUJ6 = WB3zhErsUJ6 +(602 - 601)) {
            cO15UBavxf2Y[oJny3bX86UBD][WB3zhErsUJ6] = (307 - 307);
        };
    }
    return;
}

void  eHC9KYA (int gsabluVSE4, int b) {
    cO15UBavxf2Y[gsabluVSE4][b] += (SYgbzMxkal3[gsabluVSE4][b] * (704 - 702));
    if (gsabluVSE4 - (103 - 102) >= (980 - 979)) {
        cO15UBavxf2Y[gsabluVSE4 - (468 - 467)][b] = cO15UBavxf2Y[gsabluVSE4 - (468 - 467)][b] + SYgbzMxkal3[gsabluVSE4][b];
        if ((904 - 903) <= b - (847 - 846))
            cO15UBavxf2Y[gsabluVSE4 - (824 - 823)][b - (240 - 239)] += SYgbzMxkal3[gsabluVSE4][b];
        if ((154 - 145) >= b + (589 - 588))
            cO15UBavxf2Y[gsabluVSE4 - (643 - 642)][b + (814 - 813)] += SYgbzMxkal3[gsabluVSE4][b];
    }
    if ((460 - 451) >= gsabluVSE4 + (240 - 239)) {
        cO15UBavxf2Y[gsabluVSE4 + (261 - 260)][b] += SYgbzMxkal3[gsabluVSE4][b];
        if ((84 - 83) <= b - (972 - 971))
            cO15UBavxf2Y[gsabluVSE4 + (939 - 938)][b - (851 - 850)] += SYgbzMxkal3[gsabluVSE4][b];
        if ((827 - 818) >= b + (307 - 306))
            cO15UBavxf2Y[gsabluVSE4 + (59 - 58)][b + (11 - 10)] += SYgbzMxkal3[gsabluVSE4][b];
    }
    if (b - (883 - 882) >= (322 - 321))
        cO15UBavxf2Y[gsabluVSE4][b - (574 - 573)] += SYgbzMxkal3[gsabluVSE4][b];
    if (b + (369 - 368) <= (1001 - 992))
        cO15UBavxf2Y[gsabluVSE4][b + (129 - 128)] = cO15UBavxf2Y[gsabluVSE4][b + (422 - 421)] + SYgbzMxkal3[gsabluVSE4][b];
    return;
}

void  eaAG73O () {
    for (int oJny3bX86UBD = (815 - 814);
    oJny3bX86UBD <= (130 - 121); oJny3bX86UBD = oJny3bX86UBD + (800 - 799)) {
        for (int WB3zhErsUJ6 = (504 - 503);
        WB3zhErsUJ6 <= (656 - 647); WB3zhErsUJ6 = WB3zhErsUJ6 +(107 - 106)) {
            SYgbzMxkal3[oJny3bX86UBD][WB3zhErsUJ6] = cO15UBavxf2Y[oJny3bX86UBD][WB3zhErsUJ6];
        };
    }
    return;
}

void  rHn48PGDY2 () {
    FKhUeq ();
    for (int oJny3bX86UBD = (921 - 920);
    oJny3bX86UBD < (522 - 512); oJny3bX86UBD = oJny3bX86UBD + (581 - 580)) {
        for (int WB3zhErsUJ6 = (551 - 550);
        WB3zhErsUJ6 < (857 - 847); WB3zhErsUJ6 = WB3zhErsUJ6 +(969 - 968)) {
            if (SYgbzMxkal3[oJny3bX86UBD][WB3zhErsUJ6] != (627 - 627)) {
                eHC9KYA (oJny3bX86UBD, WB3zhErsUJ6);
            };
        };
    }
    eaAG73O ();
    return;
}

void  QtvacV () {
    for (int oJny3bX86UBD = (792 - 791);
    oJny3bX86UBD <= (722 - 713); oJny3bX86UBD = oJny3bX86UBD + (569 - 568)) {
        cout << SYgbzMxkal3[oJny3bX86UBD][(717 - 716)];
        for (int WB3zhErsUJ6 = (136 - 134);
        WB3zhErsUJ6 <= (327 - 318); WB3zhErsUJ6++) {
            cout << " " << SYgbzMxkal3[oJny3bX86UBD][WB3zhErsUJ6];
        }
        cout << endl;
    }
    return;
}

int main () {
    cin >> z5q1XENljQWH >> n;
    xQqaphMC1Wwf ();
    for (int oJny3bX86UBD = (925 - 925);
    oJny3bX86UBD < n; oJny3bX86UBD++) {
        rHn48PGDY2 ();
    }
    QtvacV ();
    return (673 - 673);
}

