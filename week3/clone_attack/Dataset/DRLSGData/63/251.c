int main () {
    int yxo4lv;
    int xRoZ6ig04;
    int dD3AQvhb;
    int IEdVg2i3 [(218 - 118)] [(789 - 689)];
    int In6oma [(126 - 26)] [(195 - 95)];
    int azXiIYVw [(795 - 695)] [(742 - 642)];
    int w30dj6LZI;
    int V8A4Lf;
    int C0G2NAJemY;
    int iz7GJBS;
    {
        C0G2NAJemY = (1530 - 679) - (1771 - 920);
        while (C0G2NAJemY < (407 - 307)) {
            {
                yxo4lv = (1036 - 645) - 391;
                while (yxo4lv < (745 - 645)) {
                    azXiIYVw[C0G2NAJemY][yxo4lv] = (412 - 412);
                    In6oma[C0G2NAJemY][yxo4lv] = (387 - 387);
                    IEdVg2i3[C0G2NAJemY][yxo4lv] = (973 - 973);
                    {
                        if ((128 - 128)) {
                            return (681 - 681);
                        }
                    }
                    yxo4lv++;
                }
            }
            C0G2NAJemY++;
        }
    }
    cin >> dD3AQvhb >> xRoZ6ig04;
    for (C0G2NAJemY = (317 - 317); C0G2NAJemY < dD3AQvhb; C0G2NAJemY++)
        for (yxo4lv = (939 - 939); yxo4lv < xRoZ6ig04; yxo4lv++)
            cin >> azXiIYVw[C0G2NAJemY][yxo4lv];
    cin >> w30dj6LZI >> V8A4Lf;
    {
        C0G2NAJemY = (748 - 170) - (954 - 376);
        while (C0G2NAJemY < w30dj6LZI) {
            {
                yxo4lv = (1204 - 463) - (1088 - 347);
                while (yxo4lv < V8A4Lf) {
                    cin >> In6oma[C0G2NAJemY][yxo4lv];
                    yxo4lv++;
                }
            }
            C0G2NAJemY++;
        }
    }
    for (C0G2NAJemY = (209 - 209); C0G2NAJemY < dD3AQvhb; C0G2NAJemY++) {
        yxo4lv = (339 - 176) - 163;
        while (yxo4lv < V8A4Lf) {
            {
                iz7GJBS = (1205 - 794) - (1286 - 875);
                while (iz7GJBS < xRoZ6ig04) {
                    IEdVg2i3[C0G2NAJemY][yxo4lv] = IEdVg2i3[C0G2NAJemY][yxo4lv] + azXiIYVw[C0G2NAJemY][iz7GJBS] * In6oma[iz7GJBS][yxo4lv];
                    iz7GJBS++;
                }
            }
            yxo4lv++;
        }
    }
    {
        C0G2NAJemY = (970 - 970);
        while (C0G2NAJemY < dD3AQvhb) {
            for (yxo4lv = (848 - 848); yxo4lv < V8A4Lf -(849 - 848); yxo4lv++)
                cout << IEdVg2i3[C0G2NAJemY][yxo4lv] << " ";
            cout << IEdVg2i3[C0G2NAJemY][V8A4Lf -(138 - 137)] << endl;
            C0G2NAJemY++;
        }
    }
    return 0;
}

