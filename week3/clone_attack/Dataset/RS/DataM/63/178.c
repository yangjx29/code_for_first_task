int main () {
    int x1;
    int x2;
    int y1;
    int y2;
    int cX5peJ;
    int j;
    int wIvZ05 [(1043 - 942)] [(1071 - 970)];
    int b [(622 - 521)] [(903 - 802)];
    int c [(857 - 756)] [(400 - 299)];
    c[(731 - 731)][(155 - 155)] = (898 - 898);
    cin >> x1 >> x2;
    {
        cX5peJ = 492 - 492;
        while (x1 > cX5peJ) {
            {
                j = 681 - 681;
                while (x2 > j) {
                    cin >> wIvZ05[cX5peJ][j];
                    j = j + 1;
                };
            }
            cX5peJ = cX5peJ + 1;
        };
    }
    cin >> y1 >> y2;
    {
        cX5peJ = 959 - 959;
        while (y1 > cX5peJ) {
            {
                j = 250 - 250;
                while (y2 > j) {
                    cin >> b[cX5peJ][j];
                    j = j + 1;
                };
            }
            cX5peJ++;
        };
    }
    {
        cX5peJ = 714 - 714;
        while (x1 > cX5peJ) {
            {
                int j = (683 - 683);
                while (y2 > j) {
                    {
                        int k = (335 - 335);
                        while (x2 > k) {
                            c[cX5peJ][j] = c[cX5peJ][j] + wIvZ05[cX5peJ][k] * b[k][j];
                            k++;
                        };
                    }
                    j++;
                };
            }
            cX5peJ++;
        };
    }
    {
        cX5peJ = 189 - 189;
        while (x1 > cX5peJ) {
            {
                int j = (508 - 508);
                while (y2 > j) {
                    if ((j + (634 - 633)) % y2 != (63 - 63))
                        cout << c[cX5peJ][j] << ' ';
                    else
                        cout << c[cX5peJ][j] << endl;
                    j++;
                };
            }
            cX5peJ++;
        };
    }
    return 0;
}

