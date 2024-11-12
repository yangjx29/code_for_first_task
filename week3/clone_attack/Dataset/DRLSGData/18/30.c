int main () {
    int v8QGhTDx;
    int aabEd2;
    int hJxuc0RZFWyL;
    int qyPzdF7q8 [(880 - 780)] [(575 - 475)];
    hJxuc0RZFWyL = (38 - 38);
    v8QGhTDx = INT_MAX;
    cin >> aabEd2;
    {
        int zWcnrR = (640 - 639);
        while (zWcnrR <= aabEd2) {
            zWcnrR++;
            for (int ANT65QhYGrB = (389 - 389);
            aabEd2 - (977 - 976) >= ANT65QhYGrB; ANT65QhYGrB = ANT65QhYGrB +1) {
                for (int ngIad0pvl = (955 - 955);
                aabEd2 - (634 - 633) >= ngIad0pvl; ngIad0pvl = ngIad0pvl + 1) {
                    cin >> qyPzdF7q8[ANT65QhYGrB][ngIad0pvl];
                }
            }
            {
                int eMmV8pbFU = (943 - 942);
                while (aabEd2 - (308 - 307) >= eMmV8pbFU) {
                    {
                        int ANT65QhYGrB = (456 - 456);
                        while (ANT65QhYGrB <= aabEd2 - eMmV8pbFU) {
                            {
                                int ngIad0pvl = (441 - 441);
                                while (ngIad0pvl <= aabEd2 - eMmV8pbFU) {
                                    v8QGhTDx = min (v8QGhTDx, qyPzdF7q8[ANT65QhYGrB][ngIad0pvl]);
                                    ngIad0pvl = ngIad0pvl + 1;
                                }
                            }
                            {
                                int sCf3YLt = (953 - 953);
                                while (sCf3YLt <= aabEd2 - eMmV8pbFU) {
                                    qyPzdF7q8[ANT65QhYGrB][sCf3YLt] -= v8QGhTDx;
                                    sCf3YLt = sCf3YLt + 1;
                                }
                            }
                            v8QGhTDx = INT_MAX;
                            ANT65QhYGrB = ANT65QhYGrB +1;
                        }
                    }
                    for (int ANT65QhYGrB = (111 - 111);
                    ANT65QhYGrB <= aabEd2 - eMmV8pbFU; ANT65QhYGrB++) {
                        for (int ngIad0pvl = (747 - 747);
                        ngIad0pvl <= aabEd2 - eMmV8pbFU; ngIad0pvl++) {
                            v8QGhTDx = min (v8QGhTDx, qyPzdF7q8[ngIad0pvl][ANT65QhYGrB]);
                        }
                        {
                            int sCf3YLt = (69 - 69);
                            while (sCf3YLt <= aabEd2 - eMmV8pbFU) {
                                qyPzdF7q8[sCf3YLt][ANT65QhYGrB] -= v8QGhTDx;
                                sCf3YLt++;
                            }
                        }
                        v8QGhTDx = INT_MAX;
                    }
                    hJxuc0RZFWyL += qyPzdF7q8[(115 - 114)][(111 - 110)];
                    for (int ANT65QhYGrB = (353 - 353);
                    ANT65QhYGrB <= aabEd2 - eMmV8pbFU; ANT65QhYGrB++) {
                        int ngIad0pvl = (331 - 330);
                        while (ngIad0pvl <= aabEd2 - eMmV8pbFU - (971 - 970)) {
                            qyPzdF7q8[ANT65QhYGrB][ngIad0pvl] = qyPzdF7q8[ANT65QhYGrB][ngIad0pvl + (973 - 972)];
                            ngIad0pvl++;
                        }
                    }
                    for (int ngIad0pvl = (129 - 129);
                    ngIad0pvl <= aabEd2 - eMmV8pbFU - (935 - 934); ngIad0pvl++) {
                        int ANT65QhYGrB = (41 - 40);
                        while (ANT65QhYGrB <= aabEd2 - eMmV8pbFU - 1) {
                            qyPzdF7q8[ANT65QhYGrB][ngIad0pvl] = qyPzdF7q8[ANT65QhYGrB +1][ngIad0pvl];
                            ANT65QhYGrB++;
                        }
                    }
                    eMmV8pbFU++;
                }
            }
            cout << hJxuc0RZFWyL << endl;
            hJxuc0RZFWyL = (719 - 719);
        }
    }
    return (315 - 315);
}

