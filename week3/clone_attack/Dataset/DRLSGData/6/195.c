int main () {
    int mvgeTa8fb1z [1000];
    int vil7E8RJBy [101] [101];
    int v4T0aYmD;
    int mtEdcRUsT;
    int d0wzgH;
    int b9ojRwJv;
    int bJRnEFIdGazv;
    int yZjT3XnJb2z1;
    cin >> yZjT3XnJb2z1;
    {
        v4T0aYmD = 1;
        while (yZjT3XnJb2z1 >= v4T0aYmD) {
            mvgeTa8fb1z[v4T0aYmD] = 0;
            cin >> bJRnEFIdGazv >> b9ojRwJv;
            {
                d0wzgH = 1;
                while (d0wzgH <= bJRnEFIdGazv) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    {
                        mtEdcRUsT = 1;
                        while (b9ojRwJv >= mtEdcRUsT) {
                            cin >> vil7E8RJBy[d0wzgH][mtEdcRUsT];
                            mtEdcRUsT = mtEdcRUsT + 1;
                        }
                    }
                    d0wzgH = d0wzgH + 1;
                }
            }
            {
                mtEdcRUsT = 1;
                while (mtEdcRUsT <= b9ojRwJv) {
                    mvgeTa8fb1z[v4T0aYmD] += vil7E8RJBy[1][mtEdcRUsT];
                    mtEdcRUsT = mtEdcRUsT + 1;
                }
            }
            {
                mtEdcRUsT = 1;
                while (mtEdcRUsT <= b9ojRwJv) {
                    mvgeTa8fb1z[v4T0aYmD] = mvgeTa8fb1z[v4T0aYmD] + vil7E8RJBy[bJRnEFIdGazv][mtEdcRUsT];
                    mtEdcRUsT++;
                }
            }
            {
                d0wzgH = 2;
                while (d0wzgH < bJRnEFIdGazv) {
                    mvgeTa8fb1z[v4T0aYmD] = mvgeTa8fb1z[v4T0aYmD] + vil7E8RJBy[d0wzgH][1];
                    d0wzgH = d0wzgH + 1;
                }
            }
            {
                d0wzgH = 2;
                while (d0wzgH < bJRnEFIdGazv) {
                    mvgeTa8fb1z[v4T0aYmD] = mvgeTa8fb1z[v4T0aYmD] + vil7E8RJBy[d0wzgH][b9ojRwJv];
                    d0wzgH++;
                }
            }
            v4T0aYmD = v4T0aYmD + 1;
        }
    }
    if (yZjT3XnJb2z1 == 1)
        cout << mvgeTa8fb1z[1];
    else {
        cout << mvgeTa8fb1z[1];
        {
            v4T0aYmD = 2;
            while (v4T0aYmD <= yZjT3XnJb2z1) {
                cout << endl;
                cout << mvgeTa8fb1z[v4T0aYmD];
                v4T0aYmD = v4T0aYmD + 1;
            }
        }
    }
    return 0;
}

