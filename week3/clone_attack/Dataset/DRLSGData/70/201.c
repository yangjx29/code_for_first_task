int main () {
    int v7U1QwCXj5JG;
    cin >> v7U1QwCXj5JG;
    double  DsMqaPCZQvj [100];
    double  YLDx40 [100];
    double  dis [10000];
    {
        int sVNA9CF6g17 = 0;
        while (sVNA9CF6g17 < v7U1QwCXj5JG) {
            cin >> DsMqaPCZQvj[sVNA9CF6g17] >> YLDx40[sVNA9CF6g17];
            sVNA9CF6g17++;
        }
    }
    int iqFzA0f;
    iqFzA0f = 0;
    {
        int sVNA9CF6g17 = 0;
        while (sVNA9CF6g17 < v7U1QwCXj5JG - 1) {
            {
                int e71dPc = sVNA9CF6g17 + 1;
                while (e71dPc < v7U1QwCXj5JG) {
                    dis[iqFzA0f++] = sqrt ((DsMqaPCZQvj[sVNA9CF6g17] - DsMqaPCZQvj[e71dPc]) * (DsMqaPCZQvj[sVNA9CF6g17] - DsMqaPCZQvj[e71dPc]) + (YLDx40[sVNA9CF6g17] - YLDx40[e71dPc]) * (YLDx40[sVNA9CF6g17] - YLDx40[e71dPc]));
                    e71dPc++;
                }
            }
            sVNA9CF6g17++;
        }
    }
    double  izAEgvcFB;
    izAEgvcFB = 0;
    {
        int gzTpJmg = 0;
        while (gzTpJmg < iqFzA0f) {
            if (dis[gzTpJmg] > izAEgvcFB)
                izAEgvcFB = dis[gzTpJmg];
            gzTpJmg++;
        }
    }
    cout << izAEgvcFB << setprecision (4) << fixed << endl;
    return 0;
}

