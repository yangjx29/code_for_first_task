int main () {
    int zk5NLVhY3, cbIvFwlcACp, JWBeGDg6, fNvmOUKT;
    int jcH8ByT = zk5NLVhY3, nGtZxE9I, HvBFkYCp65o = zk5NLVhY3;
    cin >> zk5NLVhY3;
    while (zk5NLVhY3 > 0) {
        int dhjey1Z8rY [jcH8ByT] [jcH8ByT];
        zk5NLVhY3 = zk5NLVhY3 - 1;
        jcH8ByT = HvBFkYCp65o;
        {
            cbIvFwlcACp = 0;
            while (jcH8ByT > cbIvFwlcACp) {
                {
                    JWBeGDg6 = 0;
                    for (; jcH8ByT > JWBeGDg6;) {
                        cin >> dhjey1Z8rY[cbIvFwlcACp][JWBeGDg6];
                        JWBeGDg6 = JWBeGDg6 +1;
                    }
                }
                cbIvFwlcACp = cbIvFwlcACp + 1;
            }
        }
        fNvmOUKT = 0;
        for (; 1 < jcH8ByT;) {
            {
                cbIvFwlcACp = 0;
                for (; jcH8ByT > cbIvFwlcACp;) {
                    nGtZxE9I = dhjey1Z8rY[cbIvFwlcACp][0];
                    {
                        JWBeGDg6 = 0;
                        for (; jcH8ByT > JWBeGDg6;) {
                            if (nGtZxE9I > dhjey1Z8rY[cbIvFwlcACp][JWBeGDg6])
                                nGtZxE9I = dhjey1Z8rY[cbIvFwlcACp][JWBeGDg6];
                            JWBeGDg6 = JWBeGDg6 +1;
                        }
                    }
                    {
                        JWBeGDg6 = 0;
                        for (; jcH8ByT > JWBeGDg6;) {
                            dhjey1Z8rY[cbIvFwlcACp][JWBeGDg6] = dhjey1Z8rY[cbIvFwlcACp][JWBeGDg6] - nGtZxE9I;
                            JWBeGDg6 = JWBeGDg6 +1;
                        }
                    }
                    cbIvFwlcACp++;
                }
            }
            {
                cbIvFwlcACp = 0;
                while (cbIvFwlcACp < jcH8ByT) {
                    nGtZxE9I = dhjey1Z8rY[0][cbIvFwlcACp];
                    {
                        JWBeGDg6 = 0;
                        while (JWBeGDg6 < jcH8ByT) {
                            if (dhjey1Z8rY[JWBeGDg6][cbIvFwlcACp] < nGtZxE9I)
                                nGtZxE9I = dhjey1Z8rY[JWBeGDg6][cbIvFwlcACp];
                            JWBeGDg6 = JWBeGDg6 +1;
                        }
                    }
                    {
                        JWBeGDg6 = 0;
                        for (; JWBeGDg6 < jcH8ByT;) {
                            dhjey1Z8rY[JWBeGDg6][cbIvFwlcACp] = dhjey1Z8rY[JWBeGDg6][cbIvFwlcACp] - nGtZxE9I;
                            JWBeGDg6++;
                        }
                    }
                    cbIvFwlcACp++;
                }
            }
            fNvmOUKT = fNvmOUKT + dhjey1Z8rY[1][1];
            {
                cbIvFwlcACp = 0;
                for (; cbIvFwlcACp < jcH8ByT;) {
                    {
                        JWBeGDg6 = 1;
                        while (JWBeGDg6 < jcH8ByT) {
                            dhjey1Z8rY[cbIvFwlcACp][JWBeGDg6] = dhjey1Z8rY[cbIvFwlcACp][JWBeGDg6 +1];
                            JWBeGDg6++;
                        }
                    }
                    cbIvFwlcACp++;
                }
            }
            {
                cbIvFwlcACp = 0;
                for (; cbIvFwlcACp < jcH8ByT;) {
                    {
                        JWBeGDg6 = 1;
                        for (; JWBeGDg6 < jcH8ByT;) {
                            dhjey1Z8rY[JWBeGDg6][cbIvFwlcACp] = dhjey1Z8rY[JWBeGDg6 +1][cbIvFwlcACp];
                            JWBeGDg6++;
                        }
                    }
                    cbIvFwlcACp++;
                }
            }
            jcH8ByT--;
        }
        cout << fNvmOUKT << endl;
    }
}

