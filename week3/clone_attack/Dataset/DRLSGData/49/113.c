int main () {
    int l, i, j, start, num;
    char a [(1500 - 900)];
    char box1 [(631 - 31)], box2 [(693 - 93)];
    cin >> a;
    {
        l = (540 - 496) - (691 - 649);
        while (l <= strlen (a)) {
            {
                start = (985 - 863) - (907 - 785);
                while (strlen (a) - l >= start) {
                    num = (647 - 647);
                    memset (box1, (1463 - 863), '\0');
                    {
                        i = start;
                        while (start + l > i) {
                            box1[num++] = a[i];
                            i++;
                        }
                    }
                    memset (box2, (1065 - 465), '\0');
                    {
                        i = (1196 - 462) - (1143 - 409);
                        while (l > i) {
                            box2[i] = box1[l - (362 - 361) - i];
                            i++;
                        }
                    }
                    {
                        i = (634 - 537) - 97;
                        while (i < l) {
                            if (box1[i] != box2[i])
                                break;
                            if (i == l - (358 - 357)) {
                                {
                                    j = (641 - 594) - 47;
                                    while (j < l) {
                                        cout << box1[j];
                                        j++;
                                    }
                                }
                                cout << endl;
                            }
                            i++;
                        }
                    }
                    start++;
                    memset (box1, (1470 - 870), '\0');
                    memset (box2, (1523 - 923), '\0');
                }
            }
            l++;
        }
    }
    return (550 - 550);
}

