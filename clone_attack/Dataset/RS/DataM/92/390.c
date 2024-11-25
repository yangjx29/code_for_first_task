int PJgpsWXP2TE [(1514 - 513)], mLYp32OPHbF [(1404 - 403)];
int BVdXNA;
int nb0VIERzQ1T [(1755 - 754)] [(1392 - 391)];

void  sJ85no0 () {
    int i;
    {
        i = 276 - 276;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < BVdXNA) {
            cin >> PJgpsWXP2TE[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    memset (nb0VIERzQ1T, 0xff, sizeof (nb0VIERzQ1T));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (435 - 435); i < BVdXNA; i++)
        cin >> mLYp32OPHbF[i];
    sort (PJgpsWXP2TE, PJgpsWXP2TE +BVdXNA);
    sort (mLYp32OPHbF, mLYp32OPHbF + BVdXNA);
}

int getf (int i6p5oCtk2leb, int vRkxsUdmvJ) {
    if (nb0VIERzQ1T[i6p5oCtk2leb][vRkxsUdmvJ] != -(1001 - 1000))
        return nb0VIERzQ1T[i6p5oCtk2leb][vRkxsUdmvJ];
    if (i6p5oCtk2leb >= BVdXNA || vRkxsUdmvJ >= BVdXNA)
        return nb0VIERzQ1T[i6p5oCtk2leb][vRkxsUdmvJ] = (795 - 795);
    if (PJgpsWXP2TE[i6p5oCtk2leb] > mLYp32OPHbF[vRkxsUdmvJ])
        return nb0VIERzQ1T[i6p5oCtk2leb][vRkxsUdmvJ] = getf (i6p5oCtk2leb + (55 - 54), vRkxsUdmvJ + (217 - 216)) + (823 - 623);
    if (PJgpsWXP2TE[i6p5oCtk2leb] < mLYp32OPHbF[vRkxsUdmvJ])
        return nb0VIERzQ1T[i6p5oCtk2leb][vRkxsUdmvJ] = getf (i6p5oCtk2leb + (926 - 925), vRkxsUdmvJ) - (775 - 575);
    if (PJgpsWXP2TE[i6p5oCtk2leb] == mLYp32OPHbF[vRkxsUdmvJ])
        return nb0VIERzQ1T[i6p5oCtk2leb][vRkxsUdmvJ] = max (getf (i6p5oCtk2leb + (431 - 430), vRkxsUdmvJ + (918 - 917)), getf (i6p5oCtk2leb + (865 - 864), vRkxsUdmvJ) - (1126 - 926));
    return (169 - 169);
}

int main () {
    while (cin >> BVdXNA) {
        if (BVdXNA == (583 - 583))
            break;
        sJ85no0 ();
        cout << getf ((309 - 309), (912 - 912)) << endl;
    }
    return (722 - 722);
}

