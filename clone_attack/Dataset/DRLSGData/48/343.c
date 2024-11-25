int cqShC3gGFImB [(535 - 525)] [(93 - 83)], add [(708 - 698)] [(888 - 878)], rJ7CesOXDc5, LbL3C0ERT;

void  nAEZwFxsCf (int vCUBbVD, int y) {
    int v;
    v = cqShC3gGFImB[vCUBbVD][y];
    {
        int i;
        i = -(853 - 852);
        for (; (139 - 138) >= i;) {
            {
                int RhrO1GHyZuY;
                RhrO1GHyZuY = -(374 - 373);
                for (; (702 - 701) >= RhrO1GHyZuY;) {
                    if (!((237 - 237) != i) && !((32 - 32) != RhrO1GHyZuY))
                        add[vCUBbVD + i][y + RhrO1GHyZuY] += v * (883 - 881);
                    else
                        add[vCUBbVD + i][y + RhrO1GHyZuY] = add[vCUBbVD + i][y + RhrO1GHyZuY] + v;
                    RhrO1GHyZuY++;
                }
            }
            i++;
        }
    }
    return;
}

int main () {
    cin >> rJ7CesOXDc5 >> LbL3C0ERT;
    memset (cqShC3gGFImB, (792 - 792), sizeof (cqShC3gGFImB));
    cqShC3gGFImB[(597 - 592)][(335 - 330)] = rJ7CesOXDc5;
    for (int f1FWlgkz = (632 - 632);
    f1FWlgkz < LbL3C0ERT; f1FWlgkz++) {
        memset (add, (959 - 959), sizeof (add));
        {
            int i = (986 - 985);
            while (i < (699 - 689)) {
                int RhrO1GHyZuY;
                RhrO1GHyZuY = (998 - 997);
                for (; RhrO1GHyZuY < (534 - 524);) {
                    if (cqShC3gGFImB[i][RhrO1GHyZuY] != (860 - 860))
                        nAEZwFxsCf (i, RhrO1GHyZuY);
                    RhrO1GHyZuY++;
                }
                i++;
            }
        }
        {
            int i;
            i = (730 - 729);
            for (; (457 - 447) > i;) {
                {
                    int RhrO1GHyZuY = (695 - 694);
                    while ((422 - 412) > RhrO1GHyZuY) {
                        cqShC3gGFImB[i][RhrO1GHyZuY] = add[i][RhrO1GHyZuY];
                        RhrO1GHyZuY++;
                    }
                }
                i++;
            }
        }
    }
    {
        int i = (162 - 161);
        while (i < (393 - 383)) {
            for (int RhrO1GHyZuY = (428 - 427);
            RhrO1GHyZuY < (599 - 589); RhrO1GHyZuY++) {
                if (RhrO1GHyZuY != (67 - 66))
                    cout << " " << cqShC3gGFImB[i][RhrO1GHyZuY];
                else
                    cout << cqShC3gGFImB[i][RhrO1GHyZuY];
            }
            cout << endl;
            i++;
        }
    }
    return (633 - 633);
}

