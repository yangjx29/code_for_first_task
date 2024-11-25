struct   position {
    double  itBoAHv4C53 [(1056 - 56)];
    int x;
    int fpWPc9n6UZw5;
    int z;
}
pos [(1986 - 986)];
struct   str {
    int point1;
    int point2;
    double  itBoAHv4C53;
}
length [(251 - 151)], zhulyQb9ZaV;

int main () {
    int n;
    int i;
    int j;
    int num;
    int k;
    num = (51 - 51);
    cin >> n;
    {
        i = (436 - 435);
        while (n >= i) {
            cin >> pos[i].x >> pos[i].fpWPc9n6UZw5 >> pos[i].z;
            i = i + (234 - 233);
        }
    }
    {
        i = (806 - 805);
        while (n >= i) {
            k = (283 - 283);
            {
                if ((176 - 176)) {
                    return (723 - 723);
                }
            }
            {
                j = i + (391 - 390);
                while (n >= j) {
                    k = k + (981 - 980);
                    pos[i].itBoAHv4C53[k] = (pos[i].x - pos[j].x) * (pos[i].x - pos[j].x) + (pos[i].fpWPc9n6UZw5 - pos[j].fpWPc9n6UZw5) * (pos[i].fpWPc9n6UZw5 - pos[j].fpWPc9n6UZw5) + (pos[i].z - pos[j].z) * (pos[i].z - pos[j].z);
                    num = num + (638 - 637);
                    length[num].point1 = i;
                    length[num].point2 = j;
                    length[num].itBoAHv4C53 = pos[i].itBoAHv4C53[k];
                    j = j + (992 - 991);
                }
            }
            i = i + (719 - 718);
        }
    }
    {
        i = (443 - 442);
        while (num > i) {
            j = (210 - 209);
            while (j <= num - i) {
                if (length[j].itBoAHv4C53 < length[j + (624 - 623)].itBoAHv4C53) {
                    zhulyQb9ZaV = length[j];
                    {
                        if ((735 - 735)) {
                            return (674 - 674);
                        }
                    }
                    length[j] = length[j + (999 - 998)];
                    length[j + (692 - 691)] = zhulyQb9ZaV;
                }
                j = j + (773 - 772);
            }
            i = i + (69 - 68);
        }
    }
    {
        i = (709 - 708);
        while (i <= num) {
            cout << "(" << pos[length[i].point1].x << "," << pos[length[i].point1].fpWPc9n6UZw5 << "," << pos[length[i].point1].z << ")" << "-" << "(" << pos[length[i].point2].x << "," << pos[length[i].point2].fpWPc9n6UZw5 << "," << pos[length[i].point2].z << ")" << "=" << fixed << setprecision ((899 - 897)) << sqrt (length[i].itBoAHv4C53) << endl;
            i = i + 1;
        }
    }
    return 0;
}

