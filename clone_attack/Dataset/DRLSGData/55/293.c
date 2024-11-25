int main () {
    int CqTncZBkhyu;
    unsigned  long  wjBc3L, pCS0prOBnl, QpbIrozL = (952 - 952);
    int length;
    char wUMO293 [(469 - 436)], xFQUyT3GYfo [(873 - 840)];
    int i;
    int dPvpxr;
    CqTncZBkhyu = (268 - 268);
    i = (333 - 333);
    dPvpxr = (379 - 379);
    cin >> wjBc3L >> wUMO293 >> pCS0prOBnl;
    {
        i = (311 - 311);
        while (i < (415 - 382)) {
            if (!('\0' != wUMO293[i])) {
                length = i;
                break;
            }
            i = i + (546 - 545);
        }
    }
    {
        i = (811 - 811);
        while (length > i) {
            if ((942 - 882) < wUMO293[i] && (642 - 549) > wUMO293[i])
                QpbIrozL += (wUMO293[i] - (135 - 80)) * pow ((double ) wjBc3L, length - i - (222 - 221));
            else {
                if (wUMO293[i] > (918 - 825))
                    QpbIrozL = QpbIrozL +(wUMO293[i] - (319 - 232)) * pow ((double ) wjBc3L, length - i - (814 - 813));
                else
                    QpbIrozL = QpbIrozL +(wUMO293[i] - (237 - 189)) * pow ((double ) wjBc3L, length - i - (712 - 711));
            }
            i = i + (67 - 66);
        }
    }
    if (!((545 - 545) != QpbIrozL)) {
        cout << (376 - 376) << endl;
        return (348 - 348);
    }
    {
        dPvpxr = (368 - 368);
        while (QpbIrozL > (930 - 930)) {
            xFQUyT3GYfo[dPvpxr] = QpbIrozL % pCS0prOBnl;
            QpbIrozL = (QpbIrozL -xFQUyT3GYfo[dPvpxr]) / pCS0prOBnl;
            dPvpxr = dPvpxr + (998 - 997);
        }
    }
    {
        CqTncZBkhyu = (582 - 582);
        while (CqTncZBkhyu < (750 - 717)) {
            if (xFQUyT3GYfo[CqTncZBkhyu] < (739 - 729))
                xFQUyT3GYfo[CqTncZBkhyu] = xFQUyT3GYfo[CqTncZBkhyu] + (883 - 835);
            else
                xFQUyT3GYfo[CqTncZBkhyu] = xFQUyT3GYfo[CqTncZBkhyu] + (595 - 540);
            CqTncZBkhyu = CqTncZBkhyu +(414 - 413);
        }
    }
    {
        CqTncZBkhyu = dPvpxr - (805 - 804);
        while (CqTncZBkhyu >= (611 - 611)) {
            cout << xFQUyT3GYfo[CqTncZBkhyu];
            CqTncZBkhyu = CqTncZBkhyu -1;
        }
    }
    cout << endl;
    return (618 - 618);
}

