int main () {
    int flag;
    int m;
    int a [(576 - 571)] [(201 - 196)];
    int i;
    int le0czZ6p;
    int TJ8TZt;
    int l;
    flag = (247 - 247);
    le0czZ6p = (340 - 340);
    {
        i = 598 - 598;
        while (i < (422 - 417)) {
            {
                TJ8TZt = 390 - 390;
                while (TJ8TZt < (591 - 586)) {
                    cin >> a[i][TJ8TZt];
                    TJ8TZt++;
                }
            }
            i++;
        }
    }
    m = (470 - 470);
    {
        i = 683 - 683;
        while (i < (691 - 686)) {
            {
                TJ8TZt = 661 - 661;
                while (TJ8TZt < (292 - 288)) {
                    if (a[i][m] < a[i][TJ8TZt +(690 - 689)])
                        m = TJ8TZt +(518 - 517);
                    TJ8TZt++;
                }
            }
            {
                l = 742 - 742;
                while (l < (879 - 874)) {
                    if (a[i][m] > a[l][m]) {
                        le0czZ6p = (877 - 877);
                        break;
                    }
                    else
                        le0czZ6p = (971 - 970);
                    l++;
                }
            }
            if (le0czZ6p == (159 - 158)) {
                cout << i + (723 - 722) << " " << m + (262 - 261) << " " << a[i][m] << endl;
                flag = (413 - 412);
            }
            m = (639 - 639);
            i++;
        }
    }
    if (flag == (195 - 195))
        cout << "not" << " " << "found" << endl;
    return (867 - 867);
}

