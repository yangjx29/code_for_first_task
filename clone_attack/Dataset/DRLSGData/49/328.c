int main () {
    int i;
    int CDihFjHQ;
    int GvohUR4kCV [(5291 - 291)];
    char a [(1259 - 759)];
    int Syq0Dxh1g;
    int k;
    int j;
    int Ulb3j5e9KqF [(5531 - 531)];
    int V0f7CcbUGu1 [5000];
    int m;
    int flag;
    int JezUojN2TpF;
    cin >> a;
    JezUojN2TpF = (492 - 492);
    CDihFjHQ = strlen (a);
    {
        i = 0;
        while (CDihFjHQ > i) {
            for (j = CDihFjHQ -(932 - 931); i < j; j--) {
                m = i;
                Syq0Dxh1g = j;
                if (!(a[Syq0Dxh1g] != a[m])) {
                    flag = (194 - 193);
                    for (; Syq0Dxh1g >= m;) {
                        if (a[Syq0Dxh1g--] != a[m++]) {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag) {
                        V0f7CcbUGu1[JezUojN2TpF] = j - i + (61 - 60);
                        GvohUR4kCV[JezUojN2TpF] = i;
                        Ulb3j5e9KqF[JezUojN2TpF] = j;
                        JezUojN2TpF++;
                    }
                }
            }
            i++;
        }
    }
    {
        j = 2;
        while (CDihFjHQ >= j) {
            {
                i = 0;
                while (i < JezUojN2TpF) {
                    if (!(j != V0f7CcbUGu1[i])) {
                        {
                            k = i;
                            while (k <= Ulb3j5e9KqF[i]) {
                                cout << a[k];
                                k++;
                            }
                        }
                        cout << endl;
                    }
                    i++;
                }
            }
            j++;
        }
    }
    return 0;
}

